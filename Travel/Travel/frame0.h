void frame0()
{
	char string0_1[] = "ABS Rails and cruise";

	char string0_2[] = "Computer Graphics";

	char string0_3[] = "Animated AD.";

	//char string0_4[]= " ";

	// Display "GO Smart Watch"

	glPushMatrix();
	glTranslatef(25, 400, 0);
	glScaled(0.3, 0.3, 1);
	glColor3f(1, 0, 0);
	drawText(string0_1);
	glPopMatrix();

	// Display  "Animated AD."

	glPushMatrix();
	glTranslatef(50, 300, 0);
	glScaled(0.3, 0.3, 1);
	drawText(string0_2);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(100, 200, 0);
	glScaled(0.3, 0.3, 1);
	drawText(string0_3);
	glPopMatrix();

	glutSwapBuffers();
}