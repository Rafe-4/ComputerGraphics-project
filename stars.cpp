#include <GL/glut.h> 
void star(float x,float y){ 
glBegin(GL_TRIANGLES); 
glVertex2f(x,y+0.02); 
glVertex2f(x-0.02,y-0.02); 
glVertex2f(x+0.02,y-0.02); 
glEnd(); 
} 
void display(){ 
glClear(GL_COLOR_BUFFER_BIT); 
glColor3f(1,1,1); 
for(float i=-0.9;i<1;i+=0.2) 
for(float j=0;j<1;j+=0.2) 
star(i,j); 
glFlush(); 
} 
int main(int argc,char** argv){ 
glutInit(&argc,argv); 
glutCreateWindow("Stars"); 
glutDisplayFunc(display); 
glutMainLoop(); 
}