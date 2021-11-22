/* Ingresar dos valores, sumarlos si son iguales y multiplicarlos si son distintos

Datos: valor 1.......V1
       Valor 2.......V2

Resultado:realizar el producto si son distintos
          Realizar la suma si son iguales

Proceso: C = V1 + V2
         C + V1 * V2
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

///DECLARACION O PROTOTIPOS DE FUNCIONES

void carga_datos (int*,int*);
int suma (int,int);
int producto (int,int);
void FIN (void);

int main()
{
    int V1,V2,c;
    system ("cls");
    carga_datos(&V1,&V2); //LLAMADA A FUNCION

    if (V1==V2)
        printf("son iguales y la suma es %d", suma(V1,V2));
    else
        printf("son distintos y el producto es %d : ",producto (V1,V2));
    FIN();
}

/// DEFINICION DE FUNCIONES

void carga_datos (int *x, int *y)
{
    printf("ingrese el primer valor : ");
    scanf("%d",x);
    printf("ingrese el segundo valor : ");
    scanf(%d, y);
}

////////////////////////////////

int suma (int x, int y)
{
    return (x+y);
}

///////////////////////////////

int producto(int x, int y)
{
    return (x*y);
}

/////////////////////////////

void FIN (void)
{
    printf("\n\n\n TIPEE UNA TECLA PARA FINALIZAR " );
    getch();
}
