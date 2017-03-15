#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent) :
    QGLWidget(parent)
{
    this->t=0;
}

void GLWidget::initializeGL(){
    glClearColor(0.2,0.2,0.2,0.7);

}

void GLWidget::addTips(int tips)
{
    this->t=tips;
}

void GLWidget::paintGL(){

    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);
   switch(t)
    {case 0: glBegin(GL_POINTS);
       break;
    case 1: glBegin(GL_LINES);
       break;
        case 2: glBegin(GL_LINE_STRIP);
       break;
        case 3:glBegin(GL_LINE_LOOP);
       break;
        case 4:glBegin(GL_TRIANGLES);
       break;
        case 5:glBegin(GL_TRIANGLE_STRIP);
       break;
        case 6:glBegin(GL_TRIANGLE_FAN);
       break;
        case 7:glBegin(GL_QUADS);
       break;
        case 8:glBegin(GL_QUAD_STRIP);
       break;
        case 9:glBegin(GL_POLYGON);
       break;
    default:glBegin(GL_POINT);}
  //  glBegin(GL_LINE_LOOP);
   glColor3f(1.0, 0.0, 0.0);   /* красный */
   glVertex2f(-0.6,-0.4);
   glVertex2f(-0.7,0);
   glVertex2f(-0.5,0.4);
   glColor3f(0, 1.0, 0.0);
   glVertex2f(0,0.7);
   glVertex2f(0.4,0.6);
   glVertex2f(0.9,0.1);
   glColor3f(0, 0.0, 1.0);
   glVertex2f(0.9,-0.2);
   glVertex2f(0.95,-0.8);
   glVertex2f(-0.8,0.1);

    glEnd();




}
void GLWidget::addBox(int x,int y,int w,int h )
{
    glClear(GL_COLOR_BUFFER_BIT);
    glEnable(GL_SCISSOR_TEST);
    glScissor(x,y,w,h);
    update();
}

void GLWidget::modOn(){
    glDisable(GL_SCISSOR_TEST );
    glDisable(GL_ALPHA_TEST);
    glDisable(GL_BLEND);

}

void GLWidget::testPros(int ind,float w)
{
 /*   GL_NEVER
    GL_LESS
    GL_EQUAL
    GL_LEQUAL
    GL_GREATER
    GL_NOTEQUAL
  GL_GEQUAL
    GL_ALWAYS*/
    glClear(GL_COLOR_BUFFER_BIT);
    glEnable(GL_ALPHA_TEST);
    switch (ind)
    {
            case 0:  glAlphaFunc(GL_NEVER, w);
                break;
            case 1:glAlphaFunc(GL_LESS, w);
                break;
            case 2:glAlphaFunc(GL_EQUAL, w);
                break;
            case 3:glAlphaFunc(GL_LEQUAL, w);
                break;
            case 4:glAlphaFunc(GL_GREATER, w);
                break;
            case 5:glAlphaFunc(GL_NOTEQUAL, w);
                break;
            case 6:glAlphaFunc(GL_GEQUAL, w);
                break;
            case 7:glAlphaFunc(GL_ALWAYS, w);
                break;


    }

}

void GLWidget::addSmesh(int i,int j){

    glEnable(GL_BLEND);
     GLenum qwe;
     GLenum qwe1;

     switch(i)
     {
     case 0:qwe = GL_ZERO;
         break;
     case 1:qwe = GL_ONE;
         break;
     case 2:qwe = GL_DST_COLOR;
         break;
     case 3:qwe = GL_ONE_MINUS_DST_COLOR;
         break;
     case 4:qwe = GL_SRC_ALPHA;
         break;
     case 5:qwe = GL_ONE_MINUS_SRC_ALPHA;
         break;
     case 6:qwe = GL_DST_ALPHA;
         break;
     case 7:qwe = GL_ONE_MINUS_DST_ALPHA;
         break;
     case 8:qwe = GL_SRC_ALPHA_SATURATE;
         break;



     }


     switch (j) {
     case 0:qwe1=GL_ZERO ;
           break;
     case 1:qwe1=GL_ONE ;
           break;
     case 2:qwe1= GL_SRC_COLOR ;
           break;
     case 3:qwe1= GL_ONE_MINUS_SRC_COLOR;
           break;
     case 4:qwe1= GL_SRC_ALPHA;
           break;
     case 5:qwe1= GL_ONE_MINUS_SRC_ALPHA;
           break;
     case 6:qwe1= GL_DST_ALPHA;
           break;
     case 7:qwe1= GL_ONE_MINUS_DST_ALPHA;
           break;


     }
      glBlendFunc(qwe, qwe1);
      update();

}

void GLWidget::resizeGL(int w, int h)
{
 glViewport(0,0,w,h);


}
