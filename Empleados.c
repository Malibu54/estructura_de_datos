/* Ingresar el nro de empleado y categoria a la que pertenece (son 4), calcule cuantos empleados hay en cada una de ellas. 
Los datos finalizan con emp = 0 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

int main ()
{
    int em,cat,c1,c2,c3,c4:
    c1=c2=c3=c4=0;
    system ("cls");
    printf("ingresar el nro de empleado ");
    scanf("%d",&emp);
    while(emp!=0);
    {
        printf("ingrese la categoria ");
        scanf("%d",&cat);
        switch(cat)
        {
            case 1: c=c1+1;
            break:
            case 2: c2=c2+1
            break;
            case 3: c=c3+1;
            break:
            case 4: c=c4+1;
            break:
            default: printf("error de categoria");
        }
        printf("ingresar el nro de empleado ");
        scanf("%d",&emp);
    }
    printf(("El total de empleados de la categoria 1 es %d\n",c1));
    printf(("El total de empleados de la categoria 2 es %d\n",c2));
    printf(("El total de empleados de la categoria 3 es %d\n",c3));
    printf(("El total de empleados de la categoria 4 es %d\n",c4));
    system("pause");
}