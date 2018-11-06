#include <stdio.h>
#include <stdlib.h>
#include "Coltequito.h"
#include <string.h>
// Definicoes das funcoes

corredor corredores[100];
porta portas[350];

void delay(unsigned int segundos){
    unsigned int esperar = time(0) + segundos;
    while (time(0) < esperar);
}

void corredor_iniciar(){
    // Agora eh so colocar a descricao de TODOS os corredores, o numero da porta deve ser a posicao no vertor porta da struct corredor e tbm deve ser falado o numero a ser digitado pra seguir ou voltar pra outro corredor
    // talvez possamos criar um vetor na struct que tem os numeros de corredores que o corredor atual tem contato, pra verificar se o usuario nao esta tentando teleportar pela escola

    // PORTARIA 0
    strcpy(corredores[0].descricao, "\n A portaria tem uma pequena janelinha a direita(0), e na portaria que o porteiro fica e e onde voce pode requisitar chaves para diferentes salas. mais a frente o corredor se divide em tres, pra direita(1), pra esquerda(3) e uma escada pra cima(2)");
    strcpy(portas[0].descricao, "\n E por essa janela a sua direita que você pode perguntar por duvidas e é onde no início do ano os calouros podem ir pra conseguir comprovantes de matricula para, por exemplo, conseguir o meio-passe");
    // TGL 1
    strcpy(corredores[1].descricao, "\n O corredor se estende ate muito em frente, onde acaba num portao. Esse e o corredor chamado de \"Corredor de tgl\", e pela porta 123 (A ou B) que voce entra na oficina de tgl. A grande porta dupla vermelha, que seria o numero 122, e o auditorio, e a sala 110 e a sala da nuped, tem uma escada para cima(2) e voce ainda pode voltar(0)");
    strcpy(portas[122].descricao, "\n Esse e o auditorio, lugar onde acontecem as palestras e aulas com palestras, na maioria, no COLTEC. Aqui tem um piano maneiro que voc%c pode tocar, uma vez que a porta estiver aberta, caso nao esteja, voce pode pedir as chaves no SLOP!");
    strcpy(portas[123].descricao, "\n Essa e a sala do Madeira, lugar onde voce tera suas aula de TGL. Ano passado eu tinha aula de 2 em 2 semanas, pois a aula auternava entre a minha subturma (105 - B) e a outra. Aqui temos varias maquinas(cuidado pra nao perder a mao), que com auxilio do Madeira (Alexandre, o professor), podem ser utiliza-das, na aula ou nao. Se voce entregar os materiais e o desenho tecnico, o Madeira pode manufaturar coisas pra voce.");
    strcpy(portas[110].descricao, "\n Eh na sala da nuped que voce pode perguntar sobre qualquer duvida que tenha sobre os horarios das aulas, sera tera aula, o que aconteceu com professores perdidos, alem de informacoes gerais");

    // Corredor de eletronica 2 (segundo andar)


    // Corredor que vai pro salao do gremio 3 (que vem da portaria)
    strcpy(corredores[3].descricao, "\n O corredor tem uma saida para o salao principal (4) e tambem vai para a portaria (0), existem varios escaninhos para alunos guradarem suas coisas, masis perto da parede que levav a portaria tem a porta da oficina de mecanica, de numero 105. Em um cantinho, no fundo do corredor, tem uma porta com o numero 102 em cima.");
    strcpy(portas[102].descricao, "\n Eh nessa sala que varias atividades de classe que precisam de um computador podem ocorrer, por exemplo o seu professor de fisica pode precisar de materiais da internet para dar a aula e por isso levaria sua turma para essa sala.");
    strcpy(portas[105].descricao, "\n Eh aqui que alunos de certos cursos, informatica nao eh um deles, irao trabalhar com materiais feitos de metal e vidro em seu primeiro ano, aqui podem usar as maquinas (como na oficina de tgl) para fabricar coisas.");

    // Salao principal onde fica o gremio 4

    strcpy(portas[1].descricao, "\n Esse e o gremio, lugar perfeito para dormir, isso se os sofas nao estiverem ocupados... Aqui voce pode alugar bolas de futebol, volei, paredao, ping-pong, e outras varias coisas. Descubra-as por si proprio!!");
    strcpy(portas[2].descricao, "\n Voce esta na cantina. Se, em 2019, tivermos sorte, a cantina ja estara funcionando, e ainda restarao sofas aqui. Local onde ocorre tambem em peso o comercio no COLTEC, entao prepare seu dinheiro para as guloseimas de todo dia.");
    // Banho de Sol 5
    strcpy(corredores[5].descricao, "\n Voce esta no banho de sol, lugar onde voce pode parar um momento para respirar um vento fresco em meio as arvores e aos raios do sol, alem de ter umas cabaninhas bem legais pra se sentar embaixo. Se voce seguir em frente voce chegara na entrada da estufa(X), pra tras voce voltara para o salao do gremio(4)");

    // Quadras 6
    strcpy(corredores[6].descricao, "\n Voce esta na quadra, lugar onde voce podera ficar com seus amigos no intervalo. Sua aula de Educacao Fisica acontecera quase sempre aqui. Os campeonatos esportivos tambem. Junte-se com seus amigos aqui! Voce pode ir para o salao do gremio(4) ou para o corredor da educacao fisica(8)");

    // Estufa 7
    strcpy(corredores[7].descricao, "\n Voce descobriu a estufa/horta da Rose, sua professora de biolgia. Aqui voce passara boa parte das aulas de biologias desenvolvendo o seu proprio plantio que sera avaliado. Nao queira falhar na sua horta... Voce pode voltar para parte principal do banho de sol(5)");

    // Corredor de educacao fisica 8


    // Corredor da info 12
    strcpy(corredores[12].descricao, "\n Voce esta no corredor da informatica. Conhecida por info, ela e praticalmente a segunda casa dos alunos de desenvolvimento de sistemas. E tambem tem o melhor bebedouro do COLTEC");
}