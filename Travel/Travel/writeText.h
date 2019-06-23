
void drawText(char *text)
{
	char *letter;

	for (letter = text; *letter != '\0'; letter++)
	{

		glutStrokeCharacter(GLUT_STROKE_ROMAN, *letter);

	}
}