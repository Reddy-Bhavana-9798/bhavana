
void draw_pixel(GLint cx, GLint cy)
{
	glColor3f(0.45, 0.45, 0.45);
	glBegin(GL_POINTS);
	glVertex2i(cx, cy);
	glEnd();
}

void plotpixels(GLint h, GLint k, GLint x, GLint y)
{
	draw_pixel(x + h, y + k);
	draw_pixel(-x + h, y + k);
	draw_pixel(x + h, -y + k);
	draw_pixel(-x + h, -y + k);
	draw_pixel(y + h, x + k);
	draw_pixel(-y + h, x + k);
	draw_pixel(y + h, -x + k);
	draw_pixel(-y + h, -x + k);
}

void circle_draw(GLint h, GLint k, GLint r)
{
	GLint d = 1 - r, x = 0, y = r;
	while (y > x)
	{
		plotpixels(h, k, x, y);
		if (d < 0)
			d += 2 * x + 3;
		else
		{
			d += 2 * (x - y) + 5;
			--y;
		}
		++x;
	}
	plotpixels(h, k, x, y);
}

void cylinder_draw(GLint xc)
{
	GLint r = 15, yc = 50;
	circle_draw(xc, yc, r);
	circle_draw(xc + 115, yc, r);
	circle_draw(xc + 185, yc, r);
	circle_draw(xc + 225, yc, r);
	circle_draw(xc + 310, yc, r);
	circle_draw(xc + 350, yc, r);
	circle_draw(xc + 57, yc, r);
}

void train(int x)
{
	int y = 50;
	glBegin(GL_POLYGON); // ENGINE //
	glColor3f(0, 0, 1);
	glVertex2f(x, y);
	glVertex2f(x + 165, y);
	glVertex2f(x + 165, y + 100);
	glVertex2f(x + 25, y + 100);
	glVertex2f(x, y + 50);
	glEnd();

	glBegin(GL_POLYGON);  //COACH 1//
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(x + 175, y);
	glVertex2f(x + 282, y);
	glVertex2f(x + 282, y + 100);
	glVertex2f(x + 175, y + 100);
	glEnd();

	glBegin(GL_POLYGON); //COACH 1 WINDOW //
	glColor3f(0, 1, 1);
	glVertex2f(x + 245, y + 60);
	glVertex2f(x + 270, y + 60);
	glVertex2f(x + 270, y + 85);
	glVertex2f(x + 245, y + 85);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 1);
	glVertex2f(x + 215, y + 60);
	glVertex2f(x + 240, y + 60);
	glVertex2f(x + 240, y + 85);
	glVertex2f(x + 215, y + 85);
	glEnd();

	glBegin(GL_POLYGON); //ENGINE WINDOW //
	glColor3f(0, 1, 1);
	glVertex2f(x + 25, y + 50);
	glVertex2f(x + 50, y + 50);
	glVertex2f(x + 50, y + 85);
	glVertex2f(x + 25, y + 85);
	glEnd();
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 165, y + 25);
	glVertex2f(x + 175, y + 25);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(x + 165, y + 75);
	glVertex2f(x + 175, y + 75);
	glEnd();

	glBegin(GL_POLYGON);  //COACH 2
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(x + 293, y);
	glVertex2f(x + 400, y);
	glVertex2f(x + 400, y + 100);
	glVertex2f(x + 293, y + 100);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 282, y + 25);
	glVertex2f(x + 293, y + 25);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(x + 282, y + 75);
	glVertex2f(x + 293, y + 75);
	glEnd();

	//COACH2 WINDOW

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 1);
	glVertex2f(x + 340, y + 60);
	glVertex2f(x + 365, y + 60);
	glVertex2f(x + 365, y + 85);
	glVertex2f(x + 340, y + 85);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 1, 1);
	glVertex2f(x + 370, y + 60);
	glVertex2f(x + 395, y + 60);
	glVertex2f(x + 395, y + 85);
	glVertex2f(x + 370, y + 85);
	glEnd();

	glBegin(GL_POLYGON); //DOOR 1//
	glColor3f(1, 1, 1);
	glVertex2f(x + 180, y + 20);
	glVertex2f(x + 200, y + 20);
	glVertex2f(x + 200, y + 70);
	glVertex2f(x + 180, y + 70);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.8, 0.78, 0.78);
	glVertex2f(x + 180, y + 20);
	glVertex2f(x + 190, y + 25);
	glVertex2f(x + 190, y + 60);
	glVertex2f(x + 180, y + 70);
	glEnd();

	glBegin(GL_POLYGON); //DOOR 2//
	glColor3f(1, 1, 1);
	glVertex2f(x + 300, y + 20);
	glVertex2f(x + 320, y + 20);
	glVertex2f(x + 320, y + 70);
	glVertex2f(x + 300, y + 70);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.78, 0.78, 0.78);
	glVertex2f(x + 300, y + 20);
	glVertex2f(x + 310, y + 25);
	glVertex2f(x + 310, y + 60);
	glVertex2f(x + 300, y + 70);
	glEnd();

	glLineWidth(2.5);
	glBegin(GL_LINES);//FRONT
	glColor3f(0, 0, 0);
	glVertex2f(x, y + 20);
	glVertex2f(x - 10, y + 20);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(x, y + 35);
	glVertex2f(x - 10, y + 35);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(x - 10, y + 20);
	glVertex2f(x - 10, y + 40);
	glEnd();

	// ELECTRIC
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 50, y + 100);
	glVertex2f(x + 60, y + 110);
	glVertex2f(x + 90, y + 110);
	glVertex2f(x + 100, y + 100);
	glEnd();
	glFlush();


	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glColor3f(0, 0, 0);
	glVertex2f(x + 75, y + 110);
	glVertex2f(x + 75, y + 130);
	glVertex2f(x + 130, y + 180);
	glVertex2f(x + 125, y + 150);
	glVertex2f(x + 75, y + 130);
	glEnd();


	glLineWidth(2.0); //wheel
	glPushMatrix();
	glTranslatef(x + 25, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 25, -y, 0);
	glBegin(GL_LINES);//wheel spokes//
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 25, y + 15);
	glVertex2f(x + 25, y - 15);
	glEnd();
	glPopMatrix();
	glLineWidth(3.0);
	glPushMatrix();
	glTranslatef(x + 25, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 25, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 40, y);
	glVertex2f(x + 10, y);
	glEnd();
	glPopMatrix();

	glLineWidth(3.0);
	glPushMatrix();
	glTranslatef(x + 25, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 25, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 16, y - 12);
	glVertex2f(x + 33, y + 12);
	glEnd();
	glPopMatrix();

	glLineWidth(2.0);//2nd wheel spokes
	glPushMatrix();
	glTranslatef(x + 82, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 82, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 82, y + 15);
	glVertex2f(x + 82, y - 15);
	glEnd();
	glPopMatrix();

	glLineWidth(3.0);
	glPushMatrix();
	glTranslatef(x + 82, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 82, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 97, y);
	glVertex2f(x + 67, y);
	glEnd();
	glPopMatrix();

	glLineWidth(3.0);
	glPushMatrix();
	glTranslatef(x + 82, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 82, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 90, y - 12);
	glVertex2f(x + 72, y + 12);
	glEnd();
	glPopMatrix();

	glLineWidth(2.0);
	glPushMatrix();
	glTranslatef(x + 140, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 140, -y, 0);//3rd wheel spokes
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 140, y + 15);
	glVertex2f(x + 140, y - 15);
	glEnd();
	glPopMatrix();

	glLineWidth(3.0);
	glPushMatrix();
	glTranslatef(x + 140, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 140, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 125, y);
	glVertex2f(x + 155, y);
	glEnd();
	glPopMatrix();

	glLineWidth(3.0);
	glPushMatrix();
	glTranslatef(x + 140, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 140, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 132, y - 12);
	glVertex2f(x + 148, y + 12);
	glEnd();
	glPopMatrix();

	glLineWidth(2.0); //coach1 wheel spokes
	glPushMatrix();
	glTranslatef(x + 210, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 210, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 210, y + 15);
	glVertex2f(x + 210, y - 15);
	glEnd();
	glPopMatrix();

	glLineWidth(3.0);
	glPushMatrix();
	glTranslatef(x + 210, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 210, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 225, y);
	glVertex2f(x + 195, y);
	glEnd();
	glPopMatrix();

	glLineWidth(3.0);
	glPushMatrix();
	glTranslatef(x + 210, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 210, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 217, y - 12);
	glVertex2f(x + 202, y + 12);
	glEnd();
	glPopMatrix();

	glLineWidth(2.0);//coach1 2nd wheel
	glPushMatrix();
	glTranslatef(x + 250, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 250, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 250, y + 15);
	glVertex2f(x + 250, y - 15);
	glEnd();
	glPopMatrix();

	glLineWidth(3.0);
	glPushMatrix();
	glTranslatef(x + 250, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 250, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 265, y);
	glVertex2f(x + 235, y);
	glEnd();
	glPopMatrix();
	glLineWidth(3.0);
	glPushMatrix();
	glTranslatef(x + 250, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 250, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 240, y - 12);
	glVertex2f(x + 257, y + 12);
	glEnd();
	glPopMatrix();

	glLineWidth(2.0);
	glPushMatrix();
	glTranslatef(x + 335, y, 0);//coach2 wheel spokes
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 335, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 335, y + 15);
	glVertex2f(x + 335, y - 15);
	glEnd();
	glPopMatrix();
	glLineWidth(3.0);
	glPushMatrix();
	glTranslatef(x + 335, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 335, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 320, y);
	glVertex2f(x + 350, y);
	glEnd();
	glPopMatrix();

	glLineWidth(3.0);
	glPushMatrix();
	glTranslatef(x + 335, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 335, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 340, y - 12);
	glVertex2f(x + 325, y + 12);
	glEnd();
	glPopMatrix();

	glLineWidth(2.0);//coach 2nd
	glPushMatrix();
	glTranslatef(x + 375, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 375, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 375, y + 15);
	glVertex2f(x + 375, y - 15);
	glEnd();
	glPopMatrix();

	glLineWidth(3.0);
	glPushMatrix();
	glTranslatef(x + 375, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 375, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 360, y);
	glVertex2f(x + 390, y);
	glEnd();
	glPopMatrix();

	glLineWidth(3.0);
	glPushMatrix();
	glTranslatef(x + 375, y, 0);
	glRotatef(theta, 0, 0, 1);
	glTranslatef(-x - 375, -y, 0);
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(x + 365, y - 12);
	glVertex2f(x + 380, y + 12);
	glEnd();
	glPopMatrix();
	glFlush();
}

void electricwire()
{
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(-1000, 200);
	glVertex2f(5000, 200);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(-1000, 230);
	glVertex2f(5000, 230);
	glEnd();
	//glBegin(GL_LINES);
	//glVertex2f(750,300);
	//glVertex2f(1000,300);
	//glEnd();

	glFlush();
}


void track()
{
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(-1000, 35);
	glVertex2f(5000, 35);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	glVertex2f(-1000, 45);
	glVertex2f(5000, 45);
	glEnd();
	int i;
	glPointSize(8);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	for (i = -3000; i <= 5000; i = i + 10)
	{
		glVertex2f(i, 35);
		glVertex2f(i, 45);
	}
	glEnd();
}

void sky()
{
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 1);
	glVertex2f(0, 230);
	glVertex2f(0, 700);
	glVertex2f(700, 700);
	glVertex2f(700, 230);
	glEnd();

}

void tree12()
{
	//trunk1
	glColor3ub(95, 6, 5);
	double len = 100;
	double thick = 20;
	glPushMatrix();
	glTranslated(100 + 450, 150 + 330, 0.0);
	glScaled(thick, len, thick);
	glutSolidCube(1.0);
	glPopMatrix();

	//leaves1


	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();

	glTranslated(100 + 450, 230 + 310, 0.0);
	glutSolidCone(70, 140, 3, 2);
	glPopMatrix();

	//leaves2

	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();
	glTranslated(100 + 450, 260 + 310, 0.0);
	glutSolidCone(60, 120, 3, 2);
	glPopMatrix();

	// leaves3

	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();
	glTranslated(100 + 450, 290 + 310, 0);
	glutSolidCone(50, 100, 3, 2);
	glPopMatrix();
}

void tree1()
{
	//trunk1
	glColor3ub(95, 6, 5);
	double len = 100;
	double thick = 20;
	glPushMatrix();
	glTranslated(100, 150 - 48, 0.0);
	glScaled(thick, len, thick);
	glutSolidCube(1.0);
	glPopMatrix();

	//leaves1


	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();

	glTranslated(100, 235 - 48, 0.0);
	glutSolidCone(70, 140, 3, 2);
	glPopMatrix();

	//leaves2

	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();
	glTranslated(100, 270 - 48, 0.0);
	glutSolidCone(60, 120, 3, 2);
	glPopMatrix();

	// leaves3

	glColor3f(0.0, 0.2, 0.0);
	glPushMatrix();
	glLoadIdentity();
	glTranslated(100, 300 - 48, 0);
	glutSolidCone(50, 100, 3, 2);
	glPopMatrix();
}

void road()
{
	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_POLYGON);
	glVertex2f(0, 200);
	glVertex2f(0, 12);
	glVertex2f(10000, 12);
	glVertex2f(10000, 200);
	glEnd();
}


void frame1()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	char string1_1[] = "ABS TRAINS - travel @ low cost ";

	glPushMatrix();
	glTranslatef(40, 200, 1);
	glScaled(0.2, 0.2, 1);
	glColor3f(1, 0, 0);
	drawText(string1_1);
	glPopMatrix();


	glPushMatrix();
	sky();
	road();
	track();
	electricwire();
	//stop();
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(3.0);
	glTranslated(-xx, 0, 0);

	tree1();
	train(50);
	train(750);
	train(1450);
	train(2150);
	train(2850);
	cylinder_draw(75);
	cylinder_draw(775);
	cylinder_draw(1475);
	cylinder_draw(2175);
	cylinder_draw(2875);
	glPopMatrix();
	glutSwapBuffers();
}
