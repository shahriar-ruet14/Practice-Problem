#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
void display()
{
    //gluLookAt(0,2,3,0,0,0,0,1,0);
    glutWireSphere(.5,10,5);

    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(700,700);
	glutCreateWindow("Test");
	glutDisplayFunc(display);

   // glutFullScreen();
    //gluPerspective(45,1,0.1,100);
    glutMainLoop();
}
