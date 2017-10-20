#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->argTabWidget->setCurrentIndex(0);
    ui->transXVal->setText(0);
    ui->transYVal->setText(0);
    ui->mirDirectionVal->setCurrentIndex(0);
    ui->shearDirectionVal->setCurrentIndex(0);
    ui->shearVal->setText(0);
    ui->scaleXVal->setText(QString::number(1));
    ui->scaleYVal->setText(QString::number(1));
    ui->rotateVal->setText(0);
    ui->progressBar->setRange(0, 5);  // 设置进度条
    ui->progressBar->setValue(0);

    QObject::connect(ui->openAction, SIGNAL(triggered(bool)), this, SLOT(openFileSlot()));
    QObject::connect(ui->openFolderAction, SIGNAL(triggered(bool)), this, SLOT(openFolderSlot()));
    QObject::connect(ui->exitAction, SIGNAL(triggered(bool)), this, SLOT(close()));

    QObject::connect(ui->translateAction, SIGNAL(triggered()), this, SLOT(translateSlot()));
    QObject::connect(ui->mirrorAction, SIGNAL(triggered()), this, SLOT(mirrorSlot()));
    QObject::connect(ui->shearAction, SIGNAL(triggered()), this, SLOT(shearSlot()));
    QObject::connect(ui->scaleAction, SIGNAL(triggered()), this, SLOT(scaleSlot()));
    QObject::connect(ui->rotateAction, SIGNAL(triggered()), this, SLOT(rotateSlot()));

    QObject::connect(ui->aboutAction, SIGNAL(triggered()), this, SLOT(aboutSlot()));

    flag_useGPU = initCUDA (); // 检查是否有支持CUDA的设备
	statusBar()->showMessage(flag_useGPU ? tr("Ready. Using GPU.") : tr("Ready. Using CPU."));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startBtn_clicked()
{
    if (file == ""){
        QMessageBox::information(this, "Error Message", "Please select a bmp picture.");
        return;
    }

    int transXVal = round((ui->transXVal->text()).trimmed().toDouble());			// 平移变换x
    int transYVal = round((ui->transYVal->text()).trimmed().toDouble());			// 平移变换y

    int mirDirectionVal = ui->mirDirectionVal->currentIndex();			// 镜像变换方向

    int shearDirectionVal = ui->shearDirectionVal->currentIndex();		// 错切变换方向
    int shearVal = abs(round((ui->shearVal->text()).trimmed().toDouble()));   	// 错切量

    double scaleXVal = (ui->scaleXVal->text()).trimmed().toDouble();	// 缩放率X
    double scaleYVal = (ui->scaleYVal->text()).trimmed().toDouble();	// 缩放率Y

    int rotateVal = round((ui->rotateVal->text()).trimmed().toDouble());	        // 旋转角度

    qDebug() << "transXVal=" << transXVal << ", transYVal=" << transYVal;
    qDebug() << "mirDirectionVal=" << mirDirectionVal;
    qDebug() << "shearDirectionVal=" << shearDirectionVal << ", shearVal=" << shearVal;
    qDebug() << "scaleXVal=" << scaleXVal << ", scaleYVal=" << scaleYVal;
    qDebug() << "rotateVal=" << rotateVal;


    if (flag_useGPU){
        transferImageGPU(src, dst_trans_gpu, transXVal, transYVal);
        displayAft(dst_trans_gpu);
        imwrite(file+"._transfer_."+ext, dst_trans_gpu);
        ui->progressBar->setValue(1);

        mirrorImageGPU(src, dst_mirror_gpu, mirDirectionVal);
        displayAft(dst_mirror_gpu);
        imwrite(file+"._mirror_."+ext, dst_mirror_gpu);
        ui->progressBar->setValue(2);

        cutImageGPU(src, dst_cut_gpu, shearDirectionVal, shearVal);
        displayAft(dst_cut_gpu);
        imwrite(file+"._cut_."+ext, dst_cut_gpu);
        ui->progressBar->setValue(3);

        resizeImageGPU(src, dst_scale_gpu, Size(src.cols * scaleXVal, src.rows * scaleYVal));
        displayAft(dst_scale_gpu);
        imwrite(file+"._scale_."+ext, dst_scale_gpu);
        ui->progressBar->setValue(4);

        rotateImageGPU(src, dst_rotate_gpu, rotateVal);
        displayAft(dst_rotate_gpu);
        imwrite(file+"._rotate_."+ext, dst_rotate_gpu);
        ui->progressBar->setValue(5);
    }else{
        transferImage(src, dst_trans_cpu, transXVal, transYVal);
        displayAft(dst_trans_cpu);
        imwrite(file+"._transfer_."+ext, dst_trans_cpu);
        ui->progressBar->setValue(1);

        mirrorImage(src, dst_mirror_cpu, mirDirectionVal);
        displayAft(dst_mirror_cpu);
        imwrite(file+"._mirror_."+ext, dst_mirror_cpu);
        ui->progressBar->setValue(2);

        cutImage(src, dst_cut_cpu, shearDirectionVal, shearVal);
        displayAft(dst_cut_cpu);
        imwrite(file+"._cut_."+ext, dst_cut_cpu);
        ui->progressBar->setValue(3);

        resizeImage(src, dst_scale_cpu, Size(src.cols * scaleXVal, src.rows * scaleYVal));
        displayAft(dst_scale_cpu);
        imwrite(file+"._scale_."+ext, dst_scale_cpu);
        ui->progressBar->setValue(4);

        rotateImage(src, dst_rotate_cpu, rotateVal);
        displayAft(dst_rotate_cpu);
        imwrite(file+"._rotate_."+ext, dst_rotate_cpu);
        ui->progressBar->setValue(5);
    }
	statusBar()->showMessage(tr("Finished."));
}

void MainWindow::displayBef(cv::Mat mat)
{
    cv::Mat rgb;
    QImage img;
    if(mat.channels()==3)
    {
        cv::cvtColor(mat,rgb,CV_BGR2RGB);
        img = QImage((const uchar*)(rgb.data),rgb.cols,rgb.rows,rgb.cols*rgb.channels(),QImage::Format_RGB888);
    }
    else
    {
        img = QImage((const uchar*)(mat.data),mat.cols,mat.rows,mat.cols*mat.channels(),QImage::Format_Indexed8);
	}
    ui->imgBefLabel->setPixmap(QPixmap::fromImage(img));
    ui->imgBefLabel->resize(ui->imgBefLabel->pixmap()->size());
    ui->imgBefLabel->show();
}
void MainWindow::displayAft(cv::Mat mat)
{
    cv::Mat rgb;
    QImage img;
    if(mat.channels()==3)
    {
        cv::cvtColor(mat,rgb,CV_BGR2RGB);
        img = QImage((const uchar*)(rgb.data),rgb.cols,rgb.rows,rgb.cols*rgb.channels(),QImage::Format_RGB888);
    }
    else
    {
        img = QImage((const uchar*)(mat.data),mat.cols,mat.rows,mat.cols*mat.channels(),QImage::Format_Indexed8);
    }
    ui->imgAftLabel->setPixmap(QPixmap::fromImage(img));
    ui->imgAftLabel->resize(ui->imgAftLabel->pixmap()->size());
    ui->imgAftLabel->show();
}

void MainWindow::openFileSlot()
{
	QString fileName = QFileDialog::getOpenFileName(
		this,
		tr("OpenImage"),
		".",
		tr("Image Files (*.png *.jpg *.jpeg *.bmp);;All Files (*.*)"));
    if(fileName.length()<=0)return;
    //imread的第二个参数：读取4通道的png图像。其中第四个通道的数据类型和其他通道的一样，都是uchar型，完全透明为0，否则为255
    file = fileName.toLocal8Bit().data();	// toLocal8Bit():可以读取中文
    ext = file.substr(file.rfind('.') == std::string::npos ? file.length() : file.rfind('.') + 1);
    src=cv::imread(fileName.toLocal8Bit().data(), 1);
    displayBef(src);

}

void MainWindow::on_pauseBtn_clicked()
{
    qDebug() << "pause button is clicked.";
}

void MainWindow::on_stopBtn_clicked()
{
    qDebug() << "stop button is clicked.";
}

void MainWindow::openFolderSlot()
{
	QString fileName = QFileDialog::getOpenFileName(
		this,
		tr("OpenImage"),
		".",
		tr("Image Files (*.png *.jpg *.jpeg *.bmp);;All Files (*.*)"));
	if (fileName.length() <= 0)return;
	//imread的第二个参数：读取4通道的png图像。其中第四个通道的数据类型和其他通道的一样，都是uchar型，完全透明为0，否则为255
	file = fileName.toLocal8Bit().data();	// toLocal8Bit():可以读取中文
	ext = file.substr(file.rfind('.') == std::string::npos ? file.length() : file.rfind('.') + 1);
	src = cv::imread(fileName.toLocal8Bit().data(), 1);
	displayBef(src);
}

void MainWindow::translateSlot()
{
    qDebug() << "tab 0 is selected.";
    ui->argTabWidget->setCurrentIndex(0);
}

void MainWindow::mirrorSlot()
{
    qDebug() << "tab 1 is selected.";
    ui->argTabWidget->setCurrentIndex(1);
}

void MainWindow::shearSlot()
{
    qDebug() << "tab 2 is selected.";
    ui->argTabWidget->setCurrentIndex(2);
}

void MainWindow::scaleSlot()
{
    qDebug() << "tab 3 is selected.";
    ui->argTabWidget->setCurrentIndex(3);
}

void MainWindow::rotateSlot()
{
    qDebug() << "tab 4 is selected.";
    ui->argTabWidget->setCurrentIndex(4);
}

void MainWindow::aboutSlot()
{
    QMessageBox::information(this, "About", "This application is used for image processing.\n\nversion 1.2.0");
}

