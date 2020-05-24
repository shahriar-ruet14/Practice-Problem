#include<windows.h>
#include<GL/glut.h>

void draw()
{
    glColor3f(200,200,200);
    glBegin(GL_LINES);
    glColor3f(255,255,255);
    glVertex3f(0.1,0.1,0);
    glVertex3f(0.1,0.9,0);

    glVertex3f(0.1,0.9,0);
    glVertex3f(0.4,0.4,0);

    glVertex3f(0.4,0.4,0);
    glVertex3f(0.7,.9,0);

    glVertex3f(0.7,.9,0);
    glVertex3f(0.7,.1,0);


   glVertex2f(-.9,0);
   glVertex2f(-.9,-.5);

   glVertex2f(-.9,0);
   glVertex2f(-.7,0);

   glVertex2f(-.7,0);
   glVertex2f(-.7,-.5);

   glVertex2f(-.9,-.25);
   glVertex2f(-.7,-.25);

   glVertex2f(-.65,0);
   glVertex2f(-.65,-.5);

   glVertex2f(-.4,0);
   glVertex2f(-.4,-.5);

   glVertex2f(-.65,-.25);
   glVertex2f(-.4,-.25);

   glVertex2f(-.3,0);
   glVertex2f(-.3,-.5);

   glVertex2f(-.3,0);
   glVertex2f(-.2,-.2);

    glVertex2f(-.2,-.2);
    glVertex2f(-.1,0);
    glVertex2f(-.1,0);
    glVertex2f(-.1,-.5);

    glVertex2f(0,0);
    glVertex2f(0,-.5);
    glVertex2f(0,-.5);
    glVertex2f(.2,-.5);
    glVertex2f(.2,-.5);
    glVertex2f(.2,0);
    glVertex2f(.3,0);
    glVertex2f(.3,-.5);
    glVertex2f(.3,-.5);
    glVertex2f(.5,-.4);
    glVertex2f(.3,0);
    glVertex2f(.5,-.1);
    glVertex2f(.5,-.1);
    glVertex2f(.5,-.4);



    glVertex2f(-.9,-.6);
    glVertex2f(-.7,-.6);
    glVertex2f(-.9,-.6);
    glVertex2f(-.9,-.8);
    glVertex2f(-.9,-.8);
    glVertex2f(-.7,-.8);
    glVertex2f(-.7,-.8);
    glVertex2f(-.7,-.99);
    glVertex2f(-.7,-.99);
    glVertex2f(-.99,-.99);

    glVertex2f(-.6,-.6);
    glVertex2f(-.6,-.99);
    glVertex2f(-.4,-.6);
    glVertex2f(-.4,-.99);
    glVertex2f(-.4,-.8);
    glVertex2f(-.6,-.8);

    glVertex2f(-.5,-.6);
    glVertex2f(-.5,-.99);
    glVertex2f(-.3,-.99);
    glVertex2f(-.3,-.6);



































    glEnd();
    glutSwapBuffers();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(700, 700);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutCreateWindow("This is a title");
    glutDisplayFunc(draw);
    glutMainLoop();
}
