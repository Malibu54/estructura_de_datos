/* Ingresar el nro de empleado y categoria a la que pertenece (son 4), calcule cuantos empleados hay en cada una de ellas. 
Los datos finalizan con emp = 0 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/// DECLARACIPON O PROTOTIPOS DE FUNCIONES

void carga_de_empleados (int*);
void carga_categoria (int*);
void seleccion (int,int*,int*,int*,int*);
void informe (int, int, int, int);
void FIN (void);
int main ()
{
int emp, cat, c1, c2, c3, c4;
c1=c2=c3=c4=0;
system("cls");
carga_empleados(&emp);
while (emp) //es igual a ---> while emp !=0
{
    carga_categoria(&cat);
    seleccion(cat,&c1,&c2,&c3,&c4);
    carga_empleados(&emp);
}
informe(c1,c2,c3,c4);
FIN()
}

///DEFINICION DE FUNCIONES

void carga_empleado(int*x)
{
    printf("ingresar el nro de empleado : ");
    scanf("%d",x);
}

/////////////////////////////////////////////////////////////

void carga_categoria (int*x)
{
    print("ingresar la categoria del empleado : ");
    scanf("%d",x);
}

////////////////////////////////////////////////////////////

void seleccion (int c,int *x1, int *x2, int *x3, int *x4);
{
    swith(c)
    {
        case 1: (*x1)++; // es lo mismo que -----> ++*x1;
            break;
        case 2: (*x2)++; 
            break;
        case 3: (*x3)++; 
            break;
        case 4: (*x4)++; 
            break;
        default: printf("\n ERROR EN LA CATEGORIA INGRESADA \n");
    } 
}

///////////////////////////////////////////////////////////

void informe (int x1, int x2, int x3, int x4)
{
    printf("\nEl total de empleados de la categoria 1 es : $d ", x1);
    printf("\nEl total de empleados de la categoria 2 es : $d ", x2);
    printf("\nEl total de empleados de la categoria 3 es  : $d ", x3);
    printf("\nEl total de empleados de la categoria 4 es : $d ", x4);
}

///////////////////////////////////////////////////////////

void FIN (void)
{
    printf("\n\n\n TIPEE UNA TECLA PARA FINALIZAR " );
    getch();
}