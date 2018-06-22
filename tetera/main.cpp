#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>

double rotate_y=0;
double rotate_x=0;
double rotate_z=0;
int tec =0; int tec2 =0 ;
GLfloat X = 0.0f;
GLfloat zoom =0.1f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;
GLfloat scale = 1.0f;

void specialKeys( int key, int x, int y )
{
    if (key == GLUT_KEY_RIGHT)
        rotate_y += 7;
    else if (key == GLUT_KEY_LEFT)
        rotate_y -= 7;
    else if (key == GLUT_KEY_UP)
        rotate_x += 7;
    else if (key == GLUT_KEY_DOWN)
        rotate_x -= 7;
    glutPostRedisplay();

}

void init(void){
    GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glDepthFunc(GL_LESS);
    glEnable(GL_DEPTH_TEST);
    glPolygonMode(GL_FRONT, GL_FILL); 

}
void display(void)
{
    GLfloat mat_ambient[] = { 0.7f, 0.7f, 0.7f, 1.0f };
    GLfloat mat_diffuse[] = { 0.1f, 0.5f, 0.8f, 1.0f };
    GLfloat mat_specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    GLfloat mat_shininess[] = { 100.0f };

    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW_MATRIX);
    glLoadIdentity();
    
    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    glRotatef( rotate_z, 0.0, 0.0, 1.0 );
    glTranslatef(X, Y, Z);  

    glScalef(zoom, zoom, zoom);

    gluLookAt(0.0,0.0,0.10,
              1.0,0.0,0.0,
              0.0,1.0,0.0); 
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

    glutSolidTeapot(2.0);
    glFlush ();
}

void keyboard(unsigned char key, int x, int y)
{
    //control de teclas que hacen referencia a Escalar y transladar el cubo en los ejes X,Y,Z.
    switch (key)
    {
        case 'z':
            if(tec2<=21){
                zoom=zoom+0.01;
                tec--;
                tec2++;  
            }        
        break;
        
        case 'Z':
            if(tec<=3){
                 zoom = zoom-0.01; 
                 tec++;
                 tec2--;  
            }
            break;
        exit(0);            // exit
    }
    glutPostRedisplay();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tetera 3D");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(specialKeys);
   glutMainLoop();
}