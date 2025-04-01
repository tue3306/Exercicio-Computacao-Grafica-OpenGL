#include <GL/glut.h>

float yPos = 0.0; 

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0); 

    glBegin(GL_QUADS);
    glVertex2f(-0.2, yPos - 0.2);
    glVertex2f(0.2, yPos - 0.2);
    glVertex2f(0.2, yPos + 0.2);
    glVertex2f(-0.2, yPos + 0.2);
    glEnd();

    glFlush();
}

void keyboard(unsigned char key, int x, int y) {
    if (key == ' ') { /
        yPos += 0.1; 
        if (yPos > 1.0) yPos = -1.0; 
        glutPostRedisplay();
    }
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
    glutCreateWindow("Exercicio 3");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}