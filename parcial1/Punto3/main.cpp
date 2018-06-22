#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(5);    
    float au=0.8;
    float p=0.5;
    
    glBegin(GL_QUADS);
    glColor3f(0,1,0);	//amarilla	
    glVertex3f(-15.0f,10.0f,0.0f);
    glVertex3f(15.0f,10.0f,0.0f);
    glVertex3f(15.0f,-10.0f,0.0f);
    glVertex3f(-15.0f,-10.0f,0.0f);
    
    glColor3f(0.60,0.40,0.12);		//cafe
    glVertex3f(-14.0f,9.0f,0.0f); 
    glVertex3f(14.0f,9.0f,0.0f);
    glVertex3f(14.0f,-9.0f,0.0f);
    glVertex3f(-14.0f,-9.0f,0.0f);
    
    glColor3f(1,1,1);		//verde
    glVertex3f(-13.5f,8.5f,0.0f); 
    glVertex3f(13.5f,8.5f,0.0f);
    glVertex3f(13.5f,-8.5f,0.0f);
    glVertex3f(-13.5f,-8.5f,0.0f);

    glEnd();
    glPointSize(2);  
   glBegin(GL_POLYGON);
   glColor3f(1,1,0);
    GLdouble x, y;
    for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i));
		y=(0.5*sin(i))+8.5;
		glVertex3f(x,y,0.0f);
   }
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,1,0);
   for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i));
		y=(0.5*sin(i))-8.5;
		glVertex3f(x,y,0.0f);
   }
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,1,0);
   for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+14;
		y=(0.5*sin(i))+8.5;
		glVertex3f(x,y,0.0f);
   }
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,1,0);
   for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+14;
		y=(0.5*sin(i))-8.5;
		glVertex3f(x,y,0.0f);
   }
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,1,0);
   for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))-14;
		y=(0.5*sin(i))+8.5;
		glVertex3f(x,y,0.0f);
   }
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,1,0);
   for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))-14;
		y=(0.5*sin(i))-8.5;
		glVertex3f(x,y,0.0f);
   }
    glEnd();
    //las de adentro
    glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))-8;
		y=(0.5*sin(i));
		glVertex3f(x,y,0.0f);
   }
    glEnd();
    //arreglo de pelotitas
    glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+4;
		y=(0.5*sin(i));
		glVertex3f(x,y,0.0f);
   } 
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+4+au;
		y=(0.5*sin(i))+au;
		glVertex3f(x,y,0.0f);
   }
    glEnd();
    glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+4+(au*2);
		y=(0.5*sin(i))+(au*2);
		glVertex3f(x,y,0.0f);
   }
    glEnd();
    glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+4+(au*3);
		y=(0.5*sin(i))+(au*3);
		glVertex3f(x,y,0.0f);
   }
    glEnd();
     glBegin(GL_POLYGON);
   glColor3f(1,0,0);
   for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+4+(au*4);
		y=(0.5*sin(i))+(au*4);
		glVertex3f(x,y,0.0f);
   }
   glEnd();
   glBegin(GL_POLYGON);
   glColor3f(1,0,0);
    for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+4+au;
		y=(0.5*sin(i))-au;
		glVertex3f(x,y,0.0f);
   }
    glEnd();
    glBegin(GL_POLYGON);
   glColor3f(1,0,0);
    for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+4+(au*2);
		y=(0.5*sin(i))-(au*2);
		glVertex3f(x,y,0.0f);
   }
    glEnd();
     glBegin(GL_POLYGON);
   glColor3f(1,0,0);
    for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+4+(au*3);
		y=(0.5*sin(i))-(au*3);
		glVertex3f(x,y,0.0f);
   } 
   glEnd();
   
    glBegin(GL_POLYGON);
   glColor3f(1,0,0);
    for (float i=0;i<=10;i=i+0.001){
		x=(0.5*cos(i))+4+(au*4);
		y=(0.5*sin(i))-(au*4);
		glVertex3f(x,y,0.0f);
   }
    glEnd();
    //dentro del arreglo
    glBegin(GL_POLYGON);
   glColor3f(1,0,0);
    for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+4+(au*2);
		y=(0.5*sin(i));
		glVertex3f(x,y,0.0f);
   }
    glEnd();
    glBegin(GL_POLYGON);
   glColor3f(1,0,0);
    for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+4+(au*3);
		y=(0.5*sin(i))+au;
		glVertex3f(x,y,0.0f);
   }
    glEnd();
      glBegin(GL_POLYGON);
   glColor3f(1,0,0);
    for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+4+(au*3);
		y=(0.5*sin(i))-au;
		glVertex3f(x,y,0.0f);
   }
    glEnd();
      glBegin(GL_POLYGON);
   glColor3f(1,0,0);
    for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+4+(au*4);
		y=(0.5*sin(i))+(au*2);
		glVertex3f(x,y,0.0f);
   }
    glEnd();
      glBegin(GL_POLYGON);
   glColor3f(1,0,0);
    for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+4+(au*4);
		y=(0.5*sin(i));
		glVertex3f(x,y,0.0f);
   }
    glEnd();
      glBegin(GL_POLYGON);
   glColor3f(1,0,0);
    for (float i=0;i<=10;i=i+0.001){ 
		
		x=(0.5*cos(i))+4+(au*4);
		y=(0.5*sin(i))-(au*2);
		glVertex3f(x,y,0.0f);
   }
    glEnd();
     
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-20.0, 20.0, -20.0, 20.0, -1.0, 1.0); 
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (3, 3);		
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
