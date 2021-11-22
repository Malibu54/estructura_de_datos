#include <stdio.h>


int main ()
{
    int ;
    float sdo,tot;
    tot=0;
    system(cls);
    for(i=1;i<=10;i++)
    {
        printf("ingrese el sdo del empleado %d \n", i);
        scanf("%f",&sdo);
        tot=tot+sdo;
    }
    printf("el total del sueldos es %5.2f \n",tot);
    system("pause");
}