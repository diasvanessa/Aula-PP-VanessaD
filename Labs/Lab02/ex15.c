/*15. Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da
semana correspondente a este número. Isto é, domingo se 1, segunda-feira se 2, e assim por
diante.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int Num;
    printf("Digite um numero de 1 a 7:");
    scanf("%d", &Num);

    /*Le um inteiro entre 1 e 7 e imprima o dia da semana 
    correspondente a este número. Isto é, domingo se 1, segunda-feira se 2, e assim por diante. */

    switch (Num)
    {
    case 1: printf("Domingo\n"); break;
    case 2: printf("Segunda-feira\n"); break;
    case 3: printf("Terca-feira\n"); break;
    case 4: printf("Quarta-feira\n"); break;
    case 5: printf("Quinta-feira\n"); break;
    case 6: printf("Sexta-Feira\n"); break;
    case 7: printf("Sabado\n"); break;
    default: printf("Digite um numero de 1 a 7!");
    }
    return 0;
}