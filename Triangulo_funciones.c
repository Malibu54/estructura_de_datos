/* Instrucciones: ingree dos lados de un triangulo, indique si son iguales y por lo tanto que el triangulo no puede ser escaleno

Datos: lado1 ..... lado1
       Lado2 ..... Lado2

Resultado: imprimir "son igual"

Proceso: comparar si lado1 = a lado2 */

/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stdlib.h>

///DECLARACIONES O PROTOTIPOS DE FUNCIONES

void carga_datos (int*, int*);
void informe (void);
void FIN (void);

int main(){
    int lado1,lado2;
    system("cls");

    carga_datos (&lado1,&lado2); //LLAMADA A FUNCION
    if (lado1==lado2)
    {
        informe(); //LLAMADAS A FUNCIONES
        FIN();
    }

}

/// DEFINICION DE FUNCIONES

void carga_datos (int *y, int *y)
{
    printf("ingrese el primer lado ");
    scanf("%d",x);
    printf("ingrese el segundo lado ");
    scanf("%d", y);
}

////////////////////////////////////////////

void informe (void)
{
    printf("son iguales /n");
}

///////////////////////////////////////////

void FIN (void)
{
    printf('\n\n\n TIPEE UNA TECLA PARA FINALIZAR ');
    getch();
}