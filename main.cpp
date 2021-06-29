#include <stdlib.h>
#include <GL/glut.h>
#include<math.h>
#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
#include<windows.h>
#include<mmsystem.h>
float m=-12,n=100,mm=-12,nn=100,o=0,xpos=0,ypos=0,xxpos=0,yypos=0,yy1pos=0,xxxpos=0,yyypos=17,yyy1pos=55,xxxxpos=0,yyyypos=0,mask=48,vax=0,touch=0;
int countt=0;
void init(){

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0,200,0,200,-200,200);
    glMatrixMode(GL_MODELVIEW);
}

void myReshape(int w, int h)//sets the reshape callback for the current window.
{
 glViewport(0, 0, w, h);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
 glMatrixMode(GL_MODELVIEW);
}
void output1(float x, float y, char *string)//display texts on widn
{
 int len, i;
 glRasterPos2f(x, y);
 len = (int)strlen(string);
 for (i = 0; i < len; i++)
 {
  glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);// 24-point proportional spaced Times Roman font.
 }
}
void output(int x, int y, char *string)
{
 int len, i;
 glRasterPos2f(x, y);
 len = (int)strlen(string);
 for (i = 0; i < len; i++)
 {
  glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);
  //A 18-point proportional spaced Helvetica font
 }

}


void quit(unsigned char key,int x,int y)
{
    if(key=='q'||key=='Q')
        exit(0);
}

void example(){
glColor3f (1.0, 1.0, 1.0); // Set line segment color to green.
int c=countt;
int t=15;
    while (c> 0) {
        int d = c % 10;
        int e=d+48;
        glRasterPos2f(t, 190);
        t-=0.5;
char msg6=(char)e;
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg6);

        c = c / 10;
    }
}

void example1(){
glColor3f (1.0, 1.0, 1.0); // Set line segment color to green.
int c=countt;
int t=1;
    while (c> 0) {
        int d = c % 10;
        int e=d+48;
        glRasterPos2f(t, 0);
        t-=0.5;
    char msg6=(char)e;
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg6);
    c = c / 10;
    }
}

void textt(){

    glColor3f (1, 1, 1.0);
	glRasterPos2f(0, 190);
    char msg4[] = "SCORE :";
    for (int i = 0; i < strlen(msg4); i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg4[i]);



	glRasterPos2f(20, 190);
    char msg2[] = "MASK :";
    for (int i = 0; i < strlen(msg2); i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg2[i]);

    glRasterPos2f(35, 190);
    char msg6=(char)mask;
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg6);


}
void gameoverdisplay()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);     // Clear Color and Depth Buffers
    glLoadIdentity();
    glColor3f(1,0,0);
   output1(-1.3, 2, "GAME OVER :(");
  glColor3f(1,0,1);
  output1(-1.5, -2, "PRESS Q TO QUIT");


 example1();

 glRasterPos2f(-1.5, 0);
 char msg4[] = "SCORE :";
 for (int i = 0; i < strlen(msg4); i++)
  glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg4[i]);

 glColor3f(1,1,1);



    glutKeyboardFunc(quit);
    glutSwapBuffers();
    glutPostRedisplay();

}


void gameoverwindow()
{
    glutInitWindowSize(1500, 700);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("GAME OVER");
    glutReshapeFunc(myReshape);
    glutDisplayFunc(gameoverdisplay);
}

void winingdisplay()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);     // Clear Color and Depth Buffers
    glLoadIdentity();
    glColor3f(1,0,0);
    output1(-1.1, 3, "BRAVO!!!!");
    glColor3f(0,1,0);
    output1(-2, 1, "YOU WON THE GAME :)");
    glColor3f(1,1,1);
    output1(-2.5, -3, "THANKYOU FOR PLAYING");

    example1();

    glRasterPos2f(-1.5, 0);
    char msg4[] = "SCORE :";
    for (int i = 0; i < strlen(msg4); i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg4[i]);

    glutKeyboardFunc(quit);
    glutSwapBuffers();
    glutPostRedisplay();

}

void winningwindow()
{
    glutInitWindowSize(1500, 700);
  glutInitWindowPosition(0, 0);
  glutCreateWindow("YOU WON THE GAME!");
    glutReshapeFunc(myReshape);
    glutDisplayFunc(winingdisplay);
}




void comove2()
{

    if(xpos<200 && xpos>-210 )
    {
        xpos-=0.5;

        if(xpos==-(180-mm) && nn>95 && nn<110 ){
            if(mask==49 || vax==2){
                 mask=48;
            }
            else
            {
                gameoverwindow();
                glutDestroyWindow(3);

            }


        }
        if(xpos<-200)
            xpos=15;
    }

    if(xxxpos<200 && xxxpos>-160 )
    {
        xxxpos-=0.5;

        if(xxxpos==-(180-mm) && nn<50 && nn>40 ){
            if(mask==49 || vax==2){
                 mask=48;
            }
            else
            {
                gameoverwindow();
                glutDestroyWindow(3);

            }

        }
        if(xxxpos<-150)
            xxxpos=0;
    }


     if(yypos<200 && yypos>-220)
    {
        yypos-=0.5;



        if(yypos==-(180-nn) && mm==53){
            if(mask==49 || vax==2){
                mask=48;
                 std::cout<<"one more chance"<<yypos<<"\n";

            }
            else
            {gameoverwindow();
            glutDestroyWindow(3);}
        }
        else if(yypos==-(180-nn) && mm==158 ){
            if(mask==49|| vax==2 ){
                 mask=48;
                 std::cout<<"one more chance"<<yypos<<"\n";
            }
            else
            {gameoverwindow();
            glutDestroyWindow(3);}
        }
        if(yypos<-210)
            yypos=0;
    }


glutPostRedisplay();

}


void ObjectKeys2(int key, int xx, int yy)
{
    switch (key)
    {
    case GLUT_KEY_LEFT:
    {

        if(mm>15 && nn>-1 && nn<10)
            mm-=5;
        else if(mm>15 && mm<130 && nn>40 && nn<50)
            mm-=5;
        else if(mm>55 && mm<125 && nn>180 && nn<190)
            mm-=5;
        else if(mm>115 && mm<160 && nn>156 && nn<180)
            mm-=5;
        else if(mm>-10 && nn<110 && nn>90)
            mm-=5;
        //else if(mm<-9 &&  nn<110 && nn>90 )
            //glutDestroyWindow(3);if(m>30 && m<35 && n>90){
        if(mm>100 && mm<107 && nn<100 && nn>30){
            mask=49;
            std::cout<<"MASK "<<mask<<"\n";}
        if(mm>94 && mm<100 && nn>160 ){
            countt+=1;
            std::cout<<"TABLET "<<countt<<"\n";
            }
        if( mm>113  && mm<120 && nn<30){
            countt+=1;
            std::cout<<"TABLET "<<countt<<"\n";
            }

        break;

        }

    case GLUT_KEY_RIGHT:



        if(mm<170 && nn<110 && nn>90)
            mm+=5;

        else if(mm>-10 && mm<115 && nn>170 && nn<190)
            mm+=5;
        else if(mm>100 && mm<155 && nn>156 && nn<180)
            mm+=5;
        else if(mm>-10 && mm<115 && nn>35 && nn<50)
            mm+=5;
        else if(mm>-10 && mm<155 && nn>-1 && nn<20)
            mm+=5;
        if(mm>100 && mm<107 && nn<100 && nn>30){
            mask=49;
            std::cout<<"MASK "<<mask<<"\n";}
        if(mm>94 && mm<100 && nn>160 ){
            countt+=1;
            std::cout<<"TABLET "<<countt<<"\n";
            }
        if( mm>113  && mm<120 && nn<30){
            countt+=1;
            std::cout<<"TABLET "<<countt<<"\n";
            }

        if(mm>170  && nn<110 && nn>90){

            if(vax==2 && countt>=4)
            {glutDestroyWindow(3);
            winningwindow();
            }
            else
            std::cout<<"GET VACCINATED\n";}
        break;

    case GLUT_KEY_UP:
        if(mm>50 && mm<60 && nn<185)
        nn+=5;
        else if(mm>115 && mm<120 && nn<185)
        nn+=5;
        else if(mm>155 && mm<160 && nn<170)
        nn+=5;
        else if (mm>12 && mm<30 && nn<40 )
        nn+=5;

        if( mm>100  && mm<120 && nn<127 && nn>120){
            vax=2;
            std::cout<<"VACCINE DOSE "<<vax<<"\n";}
        if( mm>140  && mm<160 && nn>130 && nn<140){
            countt+=1;
            std::cout<<"TABLET "<<countt<<"\n";
            }
        break;

    case GLUT_KEY_DOWN:
        if(mm>50 && mm<60 && nn>0)
        nn-=5;
        else if(mm>115 && mm<125 && nn>45)
        nn-=5;
        else if(mm>155 && mm<160 && nn>0)
        nn-=5;
        else if (mm>12 && mm<30 && nn<50 && nn>0)
        nn-=5;

        if( mm>100  && mm<120 && nn<127 && nn>120){
            vax=2;
            std::cout<<"VACCINE DOSE "<<vax<<"\n";}
        if( mm>140  && mm<160 && nn>130 && nn<140){
            countt+=1;
            std::cout<<"TABLET "<<countt<<"\n";
            }

        break;
    default:
        break;



    }
}

void lane1(){
    glColor3f(1,1,1);
    glRectf(20,20,33,27);
}

void draw_pixel(GLint cx, GLint cy)
{

 glBegin(GL_POINTS);
  glVertex2i(cx,cy);
 glEnd();
}
void plotpixels(GLint h,GLint k, GLint x,GLint y)
{
 draw_pixel(x+h,y+k);
 draw_pixel(-x+h,y+k);
 draw_pixel(x+h,-y+k);
 draw_pixel(-x+h,-y+k);
 draw_pixel(y+h,x+k);
 draw_pixel(-y+h,x+k);
 draw_pixel(y+h,-x+k);
 draw_pixel(-y+h,-x+k);
}
void draw_circle(GLint h, GLint k, GLint r)
{
 GLint d=1-r, x=0, y=r;
 while(y>x)
 {
  plotpixels(h,k,x,y);
  if(d<0) d+=2*x+3;
  else
  {
   d+=2*(x-y)+5;
   --y;
  }
  ++x;
 }
 plotpixels(h,k,x,y);
}
void draw_object()
{


//tree

int l;

for(l=0;l<=40;l++)
 {
  glColor3f(0.0,0.5,0.0);
  draw_circle(40,280,l);
  draw_circle(90,280,l);
  draw_circle(150,280,l);
  draw_circle(210,280,l);
  draw_circle(65,340,l);
  draw_circle(115,340,l);
  draw_circle(175,340,l);
    }
for(l=0;l<=55;l++)
 {
  glColor3f(0.0,0.5,0.0);
  draw_circle(115,360,l);
    }
glColor3f(0.9,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2f(100,135);
glVertex2f(100,285);
glVertex2f(140,285);
glVertex2f(140,135);
glEnd();
}

void hse1()
{

//window border
glColor3f(0.35,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(595,205);
glVertex2f(595,285);
glVertex2f(675,285);
glVertex2f(675,205);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(825,205);
glVertex2f(825,285);
glVertex2f(905,285);
glVertex2f(905,205);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(845,205);
glVertex2f(845,285);
glVertex2f(850,285);
glVertex2f(850,205);
glEnd();
//door
glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2f(800,100);
glVertex2f(800,220);
glVertex2f(700,220);
glVertex2f(700,100);
glEnd();
glColor3f(0.35,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(760,120);
glVertex2f(760,200);
glVertex2f(700,220);
glVertex2f(700,100);
glEnd();
//window
glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2f(600,210);
glVertex2f(600,280);
glVertex2f(670,280);
glVertex2f(670,210);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(830,210);
glVertex2f(830,280);
glVertex2f(900,280);
glVertex2f(900,210);
glEnd();
glColor3f(0.35,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(620,210);
glVertex2f(620,280);
glVertex2f(625,280);
glVertex2f(625,210);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(650,210);
glVertex2f(650,280);
glVertex2f(655,280);
glVertex2f(655,210);
glEnd();
glColor3f(0.35,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(850,205);
glVertex2f(850,285);
glVertex2f(855,285);
glVertex2f(855,205);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(880,205);
glVertex2f(880,285);
glVertex2f(885,285);
glVertex2f(885,205);
glEnd();
    //roof
glColor3f(0.35,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(540,330);
glVertex2f(540,350);
glVertex2f(960,350);
glVertex2f(960,330);
glEnd();
//home
glColor3f(.555, .724, .930);
glBegin(GL_POLYGON);
glVertex2f(550,100);
glVertex2f(550,330);
glVertex2f(950,330);
glVertex2f(950,100);
glVertex2f(850,100);
glVertex2f(850,250);
glVertex2f(650,250);
glVertex2f(650,100);
glEnd();


}

void hse2(){
//House_Window1
glBegin(GL_POLYGON);
glColor3f(0.38, 0.21, 0.26);
glVertex2i(295, 75);
glVertex2i(295, 90);
glVertex2i(310, 90);
glVertex2i(310, 75);
glEnd();
//House_Window2
glBegin(GL_POLYGON);
glColor3f(0.38, 0.21, 0.26);
glVertex2i(312, 75);
glVertex2i(312, 90);
glVertex2i(327, 90);
glVertex2i(327, 75);
glEnd();
//House_Window3
glBegin(GL_POLYGON);
glColor3f(0.38, 0.21, 0.26);
glVertex2i(355, 75);
glVertex2i(355, 90);
glVertex2i(370, 90);
glVertex2i(370, 75);
glEnd();
    //HouseRoof
glBegin(GL_POLYGON);
glColor3f(.990, 0.0, 0.0);
glVertex2i(285, 105);
glVertex2i(285, 130);
glVertex2i(380, 115);
glVertex2i(380, 105);
glEnd();
//Housetop
glBegin(GL_POLYGON);
glColor3f(.555, 1.0, 1.0);
glVertex2i(290, 70);
glVertex2i(290, 104);
glVertex2i(375, 104);
glVertex2i(375, 70);
glEnd();
//House_Small_Door
glBegin(GL_POLYGON);
glColor3f(0.11, 0.23, 0.36);
glVertex2i(260, 70);
glVertex2i(260, 80);
glVertex2i(285, 80);
glVertex2i(285, 70);
glEnd();
//House_
glBegin(GL_POLYGON);
glColor3f(0.38, 0.41, 0.36);
glVertex2i(330, 70);
glVertex2i(330, 100);
glVertex2i(350, 100);
glVertex2i(350, 70);
glEnd();

//House_Small_Roof
glBegin(GL_POLYGON);
glColor3f(1.0, 0.0, 0.0);
glVertex2i(250, 90);
glVertex2i(257, 104);
glVertex2i(290, 104);
glVertex2i(290, 90);
glEnd();
//House_Small_Fence
glBegin(GL_POLYGON);
glColor3f(.555, .724, .930);
glVertex2i(255, 70);
glVertex2i(255, 90);
glVertex2i(290, 90);
glVertex2i(290, 70);
glEnd();


}



void extra(){

 glBegin(GL_POLYGON);
 glVertex2f(20, 0.0);
 glVertex2f(20.0, 20.0);
 glVertex2f(45.0, 20.0);
 glVertex2f(45.0, 0.0);
 glEnd();

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

void draw_tree3()
{
 //1st tree
 glColor3f(0.4f, 0.0f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex2f(-30.0, 5.0);
 glVertex2f(-25.0, 5.0);
 glVertex2f(-25.0, 10.0);
 glVertex2f(-30.0, 10.0);
 glEnd();

 glColor3f(0.0f, 0.2f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex2f(-17.5, 10.0);
 glVertex2f(-22.5, 15.0);
 glVertex2f(-32.5, 15.0);
 glVertex2f(-37.5, 10.0);
 glEnd();

 glColor3f(0.0f, 0.2f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex2f(-20.0, 15.0);
 glVertex2f(-25.0, 20.0);
 glVertex2f(-30.0, 20.0);
 glVertex2f(-35.0, 15.0);
 glEnd();

 glColor3f(0.0f, 0.2f, 0.0f);
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

void tree2(){

    glBegin(GL_TRIANGLES);
    glColor3f(0,0.4,0);
    glVertex2f(30.5,140);
    glVertex2f(28,110);
    glVertex2f(33,110);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.0, 0.0);
    glVertex2f(30,100);
    glVertex2f(30,120);
    glVertex2f(31,120);
    glVertex2f(31,100);
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

void road1()
{

    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(0,70);
    glVertex2f(0,100);
    glVertex2f(50,100);
    glVertex2f(50,70);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(50,70);
    glVertex2f(50,100);
    glVertex2f(70,100);
    glVertex2f(70,70);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(70,70);
    glVertex2f(70,100);
    glVertex2f(103,100);
    glVertex2f(103,70);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(103,70);
    glVertex2f(103,100);
    glVertex2f(120,100);
    glVertex2f(120,70);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(120,70);
    glVertex2f(120,100);
    glVertex2f(135,100);
    glVertex2f(135,70);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(135,70);
    glVertex2f(135,100);
    glVertex2f(150,100);
    glVertex2f(150,70);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(150,70);
    glVertex2f(150,100);
    glVertex2f(170,100);
    glVertex2f(170,70);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(50,50);
    glVertex2f(50,70);
    glVertex2f(70,70);
    glVertex2f(70,50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(103,50);
    glVertex2f(103,70);
    glVertex2f(120,70);
    glVertex2f(120,50);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(50,100);
    glVertex2f(50,130);
    glVertex2f(70,130);
    glVertex2f(70,100);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(103,100);
    glVertex2f(103,130);
    glVertex2f(120,130);
    glVertex2f(120,100);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(120,120);
    glVertex2f(120,135);
    glVertex2f(150,135);
    glVertex2f(150,120);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(135,100);
    glVertex2f(135,120);
    glVertex2f(150,120);
    glVertex2f(150,100);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(50,130);
    glVertex2f(50,450);
    glVertex2f(120,150);
    glVertex2f(120,130);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(50,30);
    glVertex2f(50,50);
    glVertex2f(120,50);
    glVertex2f(120,30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(20,30);
    glVertex2f(20,50);
    glVertex2f(50,50);
    glVertex2f(50,30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(135,20);
    glVertex2f(135,70);
    glVertex2f(150,70);
    glVertex2f(150,20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(20,5);
    glVertex2f(20,30);
    glVertex2f(40,30);
    glVertex2f(40,5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(40,5);
    glVertex2f(40,20);
    glVertex2f(150,20);
    glVertex2f(150,5);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(20,0);
    glVertex2f(20,5);
    glVertex2f(30,5);
    glVertex2f(30,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(30,0);
    glVertex2f(30,5);
    glVertex2f(40,5);
    glVertex2f(40,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(40,0);
    glVertex2f(40,5);
    glVertex2f(50,5);
    glVertex2f(50,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(50,0);
    glVertex2f(50,5);
    glVertex2f(60,5);
    glVertex2f(60,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(60,0);
    glVertex2f(60,5);
    glVertex2f(70,5);
    glVertex2f(70,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(70,0);
    glVertex2f(70,5);
    glVertex2f(80,5);
    glVertex2f(80,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(80,0);
    glVertex2f(80,5);
    glVertex2f(90,5);
    glVertex2f(90,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(90,0);
    glVertex2f(90,5);
    glVertex2f(100,5);
    glVertex2f(100,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(100,0);
    glVertex2f(100,5);
    glVertex2f(110,5);
    glVertex2f(110,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(110,0);
    glVertex2f(110,5);
    glVertex2f(120,5);
    glVertex2f(120,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(120,0);
    glVertex2f(120,5);
    glVertex2f(130,5);
    glVertex2f(130,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(130,0);
    glVertex2f(130,5);
    glVertex2f(140,5);
    glVertex2f(140,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(140,0);
    glVertex2f(140,5);
    glVertex2f(150,5);
    glVertex2f(150,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.3,0.3,0.3);
    glVertex2f(150,0);
    glVertex2f(150,5);
    glVertex2f(160,5);
    glVertex2f(160,0);

    glEnd();




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
void solidcircle(float x,float y,float z){
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

void background2display(){

    glClearColor(0.0,0.0,0.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();



	example();
	textt();

    glPushMatrix();
    glTranslatef(15,105,0);
	glScalef(0.3,0.5,0);
    hse2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(147,16,0);
	glScalef(0.1,0.2,0);
	draw_object();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(42,25,0);
	glScalef(0.1,0.1,0);
	draw_object();
	glPopMatrix();


	glPushMatrix();
    glTranslatef(xpos,ypos,0);
	solidcircle(200,120,0);
	glPopMatrix();

    glPushMatrix();
	glTranslatef(xxxpos,yyy1pos,0);
	solidcircle(180,0,0);
	glPopMatrix();

    glPushMatrix();
	glTranslatef(xxpos,yypos,0);
	solidcircle(75,220,0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(xxpos,yypos,0);
	solidcircle(180,220,0);
	glPopMatrix();



    glPushMatrix();

	glTranslatef(mm,nn,o);
    glScalef(0.8,0.60,0);
	MAN();
	glPopMatrix();


    glPushMatrix();
    glTranslatef(42,25,0);
    glColor3f(0.3,0.3,0.3);
    extra();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(40,5,0);
	glScalef(1,3,0);
    draw_tree1();
	glPopMatrix();


    glColor3f (0.0,0.3,0.0);
	glRectf(50,25,168.7,44);

	glColor3f (0.5, 0.5, 0);
	glRectf(0,70,62.5,98);


	glColor3f (0.0,0.3,0.0);
	glRectf(0,0,25,20);

	glPushMatrix();
    glTranslatef(30,130,0);
	glScalef(1,2,0);
    draw_tree3();
	glPopMatrix();

	glPushMatrix();
    glTranslatef(40,130,0);
	glScalef(1,2,0);
    draw_tree3();
	glPopMatrix();

    glPushMatrix();
    glTranslatef(50,130,0);
	glScalef(1,2,0);
    draw_tree3();
	glPopMatrix();

	glPushMatrix();
    glTranslatef(60,130,0);
	glScalef(1,2,0);
    draw_tree3();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(60,40,0);
	glScalef(1,1,1.0);
	glColor3f(0,0.0,1);
	tree2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(62,-30,0);
	glScalef(1,1,1.0);
	glColor3f(0,0.0,1);
	tree2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(70,-30,0);
	glScalef(1,1,1.0);
	glColor3f(0,0.0,1);
	tree2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(78,-30,0);
	glScalef(1,1,1.0);
	glColor3f(0,0.0,1);
	tree2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(85,-30,0);
	glScalef(1,1,1.0);
	glColor3f(0,0.0,1);
	tree2();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(92,-30,0);
	glScalef(1,1,1.0);
	glColor3f(0,0.0,1);
	tree2();
	glPopMatrix();


    glPushMatrix();
    if( mm>100  && mm<120 && nn<145 && nn>120){
            glColor3f (1, 0, 0);
            glRasterPos2f(0, 182);
            char msg4[] = "You Are Vaccinated..!!";
            for (int i = 0; i < strlen(msg4); i++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg4[i]);
            glTranslatef(5450,5200,0);}
    else
    glTranslatef(110,120,0);
    glScalef(0.3,0.4,1.0);
	glColor3f(0,0.0,1);
	vaccine();
	glPopMatrix();


	glPushMatrix();
	if(mm>100 && mm<107 && nn<100 && nn>30){
            glTranslatef(5450,5200,0);}
    else
	glTranslatef(115,-35,0);
	glScalef(0.2,0.5,0);
	glColor3f(0,0.4,1);
	poly();
    glPopMatrix();

	glPushMatrix();
	glScalef(0.07,0.07,0);
    if( mm>140  && mm<160 && nn>130 && nn<140){
    glTranslatef(5450,5200,0);}
    else
	glTranslatef(2450,2200,0);
	glColor3f(0,0.0,1);
	tablet();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.07,0.07,0);
    if(mm>94 && mm<100 && nn>160 ){
            glTranslatef(5450,5200,0);}
    else
	glTranslatef(1600,2600,0);
	glColor3f(0,0.0,1);
	tablet();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.07,0.07,0);
    if( mm>113  && mm<120 && nn<30){
        glTranslatef(5450,5200,0);
    }
	glTranslatef(1900,50,0);
	glColor3f(0,0.0,1);
	tablet();
	glPopMatrix();

    glPushMatrix();
    glScalef(0.05,0.07,0);
    glTranslatef(290,1900,0);
	hse1();
	glPopMatrix();

	glPushMatrix();
    glScalef(0.03,0.06,0);
    glTranslatef(4580,2235,0);
	hse1();
	glPopMatrix();

    int x=-12;
    while(x<200)
    {
    glPushMatrix();
    glTranslatef(x,92,0);
	lane1();
	x+=35;
	glPopMatrix();

    }




    glPushMatrix();

	glScalef(1.25,1.4,0);

	road1();
	glPopMatrix();


    glutSwapBuffers();
	glutPostRedisplay();

}

void background2window(){
    glutInitWindowSize(1500, 700);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("CORONA GAME");
	init();
	glClearColor(0, 0, 0, 0);
	glutDisplayFunc(background2display);
	glutIdleFunc(comove2);
	glutSpecialFunc(ObjectKeys2);
	glEnable(GL_DEPTH_TEST);
	glutMainLoop();

}

void comove1()
{

    if(xpos<200 && xpos>-210 )
    {
        xpos-=0.5;

        if(xpos==-(180-m) && ypos==(n-100) ){
            if(mask==49||vax==1){
                mask=48;
                vax-=0.5;
                if(vax==0){
                    gameoverwindow();
                    glutDestroyWindow(2);
                }

            }
            else
            {gameoverwindow();
            glutDestroyWindow(2);}

        }
        if(xpos<-200)
            xpos=15;
    }

    if(xxxpos<200 && xxxpos>-210 )
    {
        xxxpos-=0.5;

        if(xxxpos==-(180-m) && yyypos==n+17){
            if(mask==49||vax==1){
                 mask=48;
                 vax-=0.5;
                if(vax==0){
                    gameoverwindow();
                    glutDestroyWindow(2);
                }

            }
            else
            {gameoverwindow();
            glutDestroyWindow(2);}
        }
        if(xxxpos<-160)
            xxxpos=0;
    }


    if(yypos<200 && yypos>-220)
    {
        yypos-=0.5;



        if(yypos==-(180-n) && m==53){
            if(mask==49 || vax==1){
                mask=48;
                vax-=0.5;
                if(vax==0){
                    gameoverwindow();
                    glutDestroyWindow(2);
                }

            }
            else
            {gameoverwindow();
            glutDestroyWindow(2);}
        }
        else if(yypos==-(180-n) && m==118 ){
            if(mask==49||vax==1){
                 mask=48;
                 vax-=0.5;
                if(vax==0){
                    gameoverwindow();
                    glutDestroyWindow(2);
                }

            }
            else
            {gameoverwindow();
            glutDestroyWindow(2);}
        }
        if(yypos<-210)
            yypos=0;
    }


glutPostRedisplay();

}


void ObjectKeys(int key, int xx, int yy)
{
    switch (key)
    {
    case GLUT_KEY_LEFT:
    {

        if(m>15 && n>-1 && n<10)
            m-=5;
        else if(m>15 && m<130 && n>40 && n<50)
            m-=5;
        else if(m>55 && m<125 && n>180 && n<190)
            m-=5;
        else if(m>115 && m<160 && n>156 && n<180)
            m-=5;
        else if(m>-10 && n<110 && n>90)
            m-=5;
        if(m<-12 && n<110 && n>90)
            exit(0);


        if(m>30 && m<35 && n>90){
            countt+=1;
            std::cout<<"TABLET "<<countt<<"\n";
            }
        if(m>95 && m<100 && n>90){
            countt+=1;
            std::cout<<"TABLET "<<countt<<"\n";}
        if(m>30 && m<35 && n<100 && n>20){
            mask=49;
            std::cout<<"MASK "<<mask<<"\n";}

        break;

        }

    case GLUT_KEY_RIGHT:



        if(m>30 && m<35 && n>90){
            countt+=1;
            std::cout<<"TABLET "<<countt<<"\n";}

        if(m>95 && m<100 && n>90){
            countt+=1;
            std::cout<<"TABLET "<<countt<<"\n";}

        if(m<180 && n<110 && n>90)
            m+=5;


        else if(m>-10 && m<115 && n>170 && n<190)
            m+=5;
        else if(m>100 && m<155 && n>156 && n<180)
            m+=5;
        else if(m>-10 && m<115 && n>35 && n<50)
            m+=5;
        else if(m>-10 && m<155 && n>-1 && n<20)
            m+=5;
        if(m>30 && m<35 && n<100 && n>20){
            mask=49;
            std::cout<<"MASK "<<mask<<"\n";}
        if(m>180  && n<110 && n>90){

            if(vax==1 && countt>=2)
            {glutDestroyWindow(2);
            background2window();
            }
            else
            std::cout<<"GET VACCINATED\n";


            }




        break;

    case GLUT_KEY_UP:
        if(m>50 && m<60 && n<185)
        n+=5;

        else if(m>115 && m<120 && n<185)
        n+=5;
        else if(m>155 && m<160 && n<170)
        n+=5;
        else if (m>12 && m<30 && n<40 )
        n+=5;
        if( n>120 && n<130 && m>115 && m<125){
            countt+=1;
            std::cout<<"TABLET "<<countt<<"\n";}
        if( m>155 && m<160 && n<80 && n>70){
            vax=1;
            std::cout<<"VACCINE DOSE "<<vax<<"\n";}
        break;

    case GLUT_KEY_DOWN:
        if(m>50 && m<60 && n>0)
        n-=5;
        else if(m>115 && m<125 && n>40)
        n-=5;
        else if(m>155 && m<160 && n>0)
        n-=5;
        else if (m>12 && m<30 && n<50 && n>0)
        n-=5;
        if( n>120 && n<130 && m>115 && m<125){
            countt+=1;
            std::cout<<"TABLET "<<countt<<"\n";}
        if( m>155 && m<160 && n<80 && n>70){
            vax=1;
            std::cout<<"VACCINE DOSE "<<vax<<"\n";}

        break;
    default:
        break;



    }
}

void display() {
    glColor3f (0.3, 0.5, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();


	example();
	textt();

	glPushMatrix();
    glTranslatef(xpos,ypos,0);
	solidcircle(200,120,0);
	glPopMatrix();

    glPushMatrix();
	glTranslatef(xxxpos,yyypos,0);
	solidcircle(180,0,0);
	glPopMatrix();

    glPushMatrix();
	glTranslatef(xxpos,yypos,0);
	solidcircle(75,220,0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(xxpos,yypos,0);
	solidcircle(140,220,0);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0,ypos,0);
	//solidcircle(75,420,0);
	glPopMatrix();




    glPushMatrix();

	glTranslatef(m,n,o);
    glScalef(0.8,0.60,0);
	MAN();
	glPopMatrix();


    glPushMatrix();
    glTranslatef(42,25,0);
    glColor3f(0.0,0.0,0.0);
    extra();
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
    if( m>155 && m<160 && n<80 && n>15){
        glColor3f (0, 0, 0);
        glRasterPos2f(0, 182);
        char msg4[] = "First Dose Taken..!!";
        for (int i = 0; i < strlen(msg4); i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg4[i]);
        glTranslatef(5000,8400,0);

    }
    else
    glTranslatef(148,25,0);
    glScalef(0.3,0.4,1.0);
	glColor3f(0,0.0,1);
	vaccine();
	glPopMatrix();


	glPushMatrix();
	if(m>30 && m<35 && n<100 && n>20){
            glTranslatef(5000,8400,0);}
    else
	glTranslatef(50,-35,0);
	glScalef(0.2,0.5,0);
	glColor3f(0,0.4,1);
	poly();
    glPopMatrix();

	glPushMatrix();
	glScalef(0.07,0.07,0);
	 if(m>30 && m<35 && n>90){
	     glTranslatef(5000,8400,0);
	 }
	 else
	glTranslatef(700,1400,0);
	glColor3f(0,0.0,1);
	tablet();
	glPopMatrix();

	glPushMatrix();
	glScalef(0.07,0.07,0);

    if( n>120 && n<130 && m>115 && m<125){
            glTranslatef(5000,8400,0);
	}
	else
	glTranslatef(1900,2100,0);
	glColor3f(0,0.0,1);
	tablet();
	glPopMatrix();


	glPushMatrix();
	glScalef(0.07,0.07,0);
	 if(m>95 && m<100 && n>90){
	     glTranslatef(5000,8400,0);
	 }
     else
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

void background1window(){
    glutInitWindowSize(1500, 700);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("CORONA GAME");
	init();
	glClearColor(0, 0.5, 0.7, 0);
	glutDisplayFunc(display);
	glutIdleFunc(comove1);
	glutSpecialFunc(ObjectKeys);
	glEnable(GL_DEPTH_TEST);
	glutMainLoop();
}


int flag = 0, flagw = 1;

void keyboard(unsigned char key, int x, int y)//flagw is used to indicate windows. flagw++ is for next window.
{
 if (key==32)flagw++;      //scan Space bar, flagw is for window
 else if (key==113||key==81) flag = 10; //scan for Q
 else if (key==76 || key==108) flag = 9; //for scanning L/l
}//void keyboard is for recognizing the keys for next level or Quit.


void display1()//display mode
{
 int i, j;
 glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);//--double buffer window --rgb color--bitmap to select a window with depth buffer
 glLoadIdentity();
 glColor3f(1.0, 1.0, 1.0);
  if (flagw==1)
 {
  output1(-2, 4, "go_Korona_Go_Game");
  output1(-1, -5, "Submitted By:");
  output(4, -7, "4SO18CS128");
  output(6, -8, "4SO18CS105");
  output(1, -7, "Akanksha");
  output(1, -8, "Shaz Rasheed Hussain");
  output1(-3, -0, ".....use SPACE BAR to continue.....");
 }
 else if (flagw==2)
 {
  output1(-4, 4, "...INSTRUCTION TO PLAY THE GAME...");
  output(-5, -0, "Use ARROW KEYS to move your character FORWARD,BACKWARD,LFFT AND RIGHT.");
  output(-5, -1, "Continues FAST MOVEMENT can help the character to protect from corona virus.");
  output(-5, -2, "Collecting the MASK will add an extra life eventually preventing from corona virus.");
  output(-5, -3, "Collecting the 1st VACCINE along with MINIMUM 2 PILLS to advance to second background.");
  output(-5, -4, "Collecting the 2nd VACCINE along with MINIMUM 2 PILLS to WIN the game.");
  output(-5, -5, "Collect EXTRA PILLS to score MAXIMUM POINTS.");
        output1(-3, -7, ".....use SPACE BAR to continue.....");
 }

 else if (flagw==3)
 {
   background1window();
 }

 glutPostRedisplay();
 glutSwapBuffers();
}


int main(int argc, char **argv)
{
 glutInit(&argc, argv);//used to initialize glut library
 glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);//--double buffer window --rgb color--bitmap to select a window with depth buffer
 glutInitWindowSize(1500, 800);//set window size
    glutInitWindowPosition(0,0);
 glutCreateWindow("go_Korona_Go_Game");
 glutReshapeFunc(myReshape);//sets the reshape callback for the current window.
 glutDisplayFunc(display1);
 glutKeyboardFunc(keyboard);//sets the keyboard callback for the current window.
 glClearColor(0.0, 0.0, 0.0, 0.0);//values in alpha used to clear buffers[0-1]
 glutMainLoop();//enters the glut event processing loop
 return 0;
}


