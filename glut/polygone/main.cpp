#include<windows.h>
#include<GL/glut.h>
#include<stdio.h>
float p,i;
void draw();

void keyboardFunc(unsigned char key, int x, int y )
{
   if(key=='q')
    exit(0);
   else if (key=='r')
   {
       p=-.1;
       glRotatef(i,0,0,p);
   }
}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(500,500);
    glutInitDisplayMode(GLUT_DOUBLE| GLUT_RGB);
    glutCreateWindow("First");
    glutDisplayFunc(draw);
    glutKeyboardFunc(keyboardFunc);
    glutMainLoop();

}

void draw()
{
    glColor3f(0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glRotatef(i,0,0,.8);
    i+= .1;
    glBegin(GL_POLYGON);

    glColor3f(255,255,255);

    glVertex3f(0,0,0);
    glVertex3f(.1,0,0);
    glVertex3f(0,0,0);
    glVertex3f(0,0.1,0);
    glVertex3f(0,0.1,0);
    glVertex3f(0.1,0.1,0);
    glVertex3f(0.1,0.1,0);
    glVertex3f(.1,0,0);
    glVertex3f(0,0,0);
    glVertex3f(-0.05,-0.05,0.1);
    glVertex3f(-0.05,-0.05,0.1);
    glVertex3f(-0.05,.05,0.1);
    glVertex3f(-0.05,.05,0.1);
    glVertex3f(0.05,.05,0.1);

    glVertex3f(-0.05,0.05,0.1);
    glVertex3f(0,0.1,0);

    glVertex3f(0.05,.05,0.1);
    glVertex3f(0.1,.1,0);

    glVertex3f(0.05,.05,0.1);
    glVertex3f(0.05,-.05,0.1);

    glVertex3f(0.05,-.05,0.1);
    glVertex3f(0.1,0,0);

    glVertex3f(0.05,-.05,0.1);
     glVertex3f(-0.05,-0.05,0.1);

    glEnd();
    glutSwapBuffers();
    glutPostRedisplay();
}

