#define GL_SILENCE_DEPRECATION
#include <gl/glut.h>
#include <math.h>
float m=-12,n=100,o=0;

void init(){
    glClearColor(0, 0.5, 0.7, 0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0,200,0,200,-200,200);
    glMatrixMode(GL_MODELVIEW);
}
void ObjectKeys(int key, int xx, int yy)
{
    switch (key)
    {
    case GLUT_KEY_LEFT:
    {
        m-=5;
        break;
    }
    case GLUT_KEY_RIGHT:
        m+=5;
        break;
    case GLUT_KEY_UP:
        n+=5;
        break;
    case GLUT_KEY_DOWN:
        n-=5;
        break;
    case GLUT_KEY_RIGHT && GLUT_KEY_UP:
        break;


    }
}


void draw_tree1()
{
 //1st tree
 glColor3f(0.1f, 0.0f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex2f(-30.0, 5.0);
 glVertex2f(-25.0, 5.0);
 glVertex2f(-25.0, 10.0);
 glVertex2f(-30.0, 10.0);
 glEnd();

 glColor3f(0.0f, 0.5f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex2f(-17.5, 10.0);
 glVertex2f(-22.5, 15.0);
 glVertex2f(-32.5, 15.0);
 glVertex2f(-37.5, 10.0);
 glEnd();

 glColor3f(0.0f, 0.5f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex2f(-20.0, 15.0);
 glVertex2f(-25.0, 20.0);
 glVertex2f(-30.0, 20.0);
 glVertex2f(-35.0, 15.0);
 glEnd();

 glColor3f(0.0f, 0.5f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex2f(-22.5, 20.0);
 glVertex2f(-27.5, 25.0);
 glVertex2f(-32.5, 20.0);
 glEnd();

}

void draw_tree2(){
    //2nd tree
 glColor3f(0.1f, 0.0f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex2f(30.0, 5.0);
 glVertex2f(25.0, 5.0);
 glVertex2f(25.0, 10.0);
 glVertex2f(30.0, 10.0);
 glEnd();

 glColor3f(0.0f, 0.5f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex2f(17.5, 10.0);
 glVertex2f(22.5, 15.0);
 glVertex2f(32.5, 15.0);
 glVertex2f(37.5, 10.0);
 glEnd();

 glColor3f(0.0f, 0.5f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex2f(20.0, 15.0);
 glVertex2f(25.0, 20.0);
 glVertex2f(30.0, 20.0);
 glVertex2f(35.0, 15.0);
 glEnd();

 glColor3f(0.0f, 0.5f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex2f(22.5, 20.0);
 glVertex2f(27.5, 25.0);
 glVertex2f(32.5, 20.0);
 glEnd();
}

void building1(){
glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 1.0);
 glVertex3f(28, -7, 0);
 glVertex3f(28, 7, 0);
 glVertex3f(32, 7, 0);
 glVertex3f(32, -7, 0);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 1.0);
 glVertex3f(28, 10, 0);
 glVertex3f(28, 20, 0);
 glVertex3f(32, 20, 0);
 glVertex3f(32, 10, 0);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 1.0);
 glVertex3f(38, -2, 0);
 glVertex3f(38, 5, 0);
 glVertex3f(42, 5, 0);
 glVertex3f(42, -2, 0);
 glEnd();

glBegin(GL_POLYGON);
 glColor3f(1.0, 0.0, 0.0);
 glVertex3f(25, -7, 0);
 glVertex3f(25, 30, 0);
 glVertex3f(35, 30, 0);
 glVertex3f(35, 10, 0);
 glVertex3f(45, 10, 0);
 glVertex3f(45, -7, 0);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 0.0);
 glVertex3f(30, 40, 0);
 glVertex3f(25, 30, 0);
 glVertex3f(35, 30, 0);
 glEnd();


}

void building2(){

glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 1.0);
 glVertex3f(-35, 6, 0);
 glVertex3f(-32, 6, 0);
 glVertex3f(-32, -7, 0);
 glVertex3f(-35, -7, 0);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 1.0);
 glVertex3f(-30, 6, 0);
 glVertex3f(-26, 6, 0);
 glVertex3f(-26, 10, 0);
 glVertex3f(-30, 10, 0);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(0.7, 0, 0.7);
 glVertex3f(-40, -7, 0);
 glVertex3f(-25, -7, 0);
 glVertex3f(-25, 15, 0);
 glVertex3f(-40, 15, 0);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0,5, 0.0);
 glVertex3f(-38, 23, 0);
 glVertex3f(-27, 23, 0);
 glVertex3f(-25, 15, 0);
 glVertex3f(-40, 15, 0);
 glEnd();



 glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
 glVertex3f(-30, 8, 0);
 glVertex3f(-26, 8, 0);
 glEnd();

 glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
 glVertex3f(-28, 6, 0);
 glVertex3f(-28, 10, 0);
 glEnd();


}

void building3()
{
  glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 1.0);
 glVertex3f(-5, -7, 0);
 glVertex3f(5, -7, 0);
 glVertex3f(5, 15, 0);
 glVertex3f(-5, 15, 0);
 glEnd();

 glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
 glVertex3f(15, 15, 0);
 glVertex3f(-15, 15, 0);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 1.0);
 glVertex3f(-14, 0, 0);
 glVertex3f(-6, 0, 0);
 glVertex3f(-6, 8, 0);
 glVertex3f(-14, 8, 0);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 1.0);
 glVertex3f(-14, 16, 0);
 glVertex3f(-6, 16, 0);
 glVertex3f(-6, 24, 0);
 glVertex3f(-14, 24, 0);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 1.0);
 glVertex3f(-5, 16, 0);
 glVertex3f(5, 16, 0);
 glVertex3f(5, 24, 0);
 glVertex3f(-5, 24, 0);
 glEnd();


 glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 1.0);
 glVertex3f(6, 0, 0);
 glVertex3f(14, 0, 0);
 glVertex3f(14, 8, 0);
 glVertex3f(6, 8, 0);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 1.0);
 glVertex3f(6, 24, 0);
 glVertex3f(14, 24, 0);
 glVertex3f(14, 16, 0);
 glVertex3f(6, 16, 0);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 1.0);
 glVertex3f(-35, 6, 0);
 glVertex3f(-32, 6, 0);
 glVertex3f(-32, -7, 0);
 glVertex3f(-35, -7, 0);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0, 1.0, 1.0);
 glVertex3f(-30, 6, 0);
 glVertex3f(-26, 6, 0);
 glVertex3f(-26, 10, 0);
 glVertex3f(-30, 10, 0);
 glEnd();

 glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
 glVertex3f(-30, 8, 0);
 glVertex3f(-26, 8, 0);
 glEnd();

 glBegin(GL_LINES);
 glColor3f(0.0, 0.0, 0.0);
 glVertex3f(-28, 6, 0);
 glVertex3f(-28, 10, 0);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(1.0, 0.6, 1.0);
 glVertex3f(-15, -7, 0);
 glVertex3f(15, -7, 0);
 glVertex3f(15, 30, 0);
 glVertex3f(-15, 30, 0);
 glEnd();


 glBegin(GL_POLYGON);
 glColor3f(0.6, 1.5, 1.0);
 glVertex3f(-13, 42, 0);
 glVertex3f(13, 42, 0);
 glVertex3f(15, 30, 0);
 glVertex3f(-15, 30, 0);
 glEnd();

}

void house(){
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(10,120);
    glVertex2f(10,125);
    glVertex2f(20,125);
    glVertex2f(20,120);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(14,100);
    glVertex2f(14,110);
    glVertex2f(16,110);
    glVertex2f(16,100);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.990, 0.0, 0.0);
    glVertex2f(10,100);
    glVertex2f(10,120);
    glVertex2f(20,120);
    glVertex2f(20,100);
    glEnd();


}
void tree(){
    glColor3f(.1,0.2,0.1);
    glBegin(GL_TRIANGLES);
    glColor3f(.1,0.5,0.1);
    glVertex2f(30.5,140);
    glVertex2f(28,110);
    glVertex2f(33,110);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(30,100);
    glVertex2f(30,120);
    glVertex2f(31,120);
    glVertex2f(31,100);
    glEnd();
}

void tree1(){
    glColor3f(0.1,0.2,0.1);
    glBegin(GL_TRIANGLES);
    glColor3f(.1,0.5,0.1);
    glVertex2f(30.5,140);
    glVertex2f(28,110);
    glVertex2f(33,110);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(30,100);
    glVertex2f(30,120);
    glVertex2f(31,120);
    glVertex2f(31,100);
    glEnd();
}

void lanes(){
    glBegin(GL_POLYGON); //lanes
    glColor3f(1.0,0.9,0.0);
    glVertex2f(20,0);
    glVertex2f(20,5);
    glVertex2f(30,5);
    glVertex2f(30,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.7,0.7,0.7);
    glVertex2f(30,0);
    glVertex2f(30,5);
    glVertex2f(40,5);
    glVertex2f(40,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.9,0.0);
    glVertex2f(40,0);
    glVertex2f(40,5);
    glVertex2f(50,5);
    glVertex2f(50,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.7,0.7,0.7);
    glVertex2f(50,0);
    glVertex2f(50,5);
    glVertex2f(60,5);
    glVertex2f(60,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.9,0.0);
    glVertex2f(60,0);
    glVertex2f(60,5);
    glVertex2f(70,5);
    glVertex2f(70,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.7,0.7,0.7);
    glVertex2f(70,0);
    glVertex2f(70,5);
    glVertex2f(80,5);
    glVertex2f(80,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.9,0.0);
    glVertex2f(80,0);
    glVertex2f(80,5);
    glVertex2f(90,5);
    glVertex2f(90,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.7,0.7,0.7);
    glVertex2f(90,0);
    glVertex2f(90,5);
    glVertex2f(100,5);
    glVertex2f(100,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.9,0.0);
    glVertex2f(100,0);
    glVertex2f(100,5);
    glVertex2f(110,5);
    glVertex2f(110,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.7,0.7,0.7);
    glVertex2f(110,0);
    glVertex2f(110,5);
    glVertex2f(120,5);
    glVertex2f(120,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.9,0.0);
    glVertex2f(120,0);
    glVertex2f(120,5);
    glVertex2f(130,5);
    glVertex2f(130,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.7,0.7,0.7);
    glVertex2f(130,0);
    glVertex2f(130,5);
    glVertex2f(140,5);
    glVertex2f(140,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.9,0.0);
    glVertex2f(140,0);
    glVertex2f(140,5);
    glVertex2f(150,5);
    glVertex2f(150,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.7,0.7,0.7);
    glVertex2f(150,0);
    glVertex2f(150,5);
    glVertex2f(160,5);
    glVertex2f(160,0);
    glEnd();
    glBegin(GL_POLYGON); //lanes
    glColor3f(1.0,1.0,1.0);
    glVertex2f(40,39);
    glVertex2f(40,43);
    glVertex2f(50,43);
    glVertex2f(50,39);
    glEnd();
    glBegin(GL_POLYGON); //lanes
    glColor3f(1.0,1.0,1.0);
    glVertex2f(70,39);
    glVertex2f(70,43);
    glVertex2f(80,43);
    glVertex2f(80,39);
    glEnd();
    glBegin(GL_POLYGON); //lanes
    glColor3f(1.0,1.0,1.0);
    glVertex2f(100,39);
    glVertex2f(100,43);
    glVertex2f(110,43);
    glVertex2f(110,39);
    glEnd();
    glBegin(GL_POLYGON); //lanes
    glColor3f(1.0,1.0,1.0);
    glVertex2f(58,55);
    glVertex2f(58,68);
    glVertex2f(60,68);
    glVertex2f(60,55);
    glEnd();
    glBegin(GL_POLYGON); //lanes
    glColor3f(1.0,1.0,1.0);
    glVertex2f(58,35);
    glVertex2f(58,48);
    glVertex2f(60,48);
    glVertex2f(60,35);
    glEnd();

}

void road()
{
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(20,80);
    glVertex2f(20,85);
    glVertex2f(30,85);
    glVertex2f(30,80);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(50,80);
    glVertex2f(50,85);
    glVertex2f(60,85);
    glVertex2f(60,80);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(80,80);
    glVertex2f(80,85);
    glVertex2f(90,85);
    glVertex2f(90,80);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(110,80);
    glVertex2f(110,85);
    glVertex2f(120,85);
    glVertex2f(120,80);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(140,80);
    glVertex2f(140,85);
    glVertex2f(150,85);
    glVertex2f(150,80);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0,70);
    glVertex2f(0,100);
    glVertex2f(50,100);
    glVertex2f(50,70);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(50,70);
    glVertex2f(50,100);
    glVertex2f(70,100);
    glVertex2f(70,70);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(70,70);
    glVertex2f(70,100);
    glVertex2f(103,100);
    glVertex2f(103,70);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(103,70);
    glVertex2f(103,100);
    glVertex2f(120,100);
    glVertex2f(120,70);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(120,70);
    glVertex2f(120,100);
    glVertex2f(135,100);
    glVertex2f(135,70);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(135,70);
    glVertex2f(135,100);
    glVertex2f(150,100);
    glVertex2f(150,70);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(150,70);
    glVertex2f(150,100);
    glVertex2f(170,100);
    glVertex2f(170,70);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(50,50);
    glVertex2f(50,70);
    glVertex2f(70,70);
    glVertex2f(70,50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(103,50);
    glVertex2f(103,70);
    glVertex2f(120,70);
    glVertex2f(120,50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(50,100);
    glVertex2f(50,130);
    glVertex2f(70,130);
    glVertex2f(70,100);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(103,100);
    glVertex2f(103,130);
    glVertex2f(120,130);
    glVertex2f(120,100);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(120,120);
    glVertex2f(120,135);
    glVertex2f(150,135);
    glVertex2f(150,120);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(135,100);
    glVertex2f(135,120);
    glVertex2f(150,120);
    glVertex2f(150,100);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(50,130);
    glVertex2f(50,450);
    glVertex2f(120,150);
    glVertex2f(120,130);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(50,30);
    glVertex2f(50,50);
    glVertex2f(120,50);
    glVertex2f(120,30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(20,30);
    glVertex2f(20,50);
    glVertex2f(50,50);
    glVertex2f(50,30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(135,20);
    glVertex2f(135,70);
    glVertex2f(150,70);
    glVertex2f(150,20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(20,5);
    glVertex2f(20,30);
    glVertex2f(40,30);
    glVertex2f(40,5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(40,5);
    glVertex2f(40,20);
    glVertex2f(150,20);
    glVertex2f(150,5);
    glEnd();

glBegin(GL_POLYGON);
    glColor3f(1.0,0.9,0.0);
    glVertex2f(20,0);
    glVertex2f(20,5);
    glVertex2f(30,5);
    glVertex2f(30,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.7,0.7,0.7);
    glVertex2f(30,0);
    glVertex2f(30,5);
    glVertex2f(40,5);
    glVertex2f(40,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.9,0.0);
    glVertex2f(40,0);
    glVertex2f(40,5);
    glVertex2f(50,5);
    glVertex2f(50,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.7,0.7,0.7);
    glVertex2f(50,0);
    glVertex2f(50,5);
    glVertex2f(60,5);
    glVertex2f(60,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.9,0.0);
    glVertex2f(60,0);
    glVertex2f(60,5);
    glVertex2f(70,5);
    glVertex2f(70,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.7,0.7,0.7);
    glVertex2f(70,0);
    glVertex2f(70,5);
    glVertex2f(80,5);
    glVertex2f(80,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.9,0.0);
    glVertex2f(80,0);
    glVertex2f(80,5);
    glVertex2f(90,5);
    glVertex2f(90,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.7,0.7,0.7);
    glVertex2f(90,0);
    glVertex2f(90,5);
    glVertex2f(100,5);
    glVertex2f(100,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.9,0.0);
    glVertex2f(100,0);
    glVertex2f(100,5);
    glVertex2f(110,5);
    glVertex2f(110,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.7,0.7,0.7);
    glVertex2f(110,0);
    glVertex2f(110,5);
    glVertex2f(120,5);
    glVertex2f(120,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.9,0.0);
    glVertex2f(120,0);
    glVertex2f(120,5);
    glVertex2f(130,5);
    glVertex2f(130,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.7,0.7,0.7);
    glVertex2f(130,0);
    glVertex2f(130,5);
    glVertex2f(140,5);
    glVertex2f(140,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.9,0.0);
    glVertex2f(140,0);
    glVertex2f(140,5);
    glVertex2f(150,5);
    glVertex2f(150,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(.7,0.7,0.7);
    glVertex2f(150,0);
    glVertex2f(150,5);
    glVertex2f(160,5);
    glVertex2f(160,0);
    glEnd();
    tree();
    house();



}

void cir(int x,int y)
{
    float th;
    glBegin(GL_LINES);
    for(int i=0;i<360;i++)
    {
        th=i*3.142/180;
        glVertex2f(x+10*cos(th),y+10*sin(th));
    }
    glEnd();
}

void poly()
{
    glBegin(GL_POLYGON);
    glVertex2f(20,190);
    glVertex2f(20,170);
    glVertex2f(60,170);
    glVertex2f(60,190);
    glEnd();

    glPushMatrix();
  cir(20,180);
  glPopMatrix();

  glPushMatrix();
  cir(60,180);
  glPopMatrix();


}


void circfun(float x,float y)
{
    float th;
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        th=i*3.142/180;
        glVertex2f(x+2*cos(th),y+2*sin(th));
    }
    glEnd();
}

void circ(){
    glColor3f (1, 0.0, 0.0);
    circfun(-20,-7);
    circfun(-20,1);
    circfun(-19,8);
    circfun(-16,14);
    circfun(-10,18);
    circfun(-3,21);
    circfun(4,21);
    circfun(10,19);
    circfun(15,15);
    circfun(15,-15);
    circfun(10,-19);
    circfun(4,-21);
    circfun(-3,-21);
    circfun(-10,-18);
    circfun(-16,-14);
    circfun(19,-8);
    circfun(20,7);
    circfun(20,-1);

}

float f=0.0;
void solidcircle(int x,int y,int z){
    f +=0.1;
    glColor3f(1.0,0,0);
    glTranslatef(x,y,z);
    glRotatef(f,0,0,1);
  glutSolidSphere(6,50,50);
  glColor3f(0,0,0);
  glutWireSphere(5.99,100,100);
  glScalef(0.3,0.3,0);
  circ();

}

void MAN()
{
glBegin (GL_POLYGON);//HAIR
glColor3f (0.5, 0.4, 0.3);
glVertex2f (24,53);
glVertex2f (23,55);
glVertex2i (26,55);
glVertex2i (26,56.5);
glVertex2i (31,53);
glEnd();

glColor3f (0.0, 0.0, 0.0);
glRecti (25.7, 50, 26.5, 51.5);//eye1
glRecti (29.5, 50, 30.5, 51.5);//eye2

glBegin (GL_TRIANGLES);//NOSE
glColor3f (0.0, 0.0, 0.0);
glVertex2f (27.5,49);
glVertex2f (27,47);
glVertex2i (28,47);
glEnd();


glBegin (GL_TRIANGLES);//MOUTH
glColor3f (1.0, 0.0, 0.5);
glVertex2i (25.5,46);
glVertex2f (27.5,44);
glVertex2f (29.5,46);
glEnd();

glBegin (GL_QUADS);
glColor3f (0.60, 0.0, 0.);
glVertex2i (24,20);//body
glVertex2i (22,40);
glVertex2i (33,40);
glVertex2i (31,20);
glColor3f (0.0,0.0,0.4);
glVertex2i (25,20);//legs
glVertex2i (20,3);
glVertex2i (25,3);
glVertex2i (27,20);
glVertex2f (30,20);
glVertex2i (34,3);
glVertex2i (29,3);
glVertex2i (28,20);
glColor3f (0.60, 0.0, 0.);
glVertex2f (22,40);//arms
glVertex2f (22.5,38);
glVertex2i (20,23);
glVertex2i (18,25);
glVertex2f (33,40);
glVertex2f (32.5,38);
glVertex2i (38,25);
glVertex2i (36,23);
glEnd();


glColor3f (0.85, 0.95, 0);
glRecti (26, 40, 29, 43);

glBegin (GL_POLYGON);//FACE
glColor3f (0.85, 0.95, 0);
glVertex2f (26,43);
glVertex2f (24,45);
glVertex2i (24,53);
glVertex2i (31,53);
glVertex2i (31,45);
glVertex2i (29,43);
glEnd();



glBegin (GL_TRIANGLES);//SHOE1
glColor3f (1.0, 1.0, 1.0);
glVertex2i (25,3);
glVertex2f (18,1);
glVertex2f (20,3);
glEnd();

glBegin (GL_TRIANGLES);//SHOE2
glColor3f (1.0, 1.0, 1.0);
glVertex2i (29,3);
glVertex2f (37,1);
glVertex2f (34,3);
glEnd();



glBegin (GL_POLYGON);//WRIST1
glColor3f (0.85, 0.95, 0);
glVertex2f (18,25);
glVertex2f (16,25.5);
glVertex2f (17.5,24.5);
glVertex2f (17,23.5);
glVertex2f (18.5,21.5);
glVertex2f (20,23);
glEnd();

glBegin (GL_POLYGON);//WRIST2
glVertex2f (38,25);
glVertex2f (36,23);
glVertex2f (37,21.5);
glVertex2f (39.5,23.5);
glEnd();
glFlush ( ); // Process all OpenGL routines as quickly as possible.

}
float th=0.0;
void vaccine(){
    th+=1.0;
  glPushMatrix();
  glTranslatef(100,100,0);
  //glRotatef(th,0,1,0);
  glScalef(1,4,0);
  glutSolidCube(20);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(100,55,0);
  //lRotatef(th,0,1,0);
  glScalef(1,4,0);
  glutSolidCube(5.0);
  glPopMatrix();


  glPushMatrix();
  glTranslatef(100,45,0);
  //glRotatef(th,0,1,0);
  glScalef(3.5,0.5,0);
  glutSolidCube(5.0);
  glPopMatrix();


  glPushMatrix();
  glTranslatef(100,145,0);
  glColor3f(0.5,0.0,0);
  //glRotatef(th,0,0,0);
  glScalef(0.25,2,0);
  glutSolidCube(5.0);
  glPopMatrix();

    glPushMatrix();
  glColor3f(1,0,0);
  glTranslatef(100,110,0);
  glRotatef(th,1,0,0);
  glScalef(3,10,0);
  glutSolidCube(5);
  glPopMatrix();



}

float k=0;
void tablet(){
    k+=0.5;

    glPushMatrix();
  glColor3f(0,0,1);
    glTranslatef(100,100,-25);
    glScalef(1.5,1,0);
  glutSolidCube(50);
  glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,0);
  glTranslatef(135,100,0);
  glRotatef(k,0,1,0);
  glutSolidSphere(25,20,20);
    glPopMatrix();

    glPushMatrix();
  glTranslatef(65,100,0);
  glRotatef(k,0,1,0);
  glutSolidSphere(25,20,20);
    glPopMatrix();
}


void display() {
    glColor3f (0.3, 0.5, 1.0);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();

    glPushMatrix();
  glTranslatef(m,n,o);
  glScalef(0.8,0.60,0);
  MAN();
  glPopMatrix();

    glColor3f (0.5, 0.95, 0);
  glRectf(50,25,168.7,44);

  glColor3f (0.5, 0.95, 0);
  glRectf(0,70,62.5,98);

  glColor3f (0.5, 0.95, 0);
  glRectf(87.5,70,128.9,76);

  glColor3f (0.5, 0.95, 0);
  glRectf(87.5,130,128.9,146);

  glColor3f (0.5, 0.95, 0);
  glRectf(0,0,25,20);

  glPushMatrix();
  glTranslatef(60,40,0);
  glScalef(1,1,1.0);
  glColor3f(0,0.0,1);
  tree1();
  glPopMatrix();

  glPushMatrix();
  glTranslatef(60,-25,0);
  glScalef(1,1,1.0);
  glColor3f(0,0.0,1);
  tree1();
  glPopMatrix();

    glPushMatrix();
  glTranslatef(148,25,0);
  glScalef(0.3,0.4,1.0);
  glColor3f(0,0.0,1);
  vaccine();
  glPopMatrix();

  glPushMatrix();
  glTranslatef(50,-35,0);
  glScalef(0.2,0.5,0);
  glColor3f(0,0.4,1);
  poly();
    glPopMatrix();



  glPushMatrix();
  solidcircle(180,120,0);
  glPopMatrix();

  glPushMatrix();
  solidcircle(75,180,0);
  glPopMatrix();

  glPushMatrix();
  solidcircle(120,17,0);
  glPopMatrix();



  glPushMatrix();
  glScalef(0.07,0.07,0);
  glTranslatef(700,1400,0);
  glColor3f(0,0.0,1);
  tablet();
  glPopMatrix();

  glPushMatrix();
  glScalef(0.07,0.07,0);
  glTranslatef(1900,2100,0);
  glColor3f(0,0.0,1);
  tablet();
  glPopMatrix();

glPushMatrix();
  glScalef(0.07,0.07,0);
  glTranslatef(1700,1400,0);
  glColor3f(0,0.0,1);
  tablet();
  glPopMatrix();

  glPushMatrix();
    glScalef(0.7,1,0.5);
    glTranslatef(18,25,0);
    building3();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.7,0.5,0.5);
    glTranslatef(180,160,0);
    building2();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.7,0.5,0.5);
    glTranslatef(197,160,0);
    building2();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.7,0.5,0.5);
    glTranslatef(202,297.5,0);
    building2();
    glPopMatrix();

    glPushMatrix();
    glScalef(0.9,0.7,0.5);
    glTranslatef(80,215,0);
    building1();
    glPopMatrix();


  glPushMatrix();
    glTranslatef(187,133,0);
  glScalef(1,1.4,0);
    draw_tree1();
  glPopMatrix();

    glPushMatrix();
    glTranslatef(187,33,0);
  glScalef(1,2,0);
    draw_tree1();
  glPopMatrix();




    glPushMatrix();
  glScalef(1.25,1.4,0);
  road();
  glPopMatrix();



    glutSwapBuffers();
  glutPostRedisplay();
}


int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize(1500, 700);
  glutInitWindowPosition(0, 0);
  glutCreateWindow("CORONA GAME");
  init();
  glutDisplayFunc(display);
  glutSpecialFunc(ObjectKeys);
  glEnable(GL_DEPTH_TEST);
  glutMainLoop();
  return 0;

}
