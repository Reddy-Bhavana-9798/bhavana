struct timespec tim, tim2;

void display1();
void display2();
void ship();
void water();

void update(int value)
{
	
	glutPostRedisplay();
	glutTimerFunc(200, update, 0);
}

void frame2()
{
	glClear(GL_COLOR_BUFFER_BIT);

	char string2_1[] = "ABS CRUISE - experience life on cruise";

	glPushMatrix();
	glTranslatef(25, 400, 1);
	glScaled(0.3, 0.3, 1);
	glColor3f(1, 0, 0);
	drawText(string2_1);
	glPopMatrix();

	display1();

	if (a > 750)

	{
		b += 0.1;
		display2();
	}
	if (b == 180)
	{
		tim.tv_sec = 2;
		tim.tv_nsec = 500000000L;
	}

	glFlush();
	glutSwapBuffers();
}

void display1()
{
	glPushMatrix();
	glTranslated(a, 75, 0.0);
	ship();
	glPopMatrix();
	water();
}

void display2()
{

	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();
	glTranslated(b, 75, 0.0);
	ship();
	glPopMatrix();
	water();

}

/* DRAW WATER */
void water()
{

	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0, 0);
	glVertex2f(1000, 0);
	glVertex2f(1000, 100);
	glVertex2f(0, 100);
	glEnd();
}

/* TO DRAW SHIP */
void ship()
{

	glScaled(20, 20, 0);
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(3.5, 5.5);
	glVertex2f(3.5, 8.5);
	glVertex2f(19.5, 8.5);
	glVertex2f(19.5, 5.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(1, 5.5);
	glVertex2f(4, 1);
	glVertex2f(19, 1);
	glVertex2f(21.5, 5.5);
	glEnd();

	glColor3f(0.7, 0.4, 0.2);
	glBegin(GL_POLYGON);
	glVertex2f(4, 5.5);
	glVertex2f(4, 8);
	glVertex2f(5, 8);
	glVertex2f(5, 5.5);
	glEnd();

	glColor3f(0.9, 0.9, 0.9);
	glBegin(GL_POLYGON);
	glVertex2f(7, 7.5);
	glVertex2f(7, 8);
	glVertex2f(10, 8);
	glVertex2f(10, 7.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(11.5, 7.5);
	glVertex2f(11.5, 8);
	glVertex2f(15, 8);
	glVertex2f(15, 7.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(16, 7.5);
	glVertex2f(16, 8);
	glVertex2f(19, 8);
	glVertex2f(19, 7.5);
	glEnd();

	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2f(4.5, 8.5);
	glVertex2f(4.5, 10);
	glVertex2f(18.5, 10);
	glVertex2f(18.5, 8.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(5.5, 10);
	glVertex2f(5.5, 12.9);
	glVertex2f(7, 12.9);
	glVertex2f(7, 10);
	glEnd();

	glColor3f(0.9, 0.5, 0.2);
	glBegin(GL_POLYGON);
	glVertex2f(5.5, 12.9);
	glVertex2f(5.5, 13.5);
	glVertex2f(7, 13.5);
	glVertex2f(7, 12.9);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(8.5, 10);
	glVertex2f(8.5, 12.9);
	glVertex2f(10, 12.9);
	glVertex2f(10, 10);
	glEnd();

	glColor3f(0.9, 0.5, 0.2);
	glBegin(GL_POLYGON);
	glVertex2f(8.5, 12.9);
	glVertex2f(8.5, 13.5);
	glVertex2f(10, 13.5);
	glVertex2f(10, 12.9);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(11.5, 10);
	glVertex2f(11.5, 12.9);
	glVertex2f(13, 12.9);
	glVertex2f(13, 10);
	glEnd();

	glColor3f(0.9, 0.5, 0.2);
	glBegin(GL_POLYGON);
	glVertex2f(11.5, 12.9);
	glVertex2f(11.5, 13.5);
	glVertex2f(13, 13.5);
	glVertex2f(13, 12.9);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(14.5, 10);
	glVertex2f(14.5, 12.9);
	glVertex2f(16, 12.9);
	glVertex2f(16, 10);
	glEnd();

	glColor3f(0.9, 0.5, 0.2);
	glBegin(GL_POLYGON);
	glVertex2f(14.5, 12.9);
	glVertex2f(14.5, 13.5);
	glVertex2f(16, 13.5);
	glVertex2f(16, 12.9);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(1.5, 5.5);
	glVertex2f(1.5, 6.5);
	glVertex2f(2, 6.2);
	glVertex2f(3, 6.2);
	glVertex2f(3.5, 6.5);
	glVertex2f(3.5, 5.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(3.5, 5.5);
	glVertex2f(3.5, 6.5);
	glVertex2f(4, 6.2);
	glVertex2f(5, 6.2);
	glVertex2f(5.5, 6.5);
	glVertex2f(5.5, 5.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(5.5, 5.5);
	glVertex2f(5.5, 6.5);
	glVertex2f(6, 6.2);
	glVertex2f(7, 6.2);
	glVertex2f(7.5, 6.5);
	glVertex2f(7.5, 5.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(7.5, 5.5);
	glVertex2f(7.5, 6.5);
	glVertex2f(8, 6.2);
	glVertex2f(9, 6.2);
	glVertex2f(9.5, 6.5);
	glVertex2f(9.5, 5.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(9.5, 5.5);
	glVertex2f(9.5, 6.5);
	glVertex2f(10, 6.2);
	glVertex2f(11, 6.2);
	glVertex2f(11.5, 6.5);
	glVertex2f(11.5, 5.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(11.5, 5.5);
	glVertex2f(11.5, 6.5);
	glVertex2f(12, 6.2);
	glVertex2f(13, 6.2);
	glVertex2f(13.5, 6.5);
	glVertex2f(13.5, 5.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(13.5, 5.5);
	glVertex2f(13.5, 6.5);
	glVertex2f(14, 6.2);
	glVertex2f(15, 6.2);
	glVertex2f(15.5, 6.5);
	glVertex2f(15.5, 5.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(15.5, 5.5);
	glVertex2f(15.5, 6.5);
	glVertex2f(16, 6.2);
	glVertex2f(17, 6.2);
	glVertex2f(17.5, 6.5);
	glVertex2f(17.5, 5.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(17.5, 5.5);
	glVertex2f(17.5, 6.5);
	glVertex2f(18, 6.2);
	glVertex2f(19, 6.2);
	glVertex2f(19.5, 6.5);
	glVertex2f(19.5, 5.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(19.5, 5.5);
	glVertex2f(19.5, 6.5);
	glVertex2f(20, 6.2);
	glVertex2f(20.5, 6.2);
	glVertex2f(21, 6.5);
	glVertex2f(21, 5.5);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(4.5, 3.5);
	glVertex2f(4.5, 4.5);
	glVertex2f(5.5, 4.5);
	glVertex2f(5.5, 3.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(7, 3.5);
	glVertex2f(7, 4.5);
	glVertex2f(8, 4.5);
	glVertex2f(8, 3.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(9.5, 3.5);
	glVertex2f(9.5, 4.5);
	glVertex2f(10.5, 4.5);
	glVertex2f(10.5, 3.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(12, 3.5);
	glVertex2f(12, 4.5);
	glVertex2f(13, 4.5);
	glVertex2f(13, 3.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(14.5, 3.5);
	glVertex2f(14.5, 4.5);
	glVertex2f(15.5, 4.5);
	glVertex2f(15.5, 3.5);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(17, 3.5);
	glVertex2f(17, 4.5);
	glVertex2f(18, 4.5);
	glVertex2f(18, 3.5);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(5, 10);
	glVertex2f(5, 11);
	glVertex2f(5.5, 10.8);
	glVertex2f(6.5, 10.8);
	glVertex2f(7, 11);
	glVertex2f(7, 10);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(7, 10);
	glVertex2f(7, 11);
	glVertex2f(7.5, 10.8);
	glVertex2f(8.5, 10.8);
	glVertex2f(9, 11);
	glVertex2f(9, 10);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(9, 10);
	glVertex2f(9, 11);
	glVertex2f(9.5, 10.8);
	glVertex2f(10.5, 10.8);
	glVertex2f(11, 11);
	glVertex2f(11, 10);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(11, 10);
	glVertex2f(11, 11);
	glVertex2f(11.5, 10.8);
	glVertex2f(12.5, 10.8);
	glVertex2f(13, 11);
	glVertex2f(13, 10);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(13, 10);
	glVertex2f(13, 11);
	glVertex2f(13.5, 10.8);
	glVertex2f(14.5, 10.8);
	glVertex2f(15, 11);
	glVertex2f(15, 10);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2f(15, 10);
	glVertex2f(15, 11);
	glVertex2f(15.5, 10.8);
	glVertex2f(16.5, 10.8);
	glVertex2f(17, 11);
	glVertex2f(17, 10);
	glEnd();
}

void myinit2()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 999.0, 0.0, 799.0);
}