/*Un restaurant tiene 6 mozos y 12 mesas, cada vez que cobran una mesa se
anotan los  siguientes datos, que terminan con n�mero de factura = 0
                      n�mero de factura
                      n�mero de mozo
                      n�mero de mesa
                      cantidad de personas que comieron
                      monto de la cuenta

Se desea saber lo siguiente

A. cantidad de personas atendidas por cada mozo
B. cantidad de facturas realizadas
C. caja diaria realizada
D. monto facturado por cada mesa en total
E. porcentual facturado por cada mozo sobre el total
F. si a cada mozo se le da el 5% de su venta cu�nto le corresponde a cada uno
G. cu�l mozo atendi� m�s personas en total
H. cu�ntas facturas superaron $ 45
I. mesa a la que se factur� m�s veces, o sea que m�s recambio de clientes
tuvo

DATOS.....................nf, nmo,nme,cp,imp;
RTA.......................cpmo1,........cpmo6
						  cf
						  cd
						  impme1........impme12
						  com1..........com6
						  impmo1.........impmo6
						  facara
						  cfme1.........cfme12
PROCESOS..................
CICLO..................... inexacto, mientras nf!=0
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main()
{	
	int nf,nmo,nme,cp,cf=0,facaras=0;
	float imp,cd=0;
	int cpmo1,cpmo2,cpmo3,cpmo4,cpmo5,cpmo6;
	float impmo1,impmo2,impmo3,impmo4,impmo5,impmo6;
	cpmo1=cpmo2=cpmo3=cpmo4=cpmo5=cpmo6=0;
	impmo1=impmo2=impmo3=impmo4=impmo5=impmo6=0;
	
	printf(" ingrese el nro de factura   ");
	scanf("%d",&nf);
	while(nf!=0)
		{
		do
		{
		printf(" ingrese el nro de mozo   ");
		scanf("%d",&nmo);
		}while((nmo<1)||(nmo>6));
		printf(" ingrese el nro de mesa   ");
		scanf("%d",&nme);
		printf(" ingrese la cantidad de comensales   ");
		scanf("%d",&cp);
		printf(" ingrese el importe de la factura   ");
		scanf("%f",&imp);
		cf=cf+1;     //B
		cd=cd+imp;   //C
		switch(nmo)
			{
				case 1:
					cpmo1=cpmo1+cp;     	     //A, G
					impmo1=impmo1+imp;			//E,F	
					break;
				case 2:
					cpmo2=cpmo2+cp;     	     //A, G
					impmo2=impmo2+imp;			//E,F	
					break;
				case 3:
					cpmo3=cpmo3+cp;     	     //A, G
					impmo3=impmo3+imp;			//E,F	
					break;
				case 4:
					cpmo4=cpmo4+cp;     	     //A, G
					impmo4=impmo4+imp;			//E,F	
					break;
				case 5:
					cpmo5=cpmo5+cp;     	     //A, G
					impmo5=impmo5+imp;			//E,F	
					break;
				case 6:
					cpmo6=cpmo6+cp;     	     //A, G
					impmo6=impmo6+imp;			//E,F	
					break;
						
			}
		switch(nme)
			{
				
			}
		if(imp>45)
			{
				facaras=facaras+1;				//H
			}
			
		printf(" ingrese el nro de factura   ");
		scanf("%d",&nf);
		}	// fin del ciclo
		// todos los printf y los calculos generales como por ej el porcentaje o promedios
		printf(" la cantidad de facturas es %d \n",cf);
		printf(" la caja diaria es %.2f pesos \n",cd);
		
		if((cpmo1>cpmo2)&&(cpmo1>cpmo3)&&(cpmo1>cpmo4)&&(cpmo1>cpmo5)&&(cpmo1>cpmo6))
			{
				printf(" el mozo 1 es el que atendio mas personas \n");
			}
		
		
}

