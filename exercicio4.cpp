#include <GL/glut.h>

float xPos = 0.0; 
float direction = 0.01; 

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.5, 0.0, 0.5); 

    glBegin(GL_QUADS);
    glVertex2f(xPos - 0.2, -0.2);
    glVertex2f(xPos + 0.2, -0.2);
    glVertex2f(xPos + 0.2, 0.2);
    glVertex2f(xPos - 0.2, 0.2);
    glEnd();

    glFlush();
}

void update(int value) {
    xPos += direction;
    if (xPos > 0.8 || xPos < -0.8) direction = -direction; 
    glutPostRedisplay();
    glutTimerFunc(16, update, 0); 
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
    glutCreateWindow("Exercicio 4");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(16, update, 0);
    glutMainLoop();
    return 0;
}