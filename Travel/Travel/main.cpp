#include<stdio.h>
#include<math.h>
#include<time.h>
#include<GL/glut.h>

int m;
int p, q, r;
int count = 0;
GLint x = 50, y = 50, xx = 0, theta = 0;
int i, j;
int s = 0;
float o = .15, k = 0, n = 0;

GLint a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 500, h = 600;
//GLfloat theta = 0.0;

#include "writeText.h"
#include "intro.h"
#include "intro2.h"
//#include "intro3.h"
#include "frame0.h"
#include "frame1.h"
#include "frame2.h"
//#include "frame3.h"
#include "end.h"
int frameNo = 0;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	switch (frameNo)
	{
	case 0:
		// welcome
		frame0();
		break;
	case 1:
		intro();
		break;
	case 2:
		intro2();
		break;
	case 3:
		frame1();
		break;
	case 4:
		myinit2();
		frame2();
		break;
	default:
		end();
		break;
	}
}

void mykey(unsigned char key, int x, int y)
{
	int i;

	if (int(key) == ' ')
		frameNo++;
}

void myinit()
{
	glMatrixMode(GL_PROJECTION);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glLoadIdentity();
	gluOrtho2D(0, 499, 0, 499);

}

void mouse(int btn, int state, int x, int y)
{
	if (btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		printf("x=%d y = %d", x, y);


	//glutPostRedisplay();
}

void control()
{
	switch (frameNo)
	{
	case 0:
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		xx += 10;
		theta += 1;
		break;
	case 4:
		a += 2;
		break;
	case 5:
		break;
	}
}

void myTimer(int)
{
	glutPostRedisplay();
	control();
	glutTimerFunc(1000 / 60, myTimer, 0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(700, 700);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("travel");
	glutDisplayFunc(display);
	//glutReshapeFunc(myReshape);
	glutKeyboardFunc(mykey);
	glutTimerFunc(0, myTimer, 0);
	myinit();

	glutMainLoop();
	return 0;
}