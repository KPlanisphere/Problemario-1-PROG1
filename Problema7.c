//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - "Programa: Hombres y mujeres"
#include <conio.h>
#include <stdio.h>
int main()
{
    //Declarar variables
    int total,hom;
    float prh,mrh;
    printf("Ingrese la cantidad total de estudiantes: ");
    scanf("%d",&total);
    printf("Ingrese la cantidad de hombres: ");
    scanf("%d",&hom);
    //Operadores
    if(hom <= total){
        prh = (hom*100)/(float)total;    
        mrh = 100 - prh;
        printf("\nHombres en el sal%cn: %.2f%c",162,prh,37);
        printf("\nMujeres en el sal%cn: %.2f%c",162,mrh,37);}
    else{
        printf("\nERROR: Verifica tu informaci%cn",162);}
    getch(); //Pausa
    return 0;
}