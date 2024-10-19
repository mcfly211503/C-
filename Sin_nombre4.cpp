#include<stdio.h>  //arturo maldonado 202307013
int main (){
	int a, l, p, y;
	float x, z, b, c;
		printf("ingrese unicamente numeros positivos");
	printf("ingrese el primer numero");
	scanf("%f", &l);
	printf("ingrese el segundo numero");
	scanf("%f", &a);
	x=l/a;
	y=l%a;
	printf("el resultado de dividir a entre b es: , %f ", x);
	printf("el resudio al dividir a entre b con cociente entero es: , %i", y);
}
