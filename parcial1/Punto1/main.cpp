#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>	
GLfloat yini=10.0f,xini=-13.0f;
GLfloat coo,pi=0.0f,y,x,radio=0.5f;
void poli(float x1,float y1,float x2, float y2,float x3,float y3,float x4,float y4, float c1, float c2, float c3){

	glBegin(GL_POLYGON);
         glColor3f(c1,c2,c3);
            glVertex3f(x1,y1,0.0);      //punto 1
            glVertex3f(x2,y2,0.0);      //punto 2
            glVertex3f(x3,y3,0.0);  //punto3
            glVertex3f(x4,y4,0.0);  //punto4
    glEnd();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);
    //BASE
    
    glBegin(GL_LINES);//cesped
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0,2,0.0f);
    glVertex3f(21,2,0.0f);
    glEnd();
    
    glBegin(GL_POLYGON);//estructura principal
    glColor3f(0.60,0.40,0.70);
	glVertex3f(10,2,0.0f);
	glVertex3f(11,1.9,0.0f);
	glVertex3f(12,1.6,0.0f);
	glVertex3f(13,1.3,0.0f);
	glVertex3f(14,1.35,0.0f);
	glVertex3f(15,1.3,0.0f);
	glVertex3f(16,1.6,0.0f);
	glVertex3f(17,1.9,0.0f);
	glVertex3f(18,2,0.0f);
	glVertex3f(17,13,0.0f);
	glVertex3f(11,13,0.0f);
    glEnd();
    
     glBegin(GL_QUADS); //puerta
     glColor3f(0.0,0.0,0.0);
     glVertex3f(16,1.6,0.0f);
     glVertex3f(17,1.9,0.0f);
     glVertex3f(17,3,0.0f);
     glVertex3f(16,2.9,0.0f);
      glEnd();
      
       glBegin(GL_POLYGON); //ventanita
     glColor3f(1.0,1.0,0.0);
     glVertex3f(16,10,0.0f);
     glVertex3f(15.9,11,0.0f);
     glVertex3f(15.6,11.2,0.0f);
     glVertex3f(15.3,11.2,0.0f);
     glVertex3f(15.1,11,0.0f);
     glVertex3f(15,10,0.0f);
      glEnd();
      
       glBegin(GL_TRIANGLES); //tejado
     glColor3f(1.0,0.0,0.0);
     glVertex3f(18,13,0.0f);
     glVertex3f(14,17,0.0f);
     glVertex3f(10,13,0.0f);
      glEnd();
      
      glBegin(GL_POLYGON); //salida de las aspas
     glColor3f(1.0,1.0,0.0);
     glVertex3f(13,13,0.0f);
     glVertex3f(13,13.9,0.0f);
     glVertex3f(12.5,14,0.0f);
     glVertex3f(12,13.9,0.0f);
     glVertex3f(12,13,0.0f);
      glEnd();
     
     //madera
     poli(6.0,13.0,6.0,12.0,7.0,12.0,7.0,13.0,0.60,0.40,0.12);//centro
     poli(7.0,13.0,7.0,12.0,12.0,13.0,12.0,13.9,0.60,0.40,0.12);//centro
     poli(7.5,13.0,8.5,14.5,9.0,14.0,8.0,13.0,0.60,0.40,0.12);//superior derecha
     poli(7.5,13.0,6.5,14.5,6.0,14.0,7.0,13.0,0.60,0.40,0.12);//superior izquierda
     poli(7.0,12.5,5.0,9.0,6.0,10.0,7.5,12.5,0.60,0.40,0.12);//inferior izquierda
     poli(8.0,12.5,9.0,11.0,8.5,10.5,7.5,12.5,0.60,0.40,0.12);//inferior derecha
     
      //aspas    
    poli(7.8,15.0,11.0,20.0,14.2,17.9,9.5,13.5,0.25,0.25,0.25);//superior derecha
    poli(1.0,17.0,3.50,19.5,7.0,15.0,5.0,13.0,0.25,0.25,0.25);//superior izquierda
    poli(0.50,7.50,5.0,11.5,7.0,10.0,3.0,5.0,0.25,0.25,0.25);//inferior izquierda
    poli(8.0,10.0,9.50,11.5,14.5,7.5,12.0,5.0,0.25,0.25,0.25);//inferior derecha
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 22.0, -1.0, 22.0, -1.0, 1.0); 
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
