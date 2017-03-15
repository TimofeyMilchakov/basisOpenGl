#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGL>



class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GLWidget(QWidget *parent = 0);

    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
    void addTips(int tips);
    void testPros(int ind, float w);
    void modOn();
    void addBox(int x,int y,int h,int w );
    void addSmesh(int i,int j);

private:
    int t;
    //int pros;
};

#endif // GLWIDGET_H
