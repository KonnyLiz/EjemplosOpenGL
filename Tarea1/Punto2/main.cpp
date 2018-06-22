#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);
    glBegin(GL_TRIANGLE_STRIP);
   //triangulo izquierdo
	glColor3f(0,1,0);		
    glVertex3f(-0.2f,-0.2f,0.0f);
    glColor3f(0,1,0);		
    glVertex3f(-0.5f,0.0f,0.0f);
    glColor3f(0,1,0);		
    glVertex3f(-0.2f,0.2f,0.0f);
    
    //triangulo superior
    glColor3f(1,1,0);		
     glVertex3f(-0.2f,0.2f,0.0f);
     glColor3f(1,1,0);
    glVertex3f(0.0f,0.4f,0.0f);
    glColor3f(1,1,0);
    glVertex3f(0.2f,0.2f,0.0f);
    
    //triangulo derecho
    glColor3f(0,1,0);
     glVertex3f(0.2f,0.2f,0.0f);
     glColor3f(0,1,0);
    glVertex3f(0.5f,0.0f,0.0f);
    glColor3f(0,1,0);
    glVertex3f(0.2f,-0.2f,0.0f);
    
    //triangulo inferior
    glColor3f(1,0,0);
      glVertex3f(0.2f,-0.2f,0.0f);
      glColor3f(1,0,0);
      glVertex3f(-0.2f,-0.2f,0.0f);
      glColor3f(1,0,0);
     glVertex3f(0.0f,-0.4f,0.0f);
    
    glEnd();
    
    glBegin(GL_LINES);
     GLfloat x=-0.0f;
    GLdouble y=0.0f;
    glColor3f(0,1,1);
    for (x=-0.2f;x<=0.2f;x=x+0.001f){
		GLdouble e=0;
		e=0.04f-(x*x);
		y= sqrt(e);
		glVertex3f(x,0.0f,0.0f);
		glVertex3f(x,y,0.0f);
   }
   for (x=-0.2f;x<=0.2f;x=x+0.001f){
		GLdouble e=0;
		e=0.04f-(x*x);
		y= sqrt(e);
		glVertex3f(x,0.0f,0.0f);
		glVertex3f(x,-y,0.0f);
	}
    glEnd();
    glFlush ();
}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0); 
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (3, 3);		
    glutCreateWindow ("dibujo");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
