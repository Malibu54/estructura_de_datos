// ingresar un valor y decir si es positivo, negativo o cero

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>

int main()
{
	int valor;
	
	printf("ingresar un valor");
	scanf("%d",&valor);
	
	if(valor>0)
		{
			printf("el valor es positivo \n");
		}
	if(valor<0)
		{
			printf(" el valor es negativo \n");
		}
	if(valor==0)
		{
			printf("el valor es un cero \n");
		}
	system("pause");
}


