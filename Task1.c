#include <locale.h>      
#include <stdio.h> 
#define _USE_MATH_DEFINES
#include <math.h>





void task1() //номер 1
{
	setlocale(LC_ALL, "RUS");

	float gr, result;

	printf("введите градус:\n");

	scanf("%f", &gr);

	result = (gr * M_PI) / 180;

	printf("%.6f", sin(result));



}