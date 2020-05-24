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
void showMatrix()
{
    printf("\n Matrix displayed: %d",k++);
    for(int i=0; i<16; i++){
        if(i%4 == 0)
        printf("\n");

        printf("%f ",matrix[i]);
    }
    printf("\n**");
}
float angle = 10;
void display(void)
{
    glGetFloatv(GL_MODELVIEW_MATRIX, matrix);
    glPopMatrix();
    glBegin(GL_LINES);
    glColor3f(1,1,0);
    glVertex2f(1,-1);
    glVertex2f(-1,1);
    glEnd();

    glPushMatrix();//Here we're pushing the identity matrix

    glRotatef(angle,0,0,0.1); //So every time we rotate, only 103 degree was rotated, to rotate every time we need to increase the angle everytime
    angle = angle + 103; //Here we incremented the angle

    glGetFloatv(GL_MODELVIEW_MATRIX, matrix);
    printf("\n");
    showMatrix();
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
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glPushMatrix();

    glGetFloatv(GL_MODELVIEW_MATRIX, matrix);

    showMatrix();
    glutDisplayFunc(foo);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return EXIT_SUCCESS;
}
