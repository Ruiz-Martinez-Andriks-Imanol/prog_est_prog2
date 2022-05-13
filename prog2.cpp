
/* Autor: Andriks Imanol Ruiz Martinez fecha:03/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada
Ciclo: 01/2022

Este es el programa de la estructura básica de Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:
-declaracion de variables.
-variables de tipo flotante.
-scanf
-operaciones aritmeticas
printf para mostrar varias variables.
-Comentarios para la doumentación interna del programa.
	*/
#include<stdio.h>

int main(){
/*	//Declaración de variables
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
	 
	//Declaración de variables
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
