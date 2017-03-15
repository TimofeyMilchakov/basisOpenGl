#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox->insertItem(0,"GL_POINT");
    ui->comboBox->insertItem(1,"GL_LINES");
    ui->comboBox->insertItem(2,"GL_LINE_STRIP");
    ui->comboBox->insertItem(3,"GL_LINE_LOOP");
    ui->comboBox->insertItem(4,"GL_TRIANGLES");
    ui->comboBox->insertItem(5,"GL_TRIANGLE_STRIP");
    ui->comboBox->insertItem(6,"GL_TRIANGLE_FAN");
    ui->comboBox->insertItem(7,"GL_QUADS");
    ui->comboBox->insertItem(8,"GL_QUAD_STRIP");
    ui->comboBox->insertItem(9,"GL_POLYGON");
    //для теста прозрачности

    ui->comboBox_2->insertItem(0,"GL_NEVER");
    ui->comboBox_2->insertItem(1,"GL_LESS");
    ui->comboBox_2->insertItem(2,"GL_EQUAL");
    ui->comboBox_2->insertItem(3,"GL_LEQUAL");
    ui->comboBox_2->insertItem(4,"GL_GREATER");
    ui->comboBox_2->insertItem(5,"GL_NOTEQUAL");
    ui->comboBox_2->insertItem(6,"GL_GEQUAL");
    ui->comboBox_2->insertItem(7,"GL_ALWAYS");
    //, , , , , , , и GL_SRC_ALPHA_SATURATE.
    ui->comboBox_3->insertItem(0,"GL_ZERO");
    ui->comboBox_3->insertItem(1,"GL_ONE");
    ui->comboBox_3->insertItem(2,"GL_DST_COLOR");
    ui->comboBox_3->insertItem(3,"GL_ONE_MINUS_DST_COLOR");
    ui->comboBox_3->insertItem(4,"GL_SRC_ALPHA");
    ui->comboBox_3->insertItem(5,"GL_ONE_MINUS_SRC_ALPHA");
    ui->comboBox_3->insertItem(6,"GL_DST_ALPHA");
    ui->comboBox_3->insertItem(7," GL_ONE_MINUS_DST_ALPHA");
    ui->comboBox_3->insertItem(8,"GL_SRC_ALPHA_SATURATE");
    //, , , , , ,  и
    ui->comboBox_4->insertItem(0,"GL_ZERO");
    ui->comboBox_4->insertItem(1,"GL_ONE");
    ui->comboBox_4->insertItem(2,"GL_SRC_COLOR");
    ui->comboBox_4->insertItem(3,"GL_ONE_MINUS_SRC_COLOR");
    ui->comboBox_4->insertItem(4,"GL_SRC_ALPHA");
    ui->comboBox_4->insertItem(5,"GL_ONE_MINUS_SRC_ALPHA");
    ui->comboBox_4->insertItem(6,"GL_DST_ALPHA");
    ui->comboBox_4->insertItem(7,"GL_ONE_MINUS_DST_ALPHA");



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
   ui->widget->addTips(ui->comboBox->currentIndex());
   ui->widget->initializeGL();
   ui->widget->update();

}

void MainWindow::on_comboBox_2_activated(int index)
{
    float qwe = (float)ui->horizontalSlider_5->value()/100;
    ui->widget->modOn();
        ui->widget->testPros(index,qwe);
         ui->widget->update();
}

void MainWindow::on_comboBox_activated(int index)
{
    ui->widget->addTips(index);
    ui->widget->initializeGL();
    ui->widget->update();
}

void MainWindow::on_horizontalSlider_5_actionTriggered(int action)
{



}

void MainWindow::on_horizontalSlider_5_sliderMoved(int position)
{


}

void MainWindow::on_horizontalSlider_5_valueChanged(int value)
{

float qwe = (float)value/100;
ui->widget->modOn();
    ui->widget->testPros(ui->comboBox_2->currentIndex(),qwe);
     ui->widget->update();
}


void MainWindow::on_horizontalSliderX_valueChanged(int value)
{
    ui->widget->modOn();
    ui->widget->addBox(value,ui->horizontalSliderY->value(),ui->horizontalSliderH->value(),ui->horizontalSliderW->value());
}

void MainWindow::on_horizontalSliderY_valueChanged(int value)
{
    ui->widget->modOn();
    ui->widget->addBox(ui->horizontalSliderX->value(),value,ui->horizontalSliderH->value(),ui->horizontalSliderW->value());

}

void MainWindow::on_horizontalSliderH_valueChanged(int value)
{
    ui->widget->modOn();
    ui->widget->addBox(ui->horizontalSliderX->value(),ui->horizontalSliderY->value(),value,ui->horizontalSliderW->value());

}
void MainWindow::on_horizontalSlider_valueChanged(int value){

}

void MainWindow::on_horizontalSliderW_valueChanged(int value)
{
    ui->widget->modOn();
    ui->widget->addBox(ui->horizontalSliderX->value(),ui->horizontalSliderY->value(),ui->horizontalSliderH->value(),value);
}

void MainWindow::on_comboBox_3_activated(int index)
{
    ui->widget->modOn();
    ui->widget->addSmesh(index,ui->comboBox_4->currentIndex());
}

void MainWindow::on_comboBox_4_activated(int index)
{
    ui->widget->modOn();
    ui->widget->addSmesh(ui->comboBox_3->currentIndex(),index);
}
