#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);
  
    glBegin(GL_TRIANGLES);
    glColor3f(1,1,0);		
    glVertex3f(0.25f,0.15f,0.0f);
    glVertex3f(0.0f,0.35f,0.0f);
    glVertex3f(-0.25f,0.15f,0.0f);
    
    glColor3f(0,1,1);		
    glVertex3f(0.0f,0.35f,0.0f);
    glVertex3f(-0.25f,0.15f,0.0f);
    glVertex3f(-0.5f,0.35f,0.0f);
    
    glColor3f(0,1,0);		
    glVertex3f(0.4f,0.2f,0.0f);
    glVertex3f(0.4f,-0.2f,0.0f);
    glVertex3f(0.65f,0.0f,0.0f);
    
    glColor3f(1,1,0);		
    glVertex3f(0.25f,-0.15f,0.0f);
    glVertex3f(0.0f,-0.35f,0.0f);
    glVertex3f(-0.25f,-0.15f,0.0f);
    
     glColor3f(0,1,1);		
    glVertex3f(0.0f,-0.35f,0.0f);
    glVertex3f(-0.25f,-0.15f,0.0f);
    glVertex3f(-0.5f,-0.35f,0.0f);
    glEnd();
    
    glBegin(GL_QUADS);
    glColor3f(1,0,1);		
    glVertex3f(-0.5f,0.15f,0.0f);
    glVertex3f(0.4f,0.15f,0.0f);
    glVertex3f(0.4f,-0.15f,0.0f);
    glVertex3f(-0.5f,-0.15f,0.0f);
    
    glColor3f(1,1,1);		
    glVertex3f(-0.6f,0.125f,0.0f); 
    glVertex3f(-0.5f,0.125f,0.0f);
    glVertex3f(-0.5f,0.025f,0.0f);
    glVertex3f(-0.6f,0.025f,0.0f);
  
    glColor3f(1,1,1);		
    glVertex3f(-0.6f,-0.025f,0.0f);
    glVertex3f(-0.5f,-0.025f,0.0f);
    glVertex3f(-0.5f,-0.125f,0.0f);
    glVertex3f(-0.6f,-0.125f,0.0f);
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
