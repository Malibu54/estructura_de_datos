/*
un negocio tiene 4 articulos para comercializar
los precios debido a la inflacion hay que cargarlos cada vez que se ejecutan ventas
tambien se tiene las facturas que realiza cada vex que se realiza una venta
los datos que se cargan son
                 nro de factura
                 nro de articulo
                 cantidad vendida

y finalizan cuando el nro de factura = 0

se desa saber

1.recaudacion de cada articulo
2.cantidad vendida por cada articulo
3.articulo mas vendido
4.imprimir ordenado de mayor a menor por cantidad de articulos vendidos
              nro de articulo
              recaudacion por articulo
              cantidad vendida de cada articulo
*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>

int main()
{
	int i,art,cant,nf,vcant[5]={0},maximo,auxiliar,aux,j,aux4;
	float precio,vprecio[5],importe,vrec[5]={0},aux1;
	int v[5];
	for(i=1;i<=4;i++)   //  carga anticipada del precio del articulo
		{
			printf("ingrese el nro de arrticulo");
			scanf("%d",&art);
			printf("ingrese el precio del articulo");
			scanf("%f",&precio);
			vprecio[art]=precio;
		}
	printf("ingrese el nro de factura");
	scanf("%d",&nf);
	while(nf!=0)
		{
			printf("ingrese el nro de articulo");
			scanf("%d",&art);
			printf("ingrese la cantidad vendida");
			scanf("%d",&cant);
			
			importe= cant*vprecio[art];
			vrec[art]=vrec[art]+importe;     // pto 1 ,
			vcant[art]=vcant[art]+cant;		// pto 2 , 3 , 4
						
			printf("ingrese el nro de factura");
			scanf("%d",&nf);
		}
		
	for(i=1;i<=4;i++)  // pto 1
		{
			printf("el articulo %d recaudo %.2f pesos \n",i,vrec[i]);
		}
	for(i=1;i<=4;i++)   // pto 2
		{
			printf("el articulo %d vendio %d unidades \n",i,vcant[i]);
		}
		system("pause");
		system("cls");
	// pto 3
	maximo=vcant[1];
	auxiliar=1;
	for(i=2;i<=4;i++)
		{
			if(vcant[i]>maximo)
				{
					maximo=vcant[i];
					auxiliar=i;
				}
		}
	for(i=auxiliar;i<=4;i++)
		{
			if(vcant[i]==maximo)
				{
					printf("el articulo %d es el mas vendido con %d unidades\n",i,maximo);
				}
		}
		
		// ordenamiento
		for(i=1;i<=4;i++)
			{
			v[i]=i;
			}
	for(i=1;i<=3;i++)   // donde 3 es el tama�o -1
		{
			for(j=i+1;j<=4;j++)
				{
					if(vcant[j]>vcant[i])
						{
							aux=vcant[j];
							vcant[j]=vcant[i];
							vcant[i]=aux;
							aux1=vrec[j];
							vrec[j]=vrec[i];
							vrec[i]=aux1;
							aux4=v[j];
							v[j]=v[i];
							v[i]=aux4;
						}
				}
		}
	for(i=1;i<=4;i++)
		{
			printf(" el articulo %d recaudo %0.2f vendiendo %d unidades\n",v[i],vrec[i],vcant[i]);
		}
}

