#include <GL/glut.h>

float angle = 0.0; 

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glRotatef(angle, 0.0, 0.0, 1.0); 

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, 0.0, 0.0); 
    glVertex2f(0.0, 0.0);
    for (int i = 0; i <= 100; i++) {
        float a = 2.0f * 3.14159f * i / 100;
        glColor3f((float)i / 100, 1.0 - (float)i / 100, 0.5); 
        glVertex2f(0.3 * cos(a), 0.3 * sin(a));
    }
    glEnd();

    glPopMatrix();
    glFlush();
}

void update(int value) {
    angle -= 1.0; 
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
    glutCreateWindow("Exercicio 5");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(16, update, 0);
    glutMainLoop();
    return 0;
}