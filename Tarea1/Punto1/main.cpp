#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>	

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);
    glBegin(GL_POINTS);
   
    GLdouble x, y;
    for (float i=0;i<=6.3;i=i+0.084){ 
		
		x=0.5*cos(i);
		y=0.5*sin(i);
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
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (3, 3);		
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
