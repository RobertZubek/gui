#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect button click event to slot function
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Slot function for button click
void MainWindow::onButtonClicked()
{
    // Update label text when the button is clicked
    ui->label->setText("Button Clicked!");
}
