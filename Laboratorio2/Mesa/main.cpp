//**** MESA
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

GLfloat light_position[] = { 0,19,6,3};
GLfloat mat_ambient[] = { 0.24725f, 0.1995f, 0.0745f, 1.0f };
    GLfloat mat_diffuse[] = { 0.75164f, 0.60648f, 0.22648f, 1.0f };
    GLfloat mat_specular[] = { 0.628281f, 0.555802f, 0.366065f, 1.0f };
    GLfloat mat_shininess[] = { 0.4f };
/*
void ejes(){
    //EjesDeReferencia
    glBegin (GL_LINES);
    glColor3f(1.0,0.0,0.0);
    glVertex3f (-800.0, 0.0, 0.0);
    glVertex3f (800.0, 0.0, 0.0);
    glColor3f(0.0,1.0,0.0);
    glVertex3f ( 0.0, -600.0, 0.0);
    glVertex3f ( 0.0,600.0, 0.0);
    glColor3f(1.0,1.0,1.0);
    glVertex3f ( 0.0, 0.0, -800.0);
    glVertex3f ( 0.0, 0.0,800.0);
    glEnd();
}*/


void patas(float x , float z){
    float con = 0;
    for(int p = 0; p<10; p++ ){
        glPushMatrix();
        glTranslatef(x,0.05+con,z);
        glutSolidCube(0.05);
        glPopMatrix();
        con+=0.05;
    }
}
void mesita(){
    float conx = 0, conz=0;
    for(int p = 0; p<30; p++ ){
        conx=0;
        for (int i = 0; i < 21; ++i)
        {
            glPushMatrix();
            glTranslatef(0.25+conx,.5,0.2+conz);
            glutSolidCube(0.05);
            glPopMatrix();
            conx+=0.05;  
        }
       conz+=0.05;
    }
}

void display(void){
   
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode( GL_MODELVIEW_MATRIX );

    glLoadIdentity();
	//ejes();
	
	 glLightfv(GL_LIGHT0,GL_POSITION,light_position); //configurando posicion de la luz
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glDepthFunc(GL_LESS);
    glEnable(GL_DEPTH_TEST);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); 
    glShadeModel(GL_SMOOTH);
    
     glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
     glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
     glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
     glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	 glScalef(1,1,1);
    glRotatef(35,1,0,0);
    glRotatef(-45,0,1,0);
    glColor3f(1,0,1);
    
	glBegin(GL_POLYGON);
    glVertex3f(0,0,0);
    glVertex3f(0,0,3);
    glVertex3f(0,3,3);
    glVertex3f(0,3,0);
    glEnd();
    
    //atras
    glBegin(GL_POLYGON);
    glVertex3f(0,0,0);
    glVertex3f(3,0,0);
    glVertex3f(3,3,0);
    glVertex3f(0,3,0);
    glEnd();
    
    //ABAJO
     glBegin(GL_POLYGON);
    glVertex3f(0,0,0);
    glVertex3f(3,0,0);
    glVertex3f(3,0,3);
    glVertex3f(0,0,3);
    glEnd();
    
    //teapot
    glPushMatrix();
    glTranslatef(1,0.7,0.75);
    glutSolidTeapot(0.2);
    glPopMatrix();

    //******mesa******
    //patas
    patas(0.5,0.2);//fondo
    patas(0.25,1.6); //izquierda
    patas(1.25,0.2);//frente
    patas(1.25,1.6);//derecha
    
    //mesa
    mesita();
    glutPostRedisplay();
    glutSwapBuffers();
	glFlush();
}

void reshape(int w, int h){
    glViewport(0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
     glOrtho(-5, 5, -5, 5, -5, 5);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void redraw( void ){
    glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (800, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow("Mesa con Teapot");
    glEnable(GL_DEPTH_TEST);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;

}
