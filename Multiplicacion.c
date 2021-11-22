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
#include <iostream>

int main ()
{
    int v1,v2,c;
    system("cls");
    printf("ingrese el primer valor \n");
    scanf("%d", &V1);
    printf("ingrese el segundo valor \n");
    scanf("%d", &V2);
    if (V1==V2)
    {
        c= V1+V2;
        printf("son iguales y la suma es %d \n ",c);

    }

    else
    {
        c=V1*V2;
        printf("son distintos y el producto es %d \n",c);
    }
    system("pause");
}