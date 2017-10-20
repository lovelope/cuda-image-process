#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QPixmap>

#include <QDebug>

#include <string>


#include "image-process.h"


using namespace std;
using namespace cv;

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

	string file = "";   // 图像文件名
	string ext = "";    // 文件后缀

	Mat src;            // 原图像数据矩阵
	Mat dst_scale_cpu;  // CPU缩放矩阵
	Mat dst_scale_gpu;  // GPU缩放矩阵

	Mat dst_trans_cpu;  // CPU平移矩阵
	Mat dst_trans_gpu;  // GPU平移矩阵

	Mat dst_mirror_cpu; // CPU镜像矩阵
	Mat dst_mirror_gpu; // GPU镜像矩阵

	Mat dst_rotate_cpu; // CPU旋转矩阵
	Mat dst_rotate_gpu; // GPU旋转矩阵

	Mat dst_cut_cpu;    // CPU错切矩阵
	Mat dst_cut_gpu;    // GPU错切矩阵
	bool flag_useGPU = true;   // 默认使用GPU

	void displayBef(Mat);  // 显示图片
	void displayAft(Mat);  // 显示图片


private:
	Ui::MainWindow *ui;


	private slots:
	void on_startBtn_clicked();
	void on_pauseBtn_clicked();
	void on_stopBtn_clicked();
	void openFileSlot();
	void openFolderSlot();
	void translateSlot();
	void mirrorSlot();
	void shearSlot();
	void scaleSlot();
	void rotateSlot();
	void aboutSlot();

};

#endif // MAINWINDOW_H
