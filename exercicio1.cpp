#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0); /
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 0.5);  
    glVertex2f(-0.5, -0.5); 
    glVertex2f(0.5, -0.5);  
    glEnd();
    glFlush();
}

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0); 
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Exercicio 1");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}