void intro2()
{
	char string4_1[] = "here we get you best";

	char string4_2[] = " deals and offers";

	char string4_3[] = "go ahead plan";

	char string4_4[] = "your trip";

	glPushMatrix();
	glTranslatef(25, 400, 0);
	glScaled(0.3, 0.3, 1);
	drawText(string4_1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(50, 300, 0);
	glScaled(0.3, 0.3, 1);
	drawText(string4_2);
	glPopMatrix();
	
	glPushMatrix();
	glTranslatef(100, 200, 0);
	glScaled(0.3, 0.3, 1);
	drawText(string4_3);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(150, 100, 0);
	glScaled(0.3, 0.3, 1);
	drawText(string4_4);
	glPopMatrix();



	glutSwapBuffers();
}