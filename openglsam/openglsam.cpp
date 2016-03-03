// openglsam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <GL/glut.h>


void myDisplay(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glRectf(-0.5f, -0.5f, 0.5f, 0.5f);
	glFlush();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(800, 800);
	glutCreateWindow("��һ��OpenGL����");
	glutDisplayFunc(&myDisplay);
	glutMainLoop();
    return 0;
}

