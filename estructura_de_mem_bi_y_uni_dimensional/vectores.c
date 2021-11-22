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
	int art,i,nf,cant,maximo,aux,aux1,j,aux3;
	float precio,impfac,aux2;
	float vprecio[5]={0};
	float vrec[5]={0};
	int vcant[5]={0};
	int v[5];
	
	for(i=1;i<=4;i++)
		{
			printf("ingrese el nro de articulo");
			scanf("%d",&art);
			printf("ingrese el precio del articulo");
			scanf("%f",&precio);
			vprecio[art]=precio;
		}
	system("cls");
		
	printf("ingrese el nro de factura");
	scanf("%d",&nf);
	while(nf!=0)
		{
			printf("ingrese el nro de articulo");
			scanf("%d",&art);
			printf("ingrese la cantidad vendida");
			scanf("%d",&cant);
			impfac=cant*vprecio[art];
			
			vrec[art]=vrec[art]+impfac;   // pregunta 1 4
			vcant[art]=vcant[art]+cant;  // pregunta 2 3 4
			
						
			printf("ingrese el nro de factura");
			scanf("%d",&nf);
		}  // fin del ciclo
		
		system("cls");
		
		for(i=1;i<=4;i++)
			{
				printf("la recaudacion del articulo %d es %0.2f \n",i,vrec[i]);
			}
		for(i=1;i<=4;i++)
			{
				printf("la cantidad vendida del articulo %d es %d \n",i,vcant[i]);
			}	
		maximo= vcant[1];
		aux=1;
		for(i=2;i<=4;i++)
			{
				if(vcant[i]>maximo)
					{
						maximo=vcant[i];
						aux=i;
					}
			}
		for(i=aux;i<=4;i++)
			{
				if(vcant[i]==maximo)
					{
						printf("el articulo mas vendido es %d\n",i);
					}
			}
		// ordenamiento del vector
		for(i=1;i<=4;i++)
			{
				v[i]=i;
			}
		
		for(i=1;i<=3;i++)   // donde 3 es el tama�o valido del vector -1	
			{
				for(j=i+1;j<=4;j++)
					{
						if(vcant[j]>vcant[i])
							{
								aux1=vcant[j];
								vcant[j]=vcant[i];
								vcant[i]=aux1;
								aux2=vrec[j];
								vrec[j]=vrec[i];
								vrec[i]=aux2;
								aux3=v[j];
								v[j]=v[i];
								v[i]=aux3;
							}
					}
			}
		for(i=1;i<=4;i++)
			{
				printf(" la cantidad vendida del art %d es %d y su recaudacion %0.2f \n",v[i],vcant[i],vrec[i]);
			}	
			
		
	system("pause");
		
	
}

