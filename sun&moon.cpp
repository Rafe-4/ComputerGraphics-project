#include <GL/glut.h> 
#include <math.h> 
float angle = 0; 
void circle(float x,float y,float r){ 
glBegin(GL_TRIANGLE_FAN); 
for(int i=0;i<100;i++){ 
float t=2*3.1416*i/100; 
glVertex2f(x+r*cos(t),y+r*sin(t)); 
} 
glEnd(); 
} 
void display(){ 
glClear(GL_COLOR_BUFFER_BIT); 
glColor3f(1,1,0); // sun 
circle(0.5*cos(angle),0.5*sin(angle),0.1); 
glColor3f(1,1,1); // moon 
circle(-0.5*cos(angle),-0.5*sin(angle),0.1); 
glutSwapBuffers(); 
} 
void update(int){ 
angle+=0.01; 
glutPostRedisplay(); 
glutTimerFunc(16,update,0); 
} 
int main(int argc,char** argv){ 
glutInit(&argc,argv); 
glutInitDisplayMode(GLUT_DOUBLE); 
glutCreateWindow("Sun Moon"); 
glutDisplayFunc(display); 
glutTimerFunc(0,update,0); 
glutMainLoop(); 
}