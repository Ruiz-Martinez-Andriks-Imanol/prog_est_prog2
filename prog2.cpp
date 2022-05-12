
/* Autor: Andriks Imanol Ruiz Martinez
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programaci�n Estructrada
Ciclo: 01/2022

Este es el programa de la estructura b�sica de Lenguaje C de la materia de Programaci�n Estructurada
Muestra el uso de:
-declaracion de variables.
-variables de tipo flotante.
-scanf
-operaciones aritmeticas
printf para mostrar varias variables.
-Comentarios. para la doumentaci�n interna del programa.
	*/
#include<stdio.h>

int main(){
/*	//Declaraci�n de variables
	int base, altura, area;
	//Entrada de datos
	printf("Calcular el area del Triangulo\n");
	printf("Introduce la base:");
//Escanear datos 	scanf("%d", &base);
	printf("Introduce la altura:");
    scanf("%d", &altura);
    //proceso
	area=base*altura/2;
	//salida
	printf("El area del triangulo es %d", area); */
	 
	//Declaraci�n de variables
	int base, altura;
	float area;
	//Entrada de datos
	printf("Calcular el area del Triangulo\n");
	printf("Introduce la base:");
/*Escanear datos*/ 	scanf("%d", &base);
	printf("Introduce la altura:");
    scanf("%d", &altura);
    //proceso
	area=(float)base*altura/2; //float para tener un valor flotante
	//salida
	printf("El area del triangulo es %f", area);
	
	return 0;
}
