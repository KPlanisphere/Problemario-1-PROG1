//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - "Programa: Multiplo de dos números"
#include <conio.h>
#include <stdio.h>
int main()
{
    //Declarar variables
    int n1,n2;
    //Salidas
    printf("Digite un n%cmero entero: ",163);
    scanf( "%d", &n1 );
    printf("Digite otro n%cmero entero:",163);
    scanf( "%d", &n2 );
    //Comparador
    if(n1 % n2 == 0) //Operador modulo
        printf("\nEl n%cmero %d es multiplo de %d",163,n1,n2);
    else
        printf("\nEl n%cmero %d NO es multiplo de %d",163,n1,n2);
    
    getch(); //Pausa
    return 0;
}