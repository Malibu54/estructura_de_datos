/* Alumna: Galindez Oriana*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

void carga_datos (int*,int*,int*,int*,int*);
void FIN (void);

int main()
{
  int carga_datos alumnos,nroinsc,leng,niv,formP,imp;
  system ("cls");
  printf("Ingresar nivel de inscrición \n " );
  scanf("%c"niv,&alumnos);
  printf("Ingrese alumnos \n " );
  scanf("%d",&cant_alumnos);
  printf("Ingrese tipo de forma de pago  \n " );
  system ("cls");
  while (alumno >0)
  {
      printf("ingrese el nivel ");
      scanf("%d",&niv);
      switch
      {
          case 1: n=n1+1;
          break:
          case 2: n=n2+1;
          break:
          case 3: n=n3+1;
          break:
          case 4: n=n4+1;
          break:
          default: printf ("error de nivel");
      }
  
      printf ('Los alumnos inscriptos en el nivel 1 es %d\n',n1);
      printf ('Los alumnos inscriptos en el nivel 2 es %d\n',n1);
      printf ('Los alumnos inscriptos en el nivel 3 es %d\n',n1);
      printf ('Los alumnos inscriptos en el nivel 3 es %d\n',n1);
      system ("pause");

}
void FIN (void);
{
    printf ('\n\n\n PRESIONE ESC PARA FINALIZAR ');
    getch ();
}
