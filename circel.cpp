#include <GL/glut.h> 
#include <math.h> 
void circle(float cx,float cy,float r){ 
    glBegin(GL_TRIANGLE_FAN); 
for(int i=0;i<100;i++){ 
float theta=2*3.1416*i/100; 
glVertex2f(cx+r*cos(theta),cy+r*sin(theta)); 
} 
glEnd(); 
} 
void display(){ 
glClear(GL_COLOR_BUFFER_BIT); 
glColor3f(1,1,0); 
circle(0,0,0.3); 
glFlush(); 
} 
int main(int argc,char** argv){ 
glutInit(&argc,argv); 
glutCreateWindow("Circle"); 
glutDisplayFunc(display); 
glutMainLoop(); 
}