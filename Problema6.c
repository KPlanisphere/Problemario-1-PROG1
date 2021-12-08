//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - "Programa: Interes"
#include <conio.h>
#include <stdio.h>
int main()
{
    //Declarar variables
    float val;
    printf("Digite un n%cmero: ",163);
    scanf("%f",&val);
    //Operadores
    val = val + 0.2*val;
    //Salidas
    printf("\nEl monto con 20%c de inter%cs es: %.2f%c",37,130,val,37);
    getch(); //Pausa
    return 0;
}