#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>


//Definimos variables
double rotate_y=0;
double rotate_x=0;
double rotate_z=0;
GLfloat asbar =0.0f;
GLfloat X = 0.0f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;
GLfloat scale = 1.0f;
GLfloat arriba = 0.0f;
int a = 0, b=0;
GLfloat co = 0.0f;
void display()
{
// Borrar pantalla y Z-buffer
   glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

// Resetear transformaciones
   glLoadIdentity();
   gluLookAt(0.5,-0.10,0.4, //punto de vista en el eje X,Y,Z
             0.2,0.0,0.0, //Centro del Objeto en el eje X,Y,Z
             0.0,1.0,0.0); //Orientación de la cámara (vector UP el eje X,Y,Z)
        
//mastil
    glBegin(GL_POLYGON);
    glColor3f( 1.0, 1.0, 1.0 );
    glVertex3f( 0.0, -0.1, -0.05 );      // V1 Blanco
    glColor3f( 1.0, 1.0, 0.0 );
    glVertex3f( 0.1,  -0.1, -0.05 );      // V2 Amarillo
    glColor3f( 0.0, 0.0, 1.0 );
    glVertex3f( 0.1,  -0.6, -0.05 );      // V3 es azul
    glColor3f( 1.0, 0.0, 0.0 );
    glVertex3f( 0.0, -0.6, -0.05 );      // V4 rojo

    glEnd();

    // LADO TRASERO: lado blanco
    glBegin(GL_POLYGON);
    glColor3f( 1.0,  1.0, 1.0 );
    glVertex3f( 0.0, -0.1, 0.05 );
    glVertex3f( 0.1,  -0.1, 0.05 );
    glVertex3f( 0.1,  -0.6, 0.05 );
    glVertex3f( 0.0, -0.6, 0.05 );
    glEnd();

    // LADO DERECHO: lado verde
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  1.0,  0.0 );
    glVertex3f(0.1, -0.1, -0.05 );
    glVertex3f(0.1, -0.6, -0.05 );
    glVertex3f(0.1,  -0.6,  0.05 );
    glVertex3f(0.1, -0.1,  0.05 );
    glEnd();

    // LADO IZQUIERDO: lado Amarillo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,  0.0 );
    glVertex3f(0.0, -0.1,  0.05 );
    glVertex3f(0.0,  -0.6,  0.05 );
    glVertex3f(0.0,  -0.6, -0.05 );
    glVertex3f(0.0, -0.1, -0.05 );
    glEnd();

    // LADO SUPERIOR: lado azul
    glBegin(GL_POLYGON);
    glColor3f(0.0,  0.0,  1.0 );
    glVertex3f(0.0,  -0.1,  0.05 );
    glVertex3f(0.0,  -0.1, -0.05 );
    glVertex3f(0.1,  -0.1, -0.05 );
    glVertex3f(0.1,  -0.1,  0.05 );
    glEnd();

    // LADO INFERIOR: lado rojo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(0.1, -0.3, -0.05);
    glVertex3f(0.1, -0.3,  0.05 );
    glVertex3f(0.0, -0.3,  0.05 );
    glVertex3f(0.0, -0.3, -0.05 );
    glEnd();
    
    //BASE
    
    glBegin(GL_POLYGON);

    glColor3f( 1.0, 1.0, 1.0 );
    glVertex3f( - 0.1, -0.6, -0.1 );      // V1 Blanco
    glVertex3f(  0.2,  -0.6, -0.1 );      
    glVertex3f(  0.2,  -0.9, -0.1 );      
    glVertex3f( -0.1, -0.9, -0.1 );      

    glEnd();

    // LADO TRASERO: lado blanco
    glBegin(GL_POLYGON);
    glColor3f( 1.0,  1.0, 1.0 );
    glVertex3f( - 0.1, -0.6, 0.1 ); 
    glVertex3f(  0.2,  -0.6, 0.1 );      
    glVertex3f(  0.2,  -0.9, 0.1 );      
    glVertex3f( -0.1, -0.9, 0.1 ); 
    glEnd();

    // LADO DERECHO: lado verde
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  1.0,  0.0 );
    glVertex3f( 0.2,  -0.6, -0.1  );
    glVertex3f( 0.2,  -0.9, -0.1  );
    glVertex3f(0.2,  -0.9, 0.1 );
    glVertex3f(0.2,  -0.6, 0.1  );
    glEnd();

    // LADO IZQUIERDO: lado Amarillo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,  0.0 );
    glVertex3f(- 0.1, -0.6, 0.1 );
    glVertex3f( -0.1, -0.9, 0.1 );
    glVertex3f( -0.1, -0.9, -0.1 );
    glVertex3f(- 0.1, -0.6, -0.1 );
    glEnd();

    // LADO SUPERIOR: lado azul
    glBegin(GL_POLYGON);
    glColor3f(0.0,  0.0,  1.0 );
    glVertex3f(-0.1, -0.6, 0.1  );
    glVertex3f(-0.1, -0.6, -0.1 );
    glVertex3f(0.2, -0.6, -0.1 );
    glVertex3f(0.2, -0.6, 0.1 );
    glEnd();

    // LADO INFERIOR: lado rojo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(-0.1, -0.9, 0.1  );
    glVertex3f(-0.1, -0.9, -0.1 );
    glVertex3f(0.2, -0.9, -0.1 );
    glVertex3f(0.2, -0.9, 0.1 );
    glEnd();
     
    //cuadros
    
 //Cubo 0
 
 glBegin(GL_POLYGON);

    glColor3f( 1.0, 1.0, 1.0 );
    glVertex3f(  0.4, -0.6, -0.1 );      // V1 Blanco
    glVertex3f(  0.7,  -0.6, -0.1 );      
    glVertex3f(  0.7,  -0.9, -0.1 );      
    glVertex3f(  0.4, -0.9, -0.1 );      

    glEnd();

    // LADO TRASERO: lado blanco
    glBegin(GL_POLYGON);
    glColor3f( 1.0,  1.0, 1.0 );
    glVertex3f(  0.4, -0.6, 0.1 ); 
    glVertex3f(  0.7,  -0.6, 0.1 );      
    glVertex3f(  0.7,  -0.9, 0.1 );      
    glVertex3f(  0.4, -0.9, 0.1 ); 
    glEnd();

    // LADO DERECHO: lado verde
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  1.0,  0.0 );
    glVertex3f( 0.7,  -0.6, -0.1  );
    glVertex3f( 0.7,  -0.9, -0.1  );
    glVertex3f(0.7,  -0.9, 0.1 );
    glVertex3f(0.7,  -0.6, 0.1  );
    glEnd();

    // LADO IZQUIERDO: lado Amarillo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,  0.0 );
    glVertex3f( 0.4, -0.6, 0.1 );
    glVertex3f( 0.4, -0.9, 0.1 );
    glVertex3f( 0.4, -0.9, -0.1 );
    glVertex3f( 0.4, -0.6, -0.1 );
    glEnd();

    // LADO SUPERIOR: lado azul
    glBegin(GL_POLYGON);
    glColor3f(0.0,  0.0,  1.0 );
    glVertex3f(0.4, -0.6, 0.1  );
    glVertex3f(0.4, -0.6, -0.1 );
    glVertex3f(0.7, -0.6, -0.1 );
    glVertex3f(0.7, -0.6, 0.1 );
    glEnd();

    // LADO INFERIOR: lado rojo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(0.4, -0.9, 0.1  );
    glVertex3f(0.4, -0.9, -0.1 );
    glVertex3f(0.7, -0.9, -0.1 );
    glVertex3f(0.7, -0.9, 0.1 );
    glEnd();
    //cubo 1
    glShadeModel(GL_SMOOTH);
    glBegin(GL_POLYGON);
    glColor3f( 1.0, 1.0, 1.0 );
    glVertex3f( - 0.1, -0.6,0.7 );      // V1 Blanco
    glVertex3f(  0.2,  -0.6,0.7 );      
    glVertex3f(  0.2,  -0.9,0.7 );      
    glVertex3f( -0.1, -0.9, 0.7 );      
    glEnd();
  glShadeModel(GL_SMOOTH);
    // LADO TRASERO: lado blanco
    glBegin(GL_POLYGON);
    glColor3f( 1.0,  1.0, 1.0 );
    glVertex3f( - 0.1, -0.6, 0.4 ); 
    glVertex3f(  0.2,  -0.6, 0.4 );      
    glVertex3f(  0.2,  -0.9, 0.4 );      
    glVertex3f( -0.1, -0.9,  0.4 ); 
    glEnd();

    // LADO DERECHO: lado verde
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  1.0,  1.0 );
    glVertex3f( 0.2,  -0.6, 0.7  );
    glVertex3f( 0.2,  -0.9, 0.7  );
    glVertex3f(0.2,  -0.9, 0.4 );
    glVertex3f(0.2,  -0.6, 0.4  );
    glEnd();

    // LADO IZQUIERDO: lado Amarillo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  co,  0.0 );
    glVertex3f(- 0.1, -0.6, 0.4 );
    glVertex3f( -0.1, -0.9, 0.4 );
    glVertex3f( -0.1, -0.9, 0.7 );
    glVertex3f(- 0.1, -0.6, 0.7 );
    glEnd();

    // LADO SUPERIOR: lado azul
    glBegin(GL_POLYGON);
    //glColor3f(0.0,  co,  1.0 );
    glVertex3f(-0.1, -0.6, 0.4 );
    glVertex3f(-0.1, -0.6, 0.7 );
    glVertex3f(0.2, -0.6,  0.7 );
    glVertex3f(0.2, -0.6,  0.4 );
    glEnd();

    // LADO INFERIOR: lado rojo
    glBegin(GL_POLYGON);
    //glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(-0.1, -0.9, 0.4  );
    glVertex3f(-0.1, -0.9, 0.7 );
    glVertex3f(0.2, -0.9,  0.7);
    glVertex3f(0.2, -0.9,  0.4 );
    glEnd();
       
    //parte HORIZONTAL
    // Rotar en el eje X,Y y Z
    glRotatef( rotate_x, 5.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 10.0, 0.0 );
    glRotatef( rotate_z, 0.0, 0.0, 1.0 );
    // Otras transformaciones
    glScalef(scale, scale, scale);
    // Primera cara, se identica por multiples colores
    glBegin(GL_POLYGON);
    glColor3f( 1.0, 0.0, 0.0 );
    glVertex3f(  0.5, -0.1, -0.1 );      // V1 Blanco
    glVertex3f(  0.5,  0.1, -0.1 );      // V2 Amarillo
    glVertex3f( -0.1,  0.1, -0.1 );      // V3 es azul
    glVertex3f( -0.1, -0.1, -0.1 );      // V4 rojo
    glEnd();
    // LADO TRASERO: lado blanco
    glBegin(GL_POLYGON);
    glColor3f( 1.0,  1.0, 1.0 );
    glVertex3f( 0.5, -0.1, 0.1 );
    glVertex3f( 0.5,  0.1, 0.1 );
    glVertex3f(-0.1,  0.1, 0.1 );
    glVertex3f(-0.1, -0.1, 0.1 );
    glEnd();
    // LADO DERECHO: lado verde
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  1.0,  0.0 );
    glVertex3f(0.5, -0.4, -0.1 );
    glVertex3f(0.5,  0.1, -0.1 );
    glVertex3f(0.5,  0.1,  0.1 );
    glVertex3f(0.5, -0.4,  0.1 );
    glEnd();

    // LADO IZQUIERDO: lado Amarillo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,  0.0 );
    glVertex3f(-0.1, -0.1,  0.1 );
    glVertex3f(-0.1,  0.1,  0.1 );
    glVertex3f(-0.1,  0.1, -0.1 );
    glVertex3f(-0.1, -0.1, -0.1 );
    glEnd();
    // LADO SUPERIOR: lado azul
    glBegin(GL_POLYGON);
    glColor3f(0.0,  0.0,  1.0 );
    glVertex3f(0.6,  0.1,  0.1 );
    glVertex3f(0.6,  0.1, -0.1 );
    glVertex3f(-0.1,  0.1, -0.1 );
    glVertex3f(-0.1,  0.1,  0.1 );
    glEnd();
    // LADO INFERIOR: lado rojo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(0.5, -0.1, -0.1 );
    glVertex3f(0.5, -0.1,  0.1 );
    glVertex3f(-0.1, -0.1,  0.1 );
    glVertex3f(-0.1, -0.1, -0.1 );
    glEnd();
    
    //grua vertical
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(0.5, 0.1, -0.1 );
    glVertex3f(0.6, 0.1,  -0.1 );
    glVertex3f(0.6, -0.4,  -0.1);
    glVertex3f(0.5, -0.4, -0.1 );
    glEnd();
    //trasera morada
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  1.0 );
    glVertex3f(0.5, 0.1, 0.1 );
    glVertex3f(0.6, 0.1,  0.1 );
    glVertex3f(0.6, -0.4,  0.1);
    glVertex3f(0.5, -0.4, 0.1 );
    glEnd();
    //lateral verde
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  1.0,  0.0 );
    glVertex3f(0.6, -0.4, -0.1 );
    glVertex3f(0.6,  0.1, -0.1 );
    glVertex3f(0.6,  0.1,  0.1 );
    glVertex3f(0.6, -0.4,  0.1 );
    glEnd();
    
    // LADO INFERIOR: lado rojo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(0.5, -0.4, -0.1 );
    glVertex3f(0.6, -0.4,  0.1 );
    glVertex3f(0.6, -0.4,  0.1 );
    glVertex3f(0.5, -0.4, -0.1 );
    glEnd();
    // Transladar en los 3 ejes 
    glTranslatef(X, Y, Z);
         
   // CUERDA
    glBegin(GL_POLYGON);
    glColor3f(0.98,  0.04,  0.7 );//frontal rojo
    glVertex3f(0.525, 0.1, -0.025 );
    glVertex3f(0.55, 0.1,  -0.025 );
    glVertex3f(0.55, -0.4,  -0.025);
    glVertex3f(0.525, -0.4, -0.025 );
    glEnd();
    //parte trasera morada
    glBegin(GL_POLYGON);
    glColor3f(0.98,  0.04,  0.7 );
    glVertex3f(0.525, 0.1, 0.025 );
    glVertex3f(0.55, 0.1,  0.025 );
    glVertex3f(0.55, -0.4,  0.025);
    glVertex3f(0.525, -0.4, 0.025 );
    glEnd();
    //Lateral derecho verde
    glBegin(GL_POLYGON);
    glColor3f( 0.98,  0.04,  0.7 );
    glVertex3f(0.55, -0.4, -0.025 );
    glVertex3f(0.55,  0.1, -0.025 );
    glVertex3f(0.55,  0.1,  0.025 );
    glVertex3f(0.55, -0.4,  0.025 );
    glEnd();
    //LAteral izquierdo blanco
     glBegin(GL_POLYGON);
    glColor3f( 0.98,  0.04,  0.7 );
    glVertex3f(0.525, -0.4, -0.025 );
    glVertex3f(0.525,  0.1, -0.025 );
    glVertex3f(0.525,  0.1,  0.025 );
    glVertex3f(0.525, -0.4,  0.025 );
    glEnd();
 
    glFlush();
    glutSwapBuffers();
}

// Función para controlar teclas especiales
void specialKeys( int key, int x, int y )
{

    //  Flecha derecha: aumentar rotación 7 grados
    if (key == GLUT_KEY_RIGHT){

        rotate_y += -5;
        a++;
    }
    //  Flecha izquierda: rotación en eje Y negativo 7 grados
     if (key == GLUT_KEY_LEFT)
      {  rotate_y -= -5;  
    a--;}
    
    
    //  Solicitar actualización de visualización
    glutPostRedisplay();

}

// Función para controlar teclas normales del teclado.
void keyboard(unsigned char key, int x, int y)
{
    //control de teclas que hacen referencia a Escalar y transladar el cubo en los ejes X,Y,Z.
    switch (key)
    {
    case '+' :
        b++;
        Y += 0.025f;

        break;
    case '-' :
        Y -= 0.025f;
        b--;
        if(b<=-10 & a<=20 & a>=15){
            co=0.5;
        }
        break;
    
    case 'q':
        exit(0);            // exit
    }

    glutPostRedisplay();
}

int main(int argc, char* argv[])
{
    //  Inicializar los parámetros GLUT y de usuario proceso
    glutInit(&argc,argv);
    // Solicitar ventana con color real y doble buffer con Z-buffer
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (0, 0);
    // Crear ventana
    glutCreateWindow("Cubo controlado por teclas");
    // Habilitar la prueba de profundidad de Z-buffer
    glEnable(GL_DEPTH_TEST);
    // Funciones de retrollamada
    glShadeModel (GL_SMOOTH);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(specialKeys);
    // Pasar el control de eventos a GLUT
    glutMainLoop();
    // Regresar al sistema operativo
    return 0;

}
