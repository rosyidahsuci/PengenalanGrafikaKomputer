
#include <GL/glut.h>
void userdraw(void) {
	//Disini tempat untuk menggambar
}
void display(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	userdraw();
	glutSwapBuffers();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(640, 480);
	glutCreateWindow("2103181045 Rosyidah Amini Suci");
	glClearColor(0.0, 0.0, 0.0, 0.0);
	gluOrtho2D(-320., 320., -240.0, 240.0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}