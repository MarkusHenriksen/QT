#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/opencv.hpp>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cv::Mat inputImage = cv::imread("{/home/ams/Pictures/pexels-photo-635499.jpeg}");
    if(!inputImage.empty()) cv::imshow("Display Image", inputImage);
}

MainWindow::~MainWindow()
{
    delete ui;
}
