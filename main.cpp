#include <GL/glut.h> 
void display(){ 
glClear(GL_COLOR_BUFFER_BIT); 
glFlush(); 
} 
void init(){ 
glClearColor(0,0,0,1); 
} 
int main(int argc,char** argv){ 
glutInit(&argc,argv); 
glutCreateWindow("Part 01 - Basic Setup"); 
glutInitWindowSize(800,600); 
init(); 
glutDisplayFunc(display); 
glutMainLoop(); 
return 0; 
}