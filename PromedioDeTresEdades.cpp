#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include<stdio.h>
#include<conio.h>

int edad1, edad2, edad3;
float promedio;

int main()
{
	printf("Ingresa la edad de la primer persona:");
	scanf("%d", &edad1);
	printf("Ingresa la edad de la segunda persona:");
	scanf("%d", &edad2);
	printf("Ingresa la edad de la tercer persona:");
	scanf("%d", &edad3);
	promedio = (float)(edad1 + edad2 + edad3) / 3;
	printf("Promedio de las tres edades es: %5.2f", promedio);
	getch();
}