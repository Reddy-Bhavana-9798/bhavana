void end() 
{
		char string3_0[] = "plan your trip with us";

		char string3_1[] = "for more details";

		char string3_2[] = "by,";

		char string3_3[] = "Reddy Bhavana [1DS16CS734]";

		char string3_4[] = "Sangeetha N [1DS16CS738]";

		char string3_5[] = "Aisha Siddika [1DS16CS702]";

		// Display  "Animated AD."

		glPushMatrix();
		glTranslatef(25, 600, 0);
		glScaled(0.3, 0.3, 1);
		drawText(string3_0);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(50, 500, 0);
		glScaled(0.3, 0.3, 1);
		drawText(string3_1);
		glPopMatrix();

		// Display  "Animated AD."

		glPushMatrix();
		glTranslatef(300, 400, 0);
		glScaled(0.3, 0.3, 1);
		drawText(string3_2);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(400, 300, 0);
		glScaled(0.3, 0.3, 1);
		drawText(string3_3);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(400, 200, 0);
		glScaled(0.3, 0.3, 1);
		drawText(string3_4);
		glPopMatrix();

		glPushMatrix();
		glTranslatef(400, 100, 0);
		glScaled(0.3, 0.3, 1);
		drawText(string3_5);
		glPopMatrix();

		glutSwapBuffers();
}