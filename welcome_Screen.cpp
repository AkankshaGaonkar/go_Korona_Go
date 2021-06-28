#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<string.h>
#include<GL/glut.h>
int flag = 0, flagw = 1;
void move_key(int key, int x, int y) //movement (u,d,l,r)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:flag = 1;
		break;
	case GLUT_KEY_RIGHT:flag = 2;
		break;
	case GLUT_KEY_UP:flag = 3;
		break;
	case GLUT_KEY_DOWN:flag = 4;
		break;
	}
}
void keyboard(unsigned char key, int x, int y)//flagw is used to indicate windows. flagw++ is for next window.
{
	if (key==32)flagw++;      //scan Space bar, flagw is for window
	else if (key==113||key==81) flag = 10; //scan for Q
	else if (key==76 || key==108) flag = 9; //for scanning L/l
}//void keyboard is for recognizing the keys for next level or Quit.

void output1(int x, int y, char *string)//display texts on widn
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
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);//A 18-point proportional spaced Helvetica font
	}
}
void display()//display mode
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
		output1(-2, 4, "...INSTRUCTION...");
		output(-3, -0, "use up ARROW KEYS to move your character forward");
		output(-3, -1, "use down ARROW KEYS to move your character backward");
		output(-3, -2, "use left ARROW KEYS to move your character left");
		output(-3, -3, "use right ARROW KEYS to move your character right");
		output(-3, -4, "to cross the road");
        output1(-3, -7, ".....use SPACE BAR to continue.....");
	}
	glFlush();
	glutPostRedisplay();
	glutSwapBuffers();
}

void myReshape(int w, int h)//sets the reshape callback for the current window.
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);

}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);//used to initialize glut library
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);//--double buffer window --rgb color--bitmap to select a window with depth buffer
	glutInitWindowSize(800, 800);//set window size
    glutInitWindowPosition(100,0);
	glutCreateWindow("go_Korona_Go_Game");
	glutReshapeFunc(myReshape);//sets the reshape callback for the current window.
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);//sets the keyboard callback for the current window.
	glutSpecialFunc(move_key);//for keys like backspace and all which uses ascii
	glClearColor(0.0, 0.0, 0.0, 0.0);//values in alpha used to clear buffers[0-1]
	glutMainLoop();//enters the glut event processing loop
	return 0;
}

