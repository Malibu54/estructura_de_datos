/* 

Datos: valor de la hora ....vh
       cantidad de horas trabajadas ...ch
       nro de empleado...emp
Resultado: Sueldo.....sdo
Proceso: sdo = ch * vh

*/
//////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h> /* directiva de procesamiento*/
#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main() /* funcion principal */
{
    int emp,ch,vh,sdo;
    system ("cls");
    printf("ingrese el nro de empleado ");
    scanf("%d",& emp);  /* %d es para mantener el formato del numero ya sea positivo, negativo, entero o real */
    printf("ingrese la cantidad de horas ");
    scanf("%d",&ch);
    printf("ingrese el valor de la hora ");
    scanf("%d",&vh);
    sdo=ch*vh;
    printf("el empleado %d, cobra %d pesos \n ",emp,sdo);
    system("pause");
}
