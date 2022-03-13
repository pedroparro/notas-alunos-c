#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"");
    printf("********** Bem Vindo ao Sistema de Notas **********");
    printf("\n");
    printf("********** Desenvolvido por Pedro Parro  **********");
    printf("\n");
    printf("********** São Paulo - SP *************************");
    printf("\n");
    printf("\n");
    
    char nome[5][100];
    char cpf[5][100];
    char disciplina[5][100];
    int i;
    float av1[2],av2[2],avd[2],media[2];
    
    //for
    for(i=0; i < 5; i++){
        /*nome*/
        printf("Digite seu nome: ");
        scanf("%s",nome[i]);
        printf("\n");
        /*cpf*/
        printf("Digite seu cpf: ");
        scanf("%s",cpf[i]);
        printf("\n");
        /*disciplina*/
        printf("Digite sua Disciplina: ");
        scanf("%s",disciplina[i]);
        printf("\n");
        /*av1*/
        printf("Nota Av1: ");
        scanf("%f",&av1[i]);
        printf("\n");
        /*av2*/
        printf("Nota Av2: ");
        scanf("%f",&av2[i]);
        printf("\n");
        /*avd*/
        printf("Nota Avd: ");
        scanf("%f",&avd[i]);
        printf("\n");
        
    }
    printf("********** Resultado ******************************");
    printf("\n");
    printf("\n");
    //for
    for(i=0; i < 5; i++){
        printf("Seu nome é: %s", nome[i]);
        printf("\n");
        printf("Seu cpf é: %s", cpf[i]);
        printf("\n");
        printf("Sua Disciplina é: %s", disciplina[i]);
        printf("\n");
        printf("Nota Av1 é: %.2f", av1[i]);
        printf("\n");
        printf("Nota Av2 é: %.2f", av2[i]);
        printf("\n");
        printf("Nota Avd é: %.2f", avd[i]);
        printf("\n");
        printf("\n");
        printf("Sua média é: %.1f",media[2,i] = (av1[2,i]+av2[2,i]+avd[2,i]) / 3);
        printf("\n");
        printf("\n");
    }


    getch();
    return 0;
}