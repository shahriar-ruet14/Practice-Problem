#include<windows.h>
#include<GL/glut.h>

float r=0.1;
float p=0;
void KeyboardFunc(unsigned char key, int x, int y)
{

    if (key=='q')
        exit(0); //q is for exit whole operation

    if (key=='r')
        r=-r; // r for rotate in  reversely as it is rotating
        if(key=='p') // p for pause on current position
            r=p;
            if(key=='m') // resume
            r=.1;

}
float ang=60;
void display(void)
{

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotatef(ang,0,-.3,0.4);
    ang+=r;
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);


    glColor3f(1.0f, 0.0f, 0.0f);

    glVertex3f(.10,.20,0);
    glVertex3f(.10,.60,0);
    glVertex3f(.70,.60,0);
    glVertex3f(.70,.20,0);

    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(.10,.20,0);
    glVertex3f(.40,.10,0);
    glVertex3f(1.0,.10,0);
    glVertex3f(.70,.20,0);


    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(.10,.20,0);
    glVertex3f(.10,.60,0);
    glVertex3f(.40,.50,0);
    glVertex3f(.40,.10,0);

    glColor3f(0.5f, 0.5f, 0.0f);
    glVertex3f(1.0,.10,0);
    glVertex3f(1.0,.50,0);
    glVertex3f(.70,.60,0);
    glVertex3f(.70,.20,0);

    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex3f(.1,.60,0);
    glVertex3f(.4,.50,0);
    glVertex3f(1.0,.50,0);
    glVertex3f(.70,.60,0);

    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex3f(.4,.10,0);
    glVertex3f(.4,.50,0);
    glVertex3f(.10,.60,0);
    glVertex3f(.10,.20,0);



    glEnd();

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
    glClearColor(0.9f, 0.9f, 0.9f, 1.0f);
    glutDisplayFunc(display);
    glutKeyboardFunc(KeyboardFunc);
    glutMainLoop();


}

