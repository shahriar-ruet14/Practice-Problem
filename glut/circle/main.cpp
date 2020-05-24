#include<windows.h>
#include <GL/glut.h>
#include<math.h>
#include<stdio.h>
float gx,gy;
int k=0;
int flag=0;
void drawx(float a, float b)
{
    glBegin(GL_LINES);
    glVertex2f(a +.2,b +0.1);
    glVertex2f(a -.2,b - .2);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(a -.2,b +0.1);
    glVertex2f(a +.2,b - .2);
    glEnd();
}
void drawc(float a, float b)
{
    float i,x,y,x1,y1;

    x=a+0.1*(cos(0));
    y=b+0.1*(sin(0));
    for(i=0; i<361; i++)
    {
        x1=a+0.1*(cos(i*.017));
        y1=b+0.1*(sin(i*.017));
        glBegin(GL_LINES);
        glVertex2f(x,y);
        glVertex2f(x1,y1);
        glEnd();
        x=x1;
        y=y1;
    }
}
void draw()
{
    float inputx,inputy;
    scanf("%f %f",&inputx,&inputy);
    drawc(inputx,inputy);
    drawx(inputx, inputy);

    glutSwapBuffers();
    glutPostRedisplay();


}
void drawbox()
{

}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(800,800);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
    glutCreateWindow("Shahriar");
    glutDisplayFunc(draw);
   // glClearColor(0.9f, 0.0f, 0.0f, 1.0f);

    glutMainLoop();
}

