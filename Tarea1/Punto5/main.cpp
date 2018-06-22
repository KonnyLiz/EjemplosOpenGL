#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>	

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);
    glBegin(GL_POINTS);
      GLfloat x=0.0f;
      GLdouble y=0.0; 
    glColor3f(1,1,1);
      for (x=-1.0f;x<=1.0f;x=x+0.05f){
		  y=sin(2*x);
		 glVertex3f(x,y,0.0f);
	}
	glColor3f(1,0,1);
     for (x=-1.0f;x<=1.0f;x=x+0.05f){
		  y=cos(2*x);
		 glVertex3f(x,y,0.0f);
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
    glutInitWindowSize (1100,600);
    glutInitWindowPosition (3, 3);		
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
