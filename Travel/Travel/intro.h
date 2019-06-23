void intro()
{
	char string3_1[] = "have a trip in mind";

	char string3_2[] = "but no money??";

	// Display  "Animated AD."

	glPushMatrix();
	glTranslatef(50, 300, 0);
	glScaled(0.3, 0.3, 1);
	drawText(string3_1);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(100, 200, 0);
	glScaled(0.3, 0.3, 1);
	drawText(string3_2);
	glPopMatrix();

	glutSwapBuffers();
}