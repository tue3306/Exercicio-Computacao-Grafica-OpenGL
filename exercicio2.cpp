#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 0.0); 
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 100; i++) {
        float angle = 2.0f * 3.14159f * i / 100;
        glVertex2f(0.3 * cos(angle), 0.3 * sin(angle));
    }
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.0, 0.3);  glVertex2f(0.0, -0.3); 
    glVertex2f(0.0, 0.0);  glVertex2f(-0.2, -0.2); 
    glVertex2f(0.0, 0.0);  glVertex2f(0.2, -0.2);  
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
    glutCreateWindow("Exercicio 2");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}