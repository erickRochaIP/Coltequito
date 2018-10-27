#include <stdio.h>
#include <stdlib.h>
#include "Coltequito.h"
#include <string.h>
// Definicoes das funcoes

corredor corredores[100];
porta portas[100];

void delay(unsigned int segundos){
    unsigned int esperar = time(0) + segundos;
    while (time(0) < esperar)
        ;
}

void corredor_iniciar(){
    // Agora eh so colocar a descricao de TODOS os corredores, o numero da porta deve ser a posicao no vertor porta da struct corredor e tbm deve ser falado o numero a ser digitado pra seguir ou voltar pra outro corredor
    // talvez possamos criar um vetor na struct que tem os numeros de corredores que o corredor atual tem contato, pra verificar se o usuario nao esta tentando teleportar pela escola

    strcpy(corredores[0].descricao, "\n A portaria tem uma pequena janelinha a direita que é xxxxxxxxxxxxxxxxxx quem sabe, é aqui que o porteiro fica e é onde voce pode requisitar chaves para diferentes salas. mais a frente o corredor se divide em tres, pra direita(1), pra esquerda(3) e uma escada pra cima(2)\n\n"); // PORTARIA
    strcpy(portas[0].descricao, "\n É por essa janela a sua direita que você pode perguntar por duvidas e é onde no início do ano os calouros podem ir pra conseguir comprovantes de matrícula para, por exemplo, conseguir o meio-passe");

    strcpy(corredores[1].descricao, "\n O corredor se estende até muito em frente, onde acaba num portão. Esse é o corredor chamado de \"Corredor de tgl\", é pela porta XXX e XXX que voce entra no laboratorio. A grande porta dupla vermelha, porta XXX, é o auditorio, a sala XXX e a sala da nuped, tambem tem uma escada para cima(2)."); // Corredor de tgl
}