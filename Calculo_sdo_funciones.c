/* 

Datos: valor de la hora ....vh
       cantidad de horas trabajadas ...ch
       nro de empleado...emp
Resultado: Sueldo.....sdo
Proceso: sdo = ch * vh

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


///DECLARACION O PROTOTIPO DE FUNCIONES

void carga_datos (int*,int*,int*);
int calculo (int,int);
void informe (int,int);
void FIN (void);

int main()
{
    int emp,ch,vh,sdo;
    system("cls");

    ///LLAMADAS A FUNCIONES
    carga_datos (&emp,&ch,&vh);
    sdo+calculo(ch,vh);
    informe(emp,sdo); ///tambien se puede reemplazar las dos ultimas llamadas por -->infomr (emp,calculo(ch,vh));
    FIN();
}

///DEFINICION DE FUNCIONES

void carga_datos (int *x,int *y, iny *z)
{
    printf("ingrese el nro de empleado ");
    scanf("%d", x);
    printf("ingrese la cantidad de horas ");
    scanf( "%d",y);
    printf("infrese el valor de la hora ");
    scanf("%d",z);
}

///////////////////////////////////////////////

int calculo (int x, int y)
{
    return(x * y);
    
}

//////////////////////////////////////////////

void informe (int x, int y)
{
    printf("el empleado %d, cobra %d pesos",x,y);
}

///////////////////////////////////////////////

void FIN (void)
{
    printf("\n\n\n TIPEE UNA RECLA PARA FINALIZAR ");
    getch();
}