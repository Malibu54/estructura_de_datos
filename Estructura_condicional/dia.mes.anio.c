#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>

int main()
{
	int dia,mes,anio;
	int bandera=0;
	
	do
	{
	printf("ingrese el dia");
	scanf("%d",&dia);
	}while((dia<1)||(dia>31));
	
	do
	{
	printf("ingrese el mes");
	scanf("%d",&mes);
	}while((mes<1)||(mes>12));

	do
	{
	printf(" ingrese el anio");
	scanf("%d",&anio);
	}while(anio<0);
	
	
}