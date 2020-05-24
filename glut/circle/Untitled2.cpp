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
    for(i=0;i<361;i++){
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
   float i,x,y,x1,y1;
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
   if(flag%2==0){
        drawx(gx,gy);
        flag++;
   }
   else{
        drawc(gx,gy);
   }
   glutSwapBuffers();
   glutPostRedisplay();


}
void keyf(unsigned char key,int x,int y)
{
    printf("%c\n",key);
    if(key=='1'){
        gx=-0.6;
        gy=0.6;
    }
    if(key=='2'){
        gx=0;
        gy=0.6;
    }
    if(key=='3'){
        gx=0.6;
        gy=0.6;
    }
    if(key=='4'){
        gx=-0.6;
        gy=0;
    }
    if(key=='5'){
        gx=-0;
        gy=0;
    }
    if(key=='6'){
        gx=0.6;
        gy=0;
    }
    if(key=='7'){
        gx=-0.6;
        gy=-0.6;
    }
    if(key=='8'){
        gx=0;
        gy=-0.6;
    }
    if(key=='9'){
        gx=0.6;
        gy=-0.6;
    }

}
int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitWindowSize(500,500);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
    glutCreateWindow("Title");
    glutDisplayFunc(draw);
    glutKeyboardFunc(keyf);
    glutMainLoop();
}


