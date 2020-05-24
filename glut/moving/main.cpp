#include<windows.h>
#include<GL/glut.h>
#include<stdio.h>

float r=0.1;
float mov= 0;

void LeftRight(int key,int x,int y)
{
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

void drawCircle()
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


    glColor3f(1.0f, .5f, 1.0f);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,-.3);
    glVertex2f(-1,-.3);




    glEnd();
    drawCircle();
    glutSwapBuffers();
    glutPostRedisplay();



}


int main(int argc, char **argv)
{
    int width=550, height=450;
    char a;
    glutInit(&argc, argv);
    glutInitWindowSize(width, height);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
    glutCreateWindow("My window");
    glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
    glutDisplayFunc(display);
    glutSpecialFunc(LeftRight);

    //glutKeyboardFunc(KeyboardFunc);


    glutMainLoop();



}
