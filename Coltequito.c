#include <stdlib.h>
#include <stdio.h>
#include "Coltequito.h"
#include <string.h>
int main(){
    corredor_iniciar();
    printf("\n Bem Vindo coltecano! \n");
    delay(2);
    printf("Voce esta no simulador de coltec, um programa criada pelos seus camaradas coltecanos para te ajudar a conhecer todo o coltec. \n");
    delay(3);
    printf("Voce tera a oportunidade de navegar por toda a escola, desde a portaria ate todo o terceiro andar, explore pelos corredores e descubra para que servev cada sala e porta!");
    delay(3);

    int corredorQual = 0;
    char escolha;
    int escolha_porta;

    while (1){
        if (corredores[corredorQual].descricao[0] == '\0'){
            printf("\n\t Corredor em construcao, volte mais tarde! Enquanto isso volte a portaria e explore outros lugares do coltec");
            corredorQual = 0;
            delay(2);
            continue;
        }

        printf("%s", corredores[corredorQual].descricao);
        delay(2);
        printf("\n Quer seguir para outro (c)orredor ou escolher uma (p)orta?");
        if (corredorQual == 0){
            printf(" Ou (s)air? ");
        }
        scanf(" %c", &escolha);
        if ((corredorQual == 0) && ((strcmp("s", &escolha) == 0) || (strcmp("S", &escolha) == 0))){
            exit(0);
        }
        if ((strcmp("c", &escolha) == 0) || (strcmp("C", &escolha) == 0)){
            printf("\n Qual o numero do corredor que deseja escolher? ");
            scanf(" %d", &corredorQual);
            continue;
        }
        else if ((strcmp("p", &escolha) == 0) || (strcmp("P", &escolha) == 0)){
            printf("\n Qual o numero da sala/porta? ");
            scanf(" %d", &escolha_porta);
            printf("%s", portas[escolha_porta]); // Precisa-se bolar uma guarda pra não escolher uma porta que não esteja no corredor
            continue;
        }
        else{
            printf("\n Digite uma escolha valida: ");
            scanf(" %c", &escolha);
            continue;
        }
    }

    return 0;
}
