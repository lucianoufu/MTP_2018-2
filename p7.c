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
    FILE * arquivo;
    arquivo = fopen("Pontos.txt", "w");
    for(i = 0; i<Ndiv; i++)
        fprintf(arquivo, "(%.3f, %.3f) ", cos((i*2*PI)/(Ndiv - 1)), sin((i*2*PI)/(Ndiv - 1)));
    fclose(arquivo);
}

void Lepontos ()
{
    char frase [150];
    FILE *arquivo;
    arquivo = fopen("Pontos.txt", "r");
    while(fgets(frase, 100, arquivo) != NULL)
        printf("%s", frase);
    
}

int main()
{
    int Ndiv, opcao;
    printf("Escolha uma das opcoes abaixo: \n1 - Gravar arquivo. \n2-Ler arquivo. \n3-Sair do programa. \nDigite:");
    scanf("%i", &opcao);
    switch(opcao)
    {
        case 1:
            printf("Digite o numero de divisoes: ");
            scanf("%i", &Ndiv);
            gerapontos(Ndiv);
            break;
        case 2:
            Lepontos();
            break;
        case 3:
            return 0;
        default:
            printf("Opcao invalida.");
            break;
    }
    return 0;
}