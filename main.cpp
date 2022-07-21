#include <GL/glut.h>

void display (void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLE_FAN);
        //glvertex2f(x,y);
        glVertex2f(1,0);
        glVertex2f(-1,0);
        glVertex2f(0,0.9);
    glEnd();

    glFlush();
}

void init(void) {
    glClearColor(0.0,0.0,1.0,1.0);
}

int main(int argc,char *argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGBA);
    glutCreateWindow(argv[0]);
    glutDisplayFunc(display);
    init();
    glutMainLoop();
    return 0;
}