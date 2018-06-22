#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void Punto(int x, int y, int size, float r, float g, float b){
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(size);
	 glColor3f(r,g,b);
	 glBegin(GL_POINTS);
    glVertex3f(x,y,0.0f); 

    glEnd();
    glFlush ();
}
void Linea(float x, float y, float x1, float y1, float r, float g, float b){
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(r,g,b);
	 glBegin(GL_LINES);
    glVertex3f(x,y,0.0f); 
	glVertex3f(x1,y1,0.0f);
    glEnd();
    glFlush ();
}

void triangulo1(float x1, float y1, float x2, float y2,float x3, float y3,float x4, float y4, float r, float g, float b){
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(r,g,b);
	 glBegin(GL_LINE_STRIP); 
	glVertex3f(x1,y1,0.0f);
	glVertex3f(x2,y2,0.0f);
	glVertex3f(x3,y3,0.0f);
	glVertex3f(x4,y4,0.0f);
    glEnd();
    glFlush ();
}

void cuadro(float x1, float y1, float x2, float y2,float x3, float y3,float x4, float y4, float r, float g, float b){
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(r,g,b);
	 glBegin(GL_LINE_LOOP); 
	glVertex3f(x1,y1,0.0f);
	glVertex3f(x2,y2,0.0f);
	glVertex3f(x3,y3,0.0f);
	glVertex3f(x4,y4,0.0f);
    glEnd();
    glFlush ();
}

void triangulo2(float x1, float y1, float x2, float y2,float x3, float y3, float r, float g, float b){
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(r,g,b);
	 glBegin(GL_TRIANGLES); 
	glVertex3f(x1,y1,0.0f);
	glVertex3f(x2,y2,0.0f);
	glVertex3f(x3,y3,0.0f);
    glEnd();
    glFlush ();
}
void triangulo3(float x1, float y1, float x2, float y2,float x3, float y3, float x4, float y4, float r, float g, float b){
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(r,g,b);
	 glBegin(GL_TRIANGLE_STRIP); 
	glVertex3f(x1,y1,0.0f);
	glVertex3f(x2,y2,0.0f);
	glColor3f(r,4.3,b);
	glVertex3f(x3,y3,0.0f);
	glVertex3f(x4,y4,0.0f);
    glEnd();
    glFlush ();
}

void triangulo4(float x1, float y1, float x2, float y2,float x3, float y3, float x4, float y4, float r, float g, float b){
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(r,g,b);
	 glBegin(GL_TRIANGLE_STRIP); 
	glVertex3f(x1,y1,0.0f);
	glVertex3f(x2,y2,0.0f);
	glColor3f(3,4.3,b);
	glVertex3f(x3,y3,0.0f);
	glVertex3f(x4,y4,0.0f);
    glEnd();
    glFlush ();
}
void cuadro2(float x1, float y1, float x2, float y2,float x3, float y3,float x4, float y4, float r, float g, float b){
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(r,g,b);
	 glBegin(GL_QUADS); 
	glVertex3f(x1,y1,0.0f);
	glVertex3f(x2,y2,0.0f);
	glVertex3f(x3,y3,0.0f);
	glVertex3f(x4,y4,0.0f);
    glEnd();
    glFlush ();
}

void octagono(float x1, float y1, float x2, float y2,float x3, float y3,float x4, float y4,float x5, float y5,float x6, float y6,float x7, float y7,float x8, float y8, float r, float g, float b){
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(r,g,b);
	 glBegin(GL_POLYGON); 
	glVertex3f(x1,y1,0.0f);
	glVertex3f(x2,y2,0.0f);
	glVertex3f(x3,y3,0.0f);
	glVertex3f(x4,y4,0.0f);
	glVertex3f(x5,y5,0.0f);
	glVertex3f(x6,y6,0.0f);
	glVertex3f(x7,y7,0.0f);
	glVertex3f(x8,y8,0.0f);
    glEnd();
    glFlush ();
}

void circulo(float radio, float x0, float y0, float r, float g, float b){
	glClear(GL_COLOR_BUFFER_BIT); 
	glColor3f(r,g,b);
    glBegin(GL_POLYGON);
    GLfloat x, y;
    for (float i=0;i<=10;i=i+0.001){ 
		x=radio*cos(i)+x0;
		y=radio*sin(i)+y0;
		glVertex3f(x,y,0.0f);
   }
    glEnd();
    glFlush ();
}

//void display(void)
//{
	
   // glPointSize(50);
    //glBegin(GL_POINTS);
    //glVertex3f(0.5f,0.5f,0.0f);
    //glVertex3f(-0.5f,-0.5f,0.0f);
    //glVertex3f(0.10f,0.4f,0.0f);
    //glVertex3f(-0.10f,-0.4f,0.0f);
    //glEnd();
    //glFlush ();
    //}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 10.0, -1.0, 10.0, -1.0, 1.0);
}

void keyboard(unsigned char key, int x, int y)
{
    //control de teclas que hacen referencia a Escalar y transladar el cubo en los ejes X,Y,Z.
    switch (key)
    {
    case '1'://dibuja un punto
        Punto(5,5,20,1.0,0.0,1.0); 
        break;
    case '2'://dibujar linea simple
        Linea(0.0,4.0,9.0,7.0,0.0,1.0,1.0); 
        break;
    case '3'://dibujar triangulo con line strip
        triangulo1(2.0,1.0,2.0,6.0,7.0,1.0,2.0,1.0,1.0,0.0,1.0); 
        break;
    case '4'://dibujar cuadro con line loop
        cuadro(2.0,1.0,2.0,4.0,8.0,4.0,8.0,1.0,0.90,0.0,1.0); 
        break;
    case '5'://dibujar triangulo con triangles
        triangulo2(2.5,3.0,7,6,8,1.5,0.0,1.0,1.0); 
        break;
    case '6'://dibujar triangulos con triangles_strip
        triangulo3(2.5,2,4.5,4.5,5.5,1.5,7,5.5,0.0,0.96,1.0); 
        break;
    case '7'://dibujar triangulos con triangles_fan
        triangulo4(5.5,4,7,1,8.5,3.5,7.5,6.5,0.0,3.0,1.0); 
        break;
    case '8'://dibujar cuadrado con QUADS
        cuadro2(1,2,1,8,7,8,7,2,0.0,0.0,1.0); 
        break;
    case '9'://dibujar octagono con polygon
        octagono(3.5,7,5.5,7,7.5,5,7.5,3,5.5,1,3.5,1,1.5,3,1.5,5,1.0,0.0,1.0); 
        break;
    case 'a'://dibujar circulo con polygon
        circulo(2.0,3.0,5.0,0.60,0.40,0.12);
         break;
    case 's':
        exit(0);	
        break;		// exit
    }
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    //glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}
