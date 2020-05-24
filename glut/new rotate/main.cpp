#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<stdio.h>
#include <stdlib.h>
void (*foo)(void);
int i =0;
int k =0 ;
GLfloat matrix[16];
void showMatrix();
void showMatrix()
{
    for(int i=0; i<16; i++)
        printf("%f ",matrix[i]);
}
float angle = 10;
void display(void)
{

    glBegin(GL_LINES);
    glColor3f(1,1,0);
    glVertex2f(1,-1);
    glVertex2f(-1,1);
    glEnd();
    printf("\nto show before push\n");


     //Here we're pushing the identity matrix
    glRotatef(angle,0,0,0.1); //So every time we rotate, only 103 degree was rotated, to rotate every time we need to increase the angle everytime
    angle = angle + 100; //Here we incremented the angle

    printf("\n");

    glBegin(GL_LINES);
    glColor3f(0,1,0);
    glVertex2f(-1,-1);
    glVertex2f(1,1);
    glEnd();
    glutSwapBuffers();
//glFlush();
}
void keyboard(unsigned char key, int x, int y)
{
    if(key=='s')
    {

        glutPostRedisplay();
    }
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(150,50);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    foo = &display;
    glutCreateWindow("GLUT Shapes");
    printf("\n\n%d \n",k);
    k++;
    //showMatrix();
    glutDisplayFunc(foo);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return EXIT_SUCCESS;
}
