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
    printf("Voce tera a oportunidade de navegar por toda a escola, desde a portaria ate todo o terceiro andar, explore pelos corredores e descubra para que serve cada sala e porta!");
    delay(3);

    FILE *arquivo;
    char escolha;
    int escolha_porta;
    int corredorQual = 0;

    arquivo = fopen("data.bin", "rb");
    if (arquivo == NULL){
        arquivo = fopen("data.bin", "wb");
        fwrite(&corredorQual, sizeof(int), 1, arquivo);
        fclose(arquivo);
    }else{
        fread(&corredorQual, sizeof(int), 1, arquivo);
        fclose(arquivo);
    }

    while (1){
        if (corredores[corredorQual].descricao[0] == '\0'){
            printf("\n\t Corredor em construcao, volte mais tarde! Enquanto isso volte a portaria e explore outros lugares do coltec");
            corredorQual = 0;
            delay(2);
        }

        printf("\n\t%s", corredores[corredorQual].descricao);
        delay(2);
        printf("\n Quer seguir para outro (c)orredor ou escolher uma (p)orta?");
        if (corredorQual == 0){
            printf(" Ou (s)air? ");
        }
        setbuf(stdin,NULL);
        scanf(" %c", &escolha);
        if ((corredorQual == 0) && ((escolha == 's') || (escolha == 'S'))){
            exit(0);
        }
        if ((escolha == 'c') || (escolha == 'C')){
            printf("\n Qual o numero do corredor que deseja escolher? ");
            scanf(" %d", &corredorQual);
        }
        else if ((escolha == 'p') || (escolha == 'P')){
            printf("\n Qual o numero da sala/porta? ");
            scanf(" %d", &escolha_porta);
            if (corredorQual == portas[escolha_porta].local){
                printf("%s", portas[escolha_porta].descricao);
            }else{
                printf("\n Nao existe essa sala/porta nesse corredor");
            }
        }
        else{
            printf("\n Digite uma escolha valida: ");
            delay(2);
        }

        arquivo = fopen("data.bin", "wb");
        fwrite(&corredorQual, sizeof(int),1 , arquivo);
        fclose(arquivo);
    }

    return 0;
}
