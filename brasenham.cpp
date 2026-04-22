#include <GL/glut.h> 
void Bresenham(int x1,int y1,int x2,int y2){ 
int dx=abs(x2-x1), dy=abs(y2-y1); 
int sx=(x1<x2)?1:-1, sy=(y1<y2)?1:-1; 
int err=dx-dy; 
    glBegin(GL_POINTS); 
    while(true){ 
        glVertex2i(x1,y1); 
        if(x1==x2 && y1==y2) break; 
        int e2=2*err; 
        if(e2>-dy){ err-=dy; x1+=sx; } 
        if(e2<dx){ err+=dx; y1+=sy; } 
    } 
    glEnd(); 
} 
void display(){ 
    glClear(GL_COLOR_BUFFER_BIT); 
    glColor3f(1,1,1); 
    Bresenham(0,0,200,200); 
    glFlush(); 
} 
int main(int argc,char** argv){ 
    glutInit(&argc,argv); 
    glutCreateWindow("Bresenham"); 
    glutDisplayFunc(display); 
    glutMainLoop(); 
} 