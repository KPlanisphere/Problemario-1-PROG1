//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - "Programa: Comparador de números"
#include <conio.h>
#include <stdio.h>
int main()
{
    //Declarar variables
    int n1,n2;
    //Salidas
    printf("Digite un n%cmero: ",163);
    scanf( "%d", &n1 );
    printf("Digite otro n%cmero:",163);
    scanf( "%d", &n2 );
    //Comparador
    if(n1==n2){
        printf("\nN%cmeros iguales",163);}
    else{
        printf("\nN%cmeros diferentes",163);}
    getch(); //Pausa
    return 0;
}