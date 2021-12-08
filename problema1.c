//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - "Programa: Suma,multiplicación y división"
#include <conio.h>
#include <stdio.h>
int main()
{
  //Declarar variables
  int n1, n2, producto, suma; 
  float divi;
  //Solicitar datos
  printf("Digite un n%cmero: ",163);
  scanf( "%d", &n1 );
  printf("Digite un n%cmero:",163);
  scanf( "%d", &n2 );
  //Operaciónes
  suma = n1 + n2;
  producto = n1 * n2;
  divi = n1 / (float)n2;
  //Salidas
  printf("\n - - - RESULTADOS - - -\n     Suma: %.d\n     Multiplicaci%cn: %.d\n     Divisi%cn: %.2f",suma,162,producto,162,divi);
  getch(); //Pausa
  return 0;
}