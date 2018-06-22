#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>	

float fibo(float n)
{
    if(n == 0 || n == 1)
       return n;
    else
       return fibo(n - 2) + fibo(n - 1);
}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(10);
    glBegin(GL_POINTS);
  
  GLfloat x=0.0f;
  GLfloat n=0.0f;
  glColor3f(1,1,1);
	for (x=0;x<=15;x=x+1){
	 n=fibo(x);
	glVertex3f(x,n,0.0f);
	}
	 glColor3f(1,0,0);
	for (x=0;x<=15;x=x+1){
	 n=fibo(x);
	glVertex3f(-x,-n,0.0f);
	}
    glEnd();
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-15.0, 15.0, -15.0, 15.0, -1.0, 1.0); //se cambio los valores para que se pueda visualizar el 
    //plano completo de -15 a 15 tanto en x como en y
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
