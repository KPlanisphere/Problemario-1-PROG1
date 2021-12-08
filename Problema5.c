//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - "Programa: Segundos,minutos y horas"
#include <conio.h>
#include <stdio.h>
int main()
{
    //Declarar variables
    int seg,hr,min;
    printf("Digite un n%cmero: ",163);
    scanf("%d",&seg);
    //Operadores
    hr = seg / 3600;
    seg = seg % 3600;
    min = seg / 60;
    seg = seg % 60;
    //Salidas
    printf("\nHoras: %d",hr);
    printf("\nMinutos: %d",min);
    printf("\nSegundos: %d",seg);
    getch(); //Pausa
    return 0;
}