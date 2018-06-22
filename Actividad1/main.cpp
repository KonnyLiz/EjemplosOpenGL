#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(10.0);
    glBegin(GL_QUADS);
   //quads
    glColor3f(1,0,0);
    glVertex3f(0.25,0.25,0);
   glColor3f(1,1,0);
    glVertex3f(-0.5,0.25,0);
    glColor3f(1,1,1);
    glVertex3f(-0.5,-0.25,0);
    glColor3f(1,0,1);
    glVertex3f(0.25,-0.25,0);
   
   
    //Triangle Fan
    // glColor3f(1,0,0);
    //glVertex2f(0,0.5);
     //glColor3f(0,1,0);
     //glVertex2f(-0.4,0);
      //glColor3f(0,0,1);
      //glVertex2f(0.5,0);
       //glColor3f(1,0,1);
       //glVertex3f(0,1,0);
        //glColor3f(1,1,1);
        //glVertex2f(0,-0.5);
        
        //triangle strip
    //glColor3f(1,0,0);
    //glVertex2f(0,0.75);
    //glColor3f(0,1,0);
    //glVertex2f(-0.5,0.25);
    //glColor3f(0,0,1);
    //glVertex2f(0.5,-0.25);
    //glColor3f(1,0,1);
    //glVertex2f(-0.5,-0.5);
    //glColor3f(1,1,1);
    //glVertex2f(0.5,-0.5);
      
      //Lines strip y line loop    
    //glColor3f(1,0,0);
    //glVertex3f(0.0f,0.0f,0.0f);
    //glColor3f(0,1,0);
    //glVertex3f(0.5f,0.5f,0.0f);
    //glColor3f(0,0,1);
    //glVertex3f(0.5f,0.0f,0.0f);
    //glVertex3f(1.0f,-0.5f,0.0f);
    //glVertex3f(1.0f,-0.5f,0.0f);

    glEnd();
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1, 1, -1, 1, -1, 1);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (550, 550);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
