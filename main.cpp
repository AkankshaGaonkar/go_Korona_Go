#define GL_SILENCE_DEPRECATION
#include <gl/glut.h>
#include <math.h>

void init(){
    glClearColor(1, 1, 1, 0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0,200,0,200,-200,200);
    glMatrixMode(GL_MODELVIEW);
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
    glColor3f (0.0, 0.0, 0.0);
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
  glutSolidSphere(20,50,50);
  glColor3f(0,0,0);
  circ();
    glutWireSphere(20,100,100);
}


void MAN()
{

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
glColor3f (0.0,0.0,0.0);
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
glColor3f (0.3, 0.5, 1.0);
glVertex2i (25,3);
glVertex2f (18,1);
glVertex2f (20,3);
glEnd();

glBegin (GL_TRIANGLES);//SHOE2
glColor3f (0.3, 0.5, 1.0);
glVertex2i (29,3);
glVertex2f (37,1);
glVertex2f (34,3);
glEnd();

glBegin (GL_POLYGON);//HAIR
glColor3f (0.0, 0.0, 0.0);
glVertex2f (24,53);
glVertex2f (23,55);
glVertex2i (26,55);
glVertex2i (26,56.5);
glVertex2i (31,53);
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
  glRotatef(th,0,1,0);
  glScalef(1,4,0);
  glutSolidCube(20);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(100,55,0);
  glRotatef(th,0,1,0);
  glScalef(1,4,0);
  glutSolidCube(5.0);
  glPopMatrix();


  glPushMatrix();
  glTranslatef(100,45,0);
  glRotatef(th,0,1,0);
  glScalef(3.5,0.5,0);
  glutSolidCube(5.0);
  glPopMatrix();


  glPushMatrix();
  glTranslatef(100,145,0);
  glColor3f(0,0.0,0);
  glRotatef(th,0,1,0);
  glScalef(0.25,2,0);
  glutSolidCube(5.0);
  glPopMatrix();
glPushMatrix();
  glColor3f(1,0,0);
  glTranslatef(100,110,0);
  glRotatef(th,0,1,0);
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
  poly();
    glPopMatrix();

  glPushMatrix();
  glTranslatef(-40,0,0);
  glScalef(2.5,2.5,0);
  MAN();
  glPopMatrix();

  glPushMatrix();
  solidcircle(100,150,0);
  glPopMatrix();
  glPushMatrix();
  solidcircle(150,50,0);
  glPopMatrix();
  glPushMatrix();
  solidcircle(90,90,0);
  glPopMatrix();

  glPushMatrix();
  glTranslatef(50,40,0);
  glColor3f(0,0.0,1);
  vaccine();
  glPopMatrix();

  glPushMatrix();
  glScalef(0.25,0.25,0);
  glTranslatef(150,20,50);
  glColor3f(0,0.0,1);
  tablet();
  glPopMatrix();

  glPushMatrix();
  glScalef(0.25,0.25,0);
  glTranslatef(300,60,50);
  glColor3f(0,0.0,1);
  tablet();
  glPopMatrix();

  glPushMatrix();
  glScalef(0.25,0.25,0);
  glTranslatef(300,-10,50);
  glColor3f(0,0.0,1);
  tablet();
  glPopMatrix();



    glutSwapBuffers();
  glutPostRedisplay();
}


int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize(500, 500);
  glutInitWindowPosition(100, 100);
  glutCreateWindow("CORONA GAME");
  init();
  glutDisplayFunc(display);
  glEnable(GL_DEPTH_TEST);
  glutMainLoop();
  return 0;

}
