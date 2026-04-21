#include <GL/glut.h> 
#include <math.h> 
void DDA(float x1,float y1,float x2,float y2){ 
float dx=x2-x1, dy=y2-y1; 
float steps = fabs(dx)>fabs(dy)?fabs(dx):fabs(dy); 
float xInc=dx/steps, yInc=dy/steps; 
float x=x1, y=y1; 
glBegin(GL_POINTS); 
for(int i=0;i<=steps;i++){ 
glVertex2f(x,y); 
x+=xInc; y+=yInc; 
} 
glEnd(); 
} 
void display(){ 
glClear(GL_COLOR_BUFFER_BIT); 
glColor3f(1,1,1); 
DDA(-0.5,-0.5,0.5,0.5); 
glFlush(); 
} 
int main(int argc,char** argv){ 
glutInit(&argc,argv); 
glutCreateWindow("DDA Line"); 
glutDisplayFunc(display); 
glutMainLoop(); 
} 