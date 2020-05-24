#include<windows.h>
#include<GL/glut.h>
#include<stdio.h>
float mov= 0;
void LeftRight(int key,int x,int y)
{
    ///Get Key Response and move on that direction
    if(key==GLUT_KEY_RIGHT)
    {
        if(mov>=1.0)
            mov=0.0;
        mov+=0.01;
        glutPostRedisplay();
    }
    else if(key==GLUT_KEY_LEFT)
    {
        if(mov<=-.60)
            mov=0.0;
        mov-=0.01;
        glutPostRedisplay();
    }
}

void drawCar()
{
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.1f, 0.1f);
    glVertex2f(-.9 + mov,0);
    glVertex2f(-.8+ mov,0);
    glVertex2f(-.8+ mov,.1);
    glVertex2f(-.9+ mov,.1);
    glEnd();
    //glutSwapBuffers();
    glutPostRedisplay();
}
void display(void)
{
    glLoadIdentity();

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    ///drae Road
    glColor3f(0.0f, .50f, 0.0f);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,-.3);
    glVertex2f(-1,-.3);
    glEnd();
    ///Drawing the moving object
    drawCar();
    glutSwapBuffers();
    glutPostRedisplay();
}


int main(int argc, char **argv)
{
    int width=1366, height=450;
    char a;
    glutInit(&argc, argv);
    glutInitWindowSize(width, height);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
    glutCreateWindow("Moving Object\n");


    glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
    glutDisplayFunc(display);
    glutSpecialFunc(LeftRight);


    printf(" ->  Right Arrow to move the object in Right\n");
    printf(" <-  Left Arrow to move the object in Left\n");


    glutMainLoop();



}
