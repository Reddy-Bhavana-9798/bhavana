struct timespec tim3, tim4;

void display3();
void display4();
void boat();
void water1();

void update1(int value)
{

	glutPostRedisplay();
	glutTimerFunc(200, update, 0);
}

void frame3()
{
	glClear(GL_COLOR_BUFFER_BIT);

	char string6_1[] = "ABS boats for local boating experience";

	glPushMatrix();
	glTranslatef(25, 400, 1);
	glScaled(0.3, 0.3, 1);
	glColor3f(1, 0, 0);
	drawText(string6_1);
	glPopMatrix();

	display3();

	if (a > 950)

	{
		b += 20;
		display4();
	}
	if (b == 180)
	{
		tim3.tv_sec = 2;
		tim3.tv_nsec = 500000000L;
	}

	glFlush();
	glutSwapBuffers();
}


void display3(void)
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	water1();
	//	bridge();
	boat();
	//	car();
	//	poles();

	glFlush();
	glutSwapBuffers();
}

void display4(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	water1();
	//	bridge();
	boat();
	//	car();
	//	poles();

	glFlush();
	glutSwapBuffers();
}

/* DRAW WATER */
void water1()
{
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.50, 1.0);
	glVertex2f(0.0, 0.0);
	glVertex2f(2000.0, 0.0);
	glVertex2f(2000.0, 1600.0);
	glVertex2f(0.0, 1600.0);
	glEnd();


	glPushMatrix();
	glTranslatef(0, q, 0);

	glBegin(GL_LINES);
	glColor3f(1.0, 1.0, 1.0);
	for (p = 0; p < 20000; p = p + 100)
		for (s = 0; s < 20000; s = s + 100)
			glVertex2f(100.0 + s, 100.0 + p);
	glVertex2f(200.0 + s, 100.0 + p);
	glEnd();


	glPopMatrix();
}

/* TO DRAW SHIP */
void boat()
{
	glPushMatrix();

	glTranslatef(0, y, 0);
	glPushMatrix();
	glBegin(GL_POLYGON);
	glColor3f(m, j, o);
	glVertex2f(900.0, 700.0);
	glVertex2f(800.0, 620.0);
	glVertex2f(750.0, 500.0);
	glVertex2f(750.0, 200.0);     //ship
	glVertex2f(900.0, 50.0);
	glVertex2f(1050.0, 200.0);
	glVertex2f(1050.0, 500.0);
	glVertex2f(1000.0, 620.0);

	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);     // ship back  1
	glVertex2f(750.0, 200.0);
	glVertex2f(900.0, 0.0);
	glVertex2f(900.0, 50.0);
	glVertex2f(751.0, 200.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.1, 0.1, 0.1);
	glVertex2f(901.0, 0.0);      //ship back  2
	glVertex2f(1050.0, 200.0);
	//	glVertex2f(1051.0,200.0);
	glVertex2f(901.0, 50.0);
	glEnd();


	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(900.0, 700.0);
	glVertex2f(820.0, 600.0);  //boat grill
	glVertex2f(820.0, 600.0);
	glVertex2f(800.0, 620.0);
	glVertex2f(820.0, 600.0);
	glVertex2f(770.0, 500.0);
	glVertex2f(770.0, 500.0);
	glVertex2f(750.0, 500.0);
	glVertex2f(770.0, 500.0);
	glVertex2f(770.0, 200.0);
	glVertex2f(770.0, 200.0);
	glVertex2f(750.0, 200.0);
	glVertex2f(770.0, 200.0);
	glVertex2f(900.0, 70.0);
	glVertex2f(900.0, 70.0);
	glVertex2f(900.0, 50.0);
	glVertex2f(900.0, 70.0);
	glVertex2f(1030.0, 200.0);
	glVertex2f(1030.0, 200.0);
	glVertex2f(1050.0, 200.0);
	glVertex2f(1030.0, 200.0);
	glVertex2f(1030.0, 500.0);
	glVertex2f(1030.0, 500.0);
	glVertex2f(1050.0, 500.0);
	glVertex2f(1030.0, 500.0);
	glVertex2f(980.0, 620.0);
	glVertex2f(980.0, 620.0);
	glVertex2f(1000.0, 620.0);
	glVertex2f(980.0, 620.0);
	glVertex2f(900.0, 700.0);
	glVertex2f(770.0, 350.0);
	glVertex2f(750.0, 350.0);
	glVertex2f(770.0, 450.0);
	glVertex2f(750.0, 450.0);
	glVertex2f(770.0, 250.0);
	glVertex2f(750.0, 250.0);
	glVertex2f(1030.0, 250.0);
	glVertex2f(1050.0, 250.0);
	glVertex2f(1030.0, 350.0);
	glVertex2f(1050.0, 350.0);
	glVertex2f(1030.0, 450.0);
	glVertex2f(1050.0, 450.0);
	glVertex2f(840.0, 130.0);
	glVertex2f(820.0, 110.0);
	glVertex2f(975.0, 110);
	glVertex2f(955.0, 125.0);
	glEnd();


	//	printf("g==%d\n",g);

	glBegin(GL_POLYGON);
	glColor3f(0.10, 0.10, 0.);
	glVertex2f(850.0, 400.0);   //boat inside polygon
	glVertex2f(950.0, 400.0);
	glVertex2f(950.0, 500.0);
	glVertex2f(850.0, 500.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(850.0, 400.0);//table on ship1
	glVertex2f(850.0, 350.0);
	glVertex2f(860.0, 350.0);
	glVertex2f(860.0, 400.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(920.0, 400.0);//2
	glVertex2f(930.0, 380.0);
	glVertex2f(930.0, 380.0);
	glVertex2f(920.0, 400.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(950.0, 400.0);//3
	glVertex2f(950.0, 350.0);
	glVertex2f(940.0, 350.0);
	glVertex2f(940.0, 400.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(860.0, 400.0);
	glVertex2f(860.0, 380.0);
	glVertex2f(870.0, 380.0);//4
	glVertex2f(870.0, 400.0);
	glEnd();

	glPopMatrix();
	glPopMatrix();
}

void animate()
{
	q = q - 1;
	y = y + 0.4;

	i += 0.4;
	if ((i >= 135) && (i <= 439))
	{
		k = k + 0.1;
		n = n + 0.1;
	}
	if (i >= 1200 && !(k <= 0 && n <= 0))
	{
		k = k - 0.1;
		n = n - 0.1;
	}

	if (k <= 0)
		g -= 0.5;

	glutPostRedisplay();
}

void myinit3()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 2000.0, 0.0, 1600.0);
}