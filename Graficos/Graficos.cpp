// Graficos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#define GLEW_STATIC
#include "GL\glew.h"
#include "GLFW\glfw3.h"
#include <math.h>
#include <iostream>
using namespace std;

GLfloat red, green, blue;

void actualizar()
{
	//Aqui esta bien para actualizar los valores
	//De la version del programa!

	/*red += 0.01;
	green += 0.02;
	blue += 0.03;

	if (red > 1) red = 0;
	if (green > 1) green = 0;
	if (blue > 1) blue = 0;*/

}

void dibujar()
{
	glBegin(GL_QUADS);
	//cielo

	glColor4f(0.0f, 0.0f, 1.0f, 1.0f);
	glVertex3f(-1.0f, 1.0f, 0.0f);

	glColor4f(0.0f, 0.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);

	glColor4f(0.0f, 0.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);

	glColor4f(0.0f, 0.0f, 1.0f, 1.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glEnd(); // Finaliza la rutina*/
	glBegin(GL_QUADS); //Inicia la rutina con un modo de dibujO
//casa

	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-0.5f, 0.5f, 0.0f);

	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(0.5f, 0.5f, 0.0f);

	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(0.5f, -0.5f, 0.0f);

	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-0.5f, -0.5f, 0.0f);
	glEnd(); // Finaliza la rutina*/

	glBegin(GL_QUADS); 
	//ventana 1

	glColor4f(0.224f, 0.255f, 0.255f, 1.0f);
	glVertex3f(0.10f, 0.15f, 0.0f);

	glColor4f(0.220f, 0.255f, 0.255f, 1.0f);
	glVertex3f(0.40f, 0.15f, 0.0f);

	glColor4f(0.224f, 0.255f, 0.255f, 1.0f);
	glVertex3f(0.40f, 0.30f, 0.0f);

	glColor4f(0.224f, 0.255f, 0.255f, 1.0f);
	glVertex3f(0.10f, 0.30f, 0.0f);
	glEnd(); // Finaliza la rutina*/

	glBegin(GL_QUADS);
	//ventana 2

	glColor4f(0.224f, 0.255f, 0.255f, 1.0f);
	glVertex3f(-0.10f, 0.15f, 0.0f);

	glColor4f(0.220f, 0.255f, 0.255f, 1.0f);
	glVertex3f(-0.40f, 0.15f, 0.0f);

	glColor4f(0.224f, 0.255f, 0.255f, 1.0f);
	glVertex3f(-0.40f, 0.30f, 0.0f);

	glColor4f(0.224f, 0.255f, 0.255f, 1.0f);
	glVertex3f(-0.10f, 0.30f, 0.0f);
	glEnd(); // Finaliza la rutina*/

	glBegin(GL_QUADS);
	//tronco del arbol
	glColor4f(0.16f, 0.4f, 0.4f, 1.0f);
	glVertex3f(-0.80f,- 0.5f, 0.0f);

	glColor4f(0.16f, 0.4f, 0.4f, 1.0f);
	glVertex3f(-0.90f,- 0.5f, 0.0f);

	glColor4f(0.16f, 0.4f, 0.4f, 1.0f);
	glVertex3f(-0.90f, 0.30f, 0.0f);

	glColor4f(0.16f, 0.4f, 0.4f, 1.0f);
	glVertex3f(-0.80f, 0.30f, 0.0f);
	glEnd(); // Finaliza la rutina*/

			 
	glBegin(GL_POLYGON);
	//hojas del arbol
	glColor4f(0.0f, 1.0f, 0.0f, 1.0f);
	for (float i = 0; i < 360; i++)
	{
		glVertex3f(0.2*cos(i) + -0.79, 0.2*sin(i) + 0.4, 0.0f);

	}
	glEnd();

	glBegin(GL_POLYGON);
	//hojas del arbol 2
	glColor4f(0.0f, 1.0f, 0.0f, 1.0f);
	for (float i = 0; i < 360; i++)
	{
		glVertex3f(0.2*cos(i) + -0.79, 0.2*sin(i) + 0.1, 0.0f);

	}
	glEnd();

	glBegin(GL_QUADS);
	//puerta
	glColor3f(.190f, 0.103f, 0.24f);
	glVertex3f(-0.25f, -0.5f, 0.0f);

	glColor3f(.190f, 0.103f, 0.24f);
	glVertex3f(-0.25f, 0.0, 0.0f);

	glColor3f(.190f, 0.103f, 0.24f);
	glVertex3f(0.25f, 0.0f, 0.0f);

	glColor3f(.190f, 0.103f, 0.24f);
	glVertex3f(0.25f, -0.5f, 0.0f);


	glEnd();

	glBegin(GL_LINES);
	//Division de las dos puertas
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, -0.5f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);

	glEnd();

	glBegin(GL_LINES);
	// Lineas de ventana 1

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.25f, 0.15f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.25f, 0.30f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.10f, 0.25f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.40f, 0.25f, 0.0f);
	glEnd();



	glBegin(GL_LINES);
	// Lineas de ventana 1

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.25f, 0.15f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.25f, 0.30f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.10f, 0.25f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.40f, 0.25f, 0.0f);
	glEnd();

	glBegin(GL_LINES);
	// Lineas de ventana 2

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.25f, 0.15f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.25f, 0.30f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.10f, 0.25f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.40f, 0.25f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	//Techo

	glColor3f(11.0f, 20.0f, 2.0f);
	glVertex3f(-0.5f, 0.5f, 0.0f);

	glColor3f(11.0f, 2.0f, 2.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);

	glColor3f(11.0f, 2.0f, 2.0f);
	glVertex3f(0.5f, 0.5f, 0.0f);

	glEnd();

	//Sol
	glBegin(GL_POLYGON);
	glColor4f(1.0f, 1.0f, 0.0f, 1.0f);
	for (float i = 0; i < 360; i++)
	{
		glVertex3f(0.2*cos(i)+0.75, 0.2*sin(i)+0.8, 0.0f); 

	}
	glEnd();

	//nube1
	glBegin(GL_POLYGON);
	glColor3f(11.0f, 20.0f, 2.0f);
	for (float i = 0; i < 360; i++)
	{
		glVertex3f(0.2*cos(i) + -0.75, 0.2*sin(i) + 0.8, 0.0f);

	}
	glEnd();

	//nube2
	glBegin(GL_POLYGON);
	glColor3f(11.0f, 20.0f, 2.0f);
	for (float i = 0; i < 360; i++)
	{
		glVertex3f(0.2*cos(i) + -0.80, 0.2*sin(i) + 0.8, 0.0f);

	}
	glEnd();
}


int main()
{
	//Declaración de Ventana
	GLFWwindow *window;
	
	//Propiedades de la ventana
	GLfloat ancho = 1024;
	GLfloat alto = 768;

	//Inicialización de GLFW
	if (!glfwInit())
	{
		//Si no se inicia bien termina la ejecución
		exit(EXIT_FAILURE);
	}

	//Inicialización de la ventana
	window = glfwCreateWindow(ancho, alto, "Gráficos", NULL, NULL);

	//Verificación de creación de ventana
	if (!window)
	{
		//Cerrar todos los procesos de GLFW
		glfwTerminate();
		//Termina ejecución
		exit(EXIT_FAILURE);
	}


	//Establecer "windows" como contexto
	glfwMakeContextCurrent(window);

	//Se trae las funciones de OpenGL Moderno
	glewExperimental = true;

	//Inicializar GLEW
	GLenum glewError = glewInit();

	//Verificar si GLEW se inicializo bien
	if (glewError != GLEW_OK)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	const GLubyte *version = glGetString(GL_VERSION);
	cout << "Version de OpenGL:" << version << endl;

	red = green = blue = 0.0f;
	//Ciclo de Dibujo
	while (!glfwWindowShouldClose(window))
	{
		//Establecer el area de render (viewport)
		glViewport(0, 0, ancho, alto);
		//Establecer el color con el que se limpia
		glClearColor(red, green, blue, 1);

		

		
		//Limpiar pantalla
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de Dibujo
		actualizar();
		dibujar();

		//Intercambio de Buffers
		glfwSwapBuffers(window);
		//Buscar nueva señal de entrada
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
    return 0;
}

