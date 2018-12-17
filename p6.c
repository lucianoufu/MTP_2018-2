/*
    Luciano Soares Nascimento
    11811ECP024
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float PI = 3.14159265358979323846;

void gerapontos(int Ndiv)
{
    int i;
    for(i = 0; i<Ndiv; i++)
        printf("(%.3f, %.3f) ", cos((i*2*PI)/(Ndiv - 1)), sin((i*2*PI)/(Ndiv - 1)));
}

int main()
{
    int Ndiv;
    printf("Digite o numero de divisoes: ");
    scanf("%i", &Ndiv);
    gerapontos(Ndiv);
    return 0;
}