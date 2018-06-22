#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>

int id_menu[11]; 

//METODOS QUE PERMITE IMPRIMIR LA IMAGEN A MOSTRAR
void punto(float x, float y){
	glClear (GL_COLOR_BUFFER_BIT);
	glPointSize(5.0f);
	glBegin(GL_POINTS);
    glVertex2f(x,y);
    glEnd();
}

void Linea(float x, float y, float x1, float y1, float r, float g, float b){
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(r,g,b);
	 glBegin(GL_LINES);
    glVertex3f(x,y,0.0f); 
	glVertex3f(x1,y1,0.0f);
    glEnd();
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

void menu(int opc){
    id_menu[1]=opc; // En el vector VF, en su campo 1, se almacenara el id de la imagen
    glClear (GL_COLOR_BUFFER_BIT);
    switch(opc){ // checando la imagen elegida para mostrar
       case 1:
           punto(0,0);
           break;
       case 2://dibujar linea simple
        Linea(-0.6,-0.6,0.6,0.6,0.0,1.0,1.0); 
        break;
    case 3://dibujar triangulo con line strip
        triangulo1(-0.5,-0.6,-0.5,0.6,0.7,-0.6,-0.5,-0.6,1.0,0.0,1.0); 
        break;
    case 4://dibujar cuadro con line loop
        cuadro(-0.8,-0.8,0.8,-0.8,0.8,0.8,-0.8,0.8,0.90,0.0,1.0); 
        break;
    case 5://dibujar triangulo con triangles
        triangulo2(-0.55,-0.8,0.8,-0.1,-0.5,0.5,0.0,1.0,1.0); 
        break;
    case 6://dibujar triangulos con triangles_strip
        triangulo3(-0.55,-0.8,0.8,-0.1,-0.5,0.5,-0.75,-0.25,1.0,0.09,0.0);
        break;
    case 7://dibujar triangulos con triangles_fan
        triangulo4(-0.75,-0.4,0.3,-0.1,-0.5,0.5,0.6,-0.7,0.34,0.0,1.0); 
        break;
    case 8://dibujar rombo con QUADS
        cuadro2(0,-0.7,0.7,0.0,0.0,0.7,-0.7,0.0,1.0,0.0,1.0); 
        break;
    case 9://dibujar octagono con polygon
        octagono(0.15,-0.45,0.45,-0.15,0.45,0.15,0.15,0.45,-0.15,0.45,-0.45,0.15,-0.45,-0.15,-0.15,-0.45,0.0,1.0,1.0); 
        break;
    case 10://dibujar circulo con polygon
        circulo(0.50,0.0,0.0,0.60,0.40,0.12);
         break;
       case 11:
		exit(0);
   }
   glutPostRedisplay();
   glFlush();
}

// METODO QUE RE DIBUJA LA PANTALLA
void redraw( void ){
    glClear(GL_COLOR_BUFFER_BIT);
    menu(id_menu[1]);
	glutSwapBuffers();
}

int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1, 1, -1, 1, -1, 1); 
     glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow("Tarea Menu");
    // CREACION DEL MENU PARA ELEGIR ALGUNA IMAGEN
    glutCreateMenu(menu);
      glutAddMenuEntry("Punto POINTS",1);
      glutAddMenuEntry("Linea LINES",2);
      glutAddMenuEntry("Triangulo LINES STRIP",3);
      glutAddMenuEntry("Cuadro LINES LOOP",4);
      glutAddMenuEntry("Triangulo TRIANGLES",5);
      glutAddMenuEntry("Triangulo TRIANGLE STRIP",6);
      glutAddMenuEntry("Triangulo TRIANGLES FAN",7);
      glutAddMenuEntry("Rombo QUADS",8);
      glutAddMenuEntry("Octagono POLYGON",9);
      glutAddMenuEntry("Circulo POLYGON",10);
      glutAddMenuEntry("SALIR",11);
      glutAttachMenu(GLUT_RIGHT_BUTTON); // Eligiendo con el click derecho del raton
	  glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
	  glutDisplayFunc(redraw);
	  glutIdleFunc(redraw);
    glutMainLoop();
    return 0;
}
