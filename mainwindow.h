#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_comboBox_2_activated(int index);

    void on_comboBox_activated(int index);

    void on_horizontalSlider_5_actionTriggered(int action);

    void on_horizontalSlider_5_sliderMoved(int position);

    void on_horizontalSlider_5_valueChanged(int value);

    void on_horizontalSlider_valueChanged(int value);

    void on_horizontalSliderX_valueChanged(int value);

    void on_horizontalSliderY_valueChanged(int value);

    void on_horizontalSliderH_valueChanged(int value);

    void on_horizontalSliderW_valueChanged(int value);

    void on_comboBox_3_activated(int index);

    void on_comboBox_4_activated(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
