# include<conio.h>
# include<stdlib.h>
# include<stdio.h>
# include<iostream>
// proguai@hotmail.com

int main()
{
	int legajo, ch;
	float vh, sueldo;
		
	printf("ingrese el legajo del empleado");
	scanf("%d",&legajo);
	printf("ingrese la cantidad de horas trabajadas");
	scanf("%d",&ch);
	printf("ingrese el valor de la hora");
	scanf("%f",&vh);
	sueldo= ch*vh;
	printf("el empleado del legajo %d cobrara %0.2f pesos\n\n",legajo,sueldo);
	system("pause");

}