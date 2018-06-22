//PELOTA REBOTANDO

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <SOIL/SOIL.h>


float escala=0.2;
float angX=0.0f,angY=0.0f;
int ResX=800,ResY=600;
enum{EJE=2};
float aceX=0.0f,aceY=-0.001f;
float velX=0.01f,velY=0.0f;
float posX=0.0f,posY=10.0f;
/*//Definición del modelo de una luz
GLfloat light_Ambient [4] = { 0.2, 0.2, 0.2, 1.0};
GLfloat light_Diffuse [4] = { 1.0, 1.0, 1.0, 1.0};
GLfloat light_Position [4] = {20.0, 15.0, 10.0, 1.0};
//Definición de las caracteristicas opticas del material: coeficientes de reflexión
GLfloat material [4] = {1.0f, 0.2f, 0.2f, 1.0f };
GLfloat RedMaterial [4] = {1.0, 0.0, 0.0, 1.0 };
GLfloat GreenMaterial [4] = {0.0, 1.0, 0.0, 1.0 };
GLfloat BlueMaterial [4] = {0.0, 0.0, 1.0, 1.0 };
GLfloat WhiteMaterial [4] = {1.0, 1.0, 1.0, 1.0 };
GLfloat BlackMaterial [4] = {0.0, 0.0, 0.0, 1.0 };
GLfloat GrayMaterial [4] = {0.6, 0.6, 0.6, 1.0 };

void luces(void){
      glEnable (GL_LIGHTING);
      glEnable (GL_LIGHT0);
      glLightfv(GL_LIGHT0, GL_AMBIENT, light_Ambient );
      glLightfv(GL_LIGHT0, GL_DIFFUSE, light_Diffuse );
      glLightfv(GL_LIGHT0, GL_POSITION, light_Position );
}*/

void pelota(){
	
	int width, height;      //tamaños de la imagen
     //carga la imagen
     unsigned char* image =
     SOIL_load_image("p2.jpg", &width, &height, 0, SOIL_LOAD_RGB);
     //la pasa a texturas
     glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, 15, 15, 0, GL_RGB,
                  GL_UNSIGNED_BYTE, image);
    // Indicamos el tipo de filtrado
    glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT );
    glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT );
    glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR );
    glTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR );
    glTexEnvf( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_DECAL);
    
    GLfloat plano_s[4] = {1, 0, 0, 0}; // s=x
    GLfloat plano_t[4] = {0, 1, 0, 0}; // t=y
    glTexGeni (GL_S, GL_TEXTURE_GEN_MODE, GL_OBJECT_LINEAR);
    glTexGenfv (GL_S, GL_OBJECT_PLANE, plano_s);
    glEnable (GL_TEXTURE_GEN_S);
    glTexGeni (GL_T, GL_TEXTURE_GEN_MODE, GL_OBJECT_LINEAR);
    glTexGenfv (GL_T, GL_OBJECT_PLANE, plano_t);
    //---------------------- activamos la texturas
    glEnable(GL_TEXTURE_2D);
    glEnable (GL_TEXTURE_GEN_T);

    glNewList(EJE,GL_COMPILE);
    glPushMatrix();
    //glutSolidTeapot(5.0);
    glutSolidSphere(2.0f,50,50);
    glPopMatrix();
    glEndList();
}
void RenderScene(void){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor( 0.0f, 0.0f, 0.0f, 1.0f );
    //AJUSTANDO LA CÁMARA
    glLoadIdentity( );
    glTranslatef(-0.9f,0.0f,-5.0f);
    glRotatef(angY,1.0f,0.0f,0.0f);
    glRotatef(angX,0.0f,1.0f,0.0f);
    //EJES DE REFERENCIA
    glLineWidth(5);
    glCallList(1);
    glPushMatrix();
    glScalef(escala,escala,escala);
    //glTranslatef(1.0f,1.0f,1.0f);
    //glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, BlueMaterial );
    glPushMatrix();
    glTranslatef(posX,posY,0.0f);
    glCallList(EJE);
    glPopMatrix();
    //glFlush();
    glutSwapBuffers();
}
void animacion(void){
    velY+=aceY; posY+=velY;
    velX+=aceX; posX+=velX;
    if(posY<0.0f){posY=0.0f; velY*=-0.8f;
    if(velY<0.01f){velX=0.0f; velY=0.0f;}
    }
    glutPostRedisplay();
  }
void teclado(unsigned char key, int x, int y){
      if (key =='+'){aceY+=-0.001f;}
      if (key =='-'){aceY-=0.001f;}
      if (key ==27){exit(0);}

}

int main(int a, char *b[]){
    glutInit(&a,b);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(ResX,ResY);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Pelota rebotando");
    glutDisplayFunc(RenderScene);
    glutKeyboardFunc(teclado);
    glutIdleFunc(animacion);
    //OPENGL
    glViewport( 0, 0, ResX, ResY );
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity( );
    glFrustum(-(float)ResX/ResY, (float)ResX/ResY, -1.0, 1.0, 2, 10000.0);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity( );
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glShadeModel(GL_SMOOTH);
    //luces();
    pelota();
    glutMainLoop();
    return 0;
}
