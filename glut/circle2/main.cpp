#include<windows.h>
#include <GL/glut.h>
#include<math.h>
#include<stdio.h>
float centerx = 0,centery= 0 ;

int flag=0;
void drawx(float a, float b)
{
   glBegin(GL_LINES);
   glVertex2f(a +.02,b +0.01);
   glVertex2f(a -.02,b - .02);
   glEnd();


   glBegin(GL_LINES);
   glVertex2f(a -.02,b +0.01);
   glVertex2f(a +.02,b - .02);
   glEnd();
}
void drawCircle(float a, float b)
{
    float i,x,y,x1,y1;
    x=a+0.1*(cos(0));
    y=b+0.1*(sin(0));

    for(i=-1;i<361;i++){

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


void KeyboardFunc(unsigned char key,int x,int y)
{

    if(key=='1'){
        centerx=-0.6;
        centery=0.6;
    }
    if(key=='2'){
        centerx=0;
        centery=0.6;
    }
    if(key=='3'){
        centerx=0.6;
        centery=0.6;
    }
    if(key=='4'){
        centerx=-0.6;
        centery=0;
    }
    if(key=='5'){
        centerx=0;
        centery=0;
    }
    if(key=='6'){
        centerx=0.6;
        centery=0;
    }
    if(key=='7'){
        centerx=-0.6;
        centery=-0.6;
    }
    if(key=='8'){
        centerx=0;
        centery=-0.6;
    }
    if(key=='9'){
        centerx=0.6;
        centery=-0.6;
    }
    if(flag %2 == 0)
    {
        drawCircle(centerx,centery);
        flag++;
    }
    else
    {
        drawx(centerx,centery);
        flag++;
    }

    glutPostRedisplay();
    printf("Key board pressed is %c",key);

}
void drawGrid()
{

   glBegin(GL_LINES);
   glVertex2f(-0.8,0.4);
   glVertex2f(0.8,0.4);
   glEnd();


   glBegin(GL_LINES);
   glVertex2f(-0.8,-0.4);
   glVertex2f(0.8,-0.4);
   glEnd();


   glBegin(GL_LINES);
   glVertex2f(-0.4,0.8);
   glVertex2f(-0.4,-0.8);
   glEnd();


   glBegin(GL_LINES);
   glVertex2f(0.4,0.8);
   glVertex2f(0.4,-0.8);
   glEnd();




   glutKeyboardFunc(KeyboardFunc);

   glutSwapBuffers();



}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(500,500);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);

    glutCreateWindow("Tic Tac Toe ");

    glutDisplayFunc(drawGrid);

    glutMainLoop();
}
