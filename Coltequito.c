#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct{
	char descricao[500];
	int local;
	char nomeporta[5];
} porta;

typedef struct{
	char descricao[500];
} corredor;


void delay(unsigned int segundos){
	unsigned int esperar = time(0) + segundos;
	while (time(0) < esperar);
}

void corredor_iniciar(porta *portas, corredor *corredores){
	strcpy(portas[0].descricao, "E por essa janela a sua direita que você pode perguntar por duvidas e é onde no início do ano os calouros podem ir pra conseguir comprovantes de matricula para, por exemplo, conseguir o meio-passe");
	portas[0].local = 0;
	strcpy(portas[0].nomeporta, "port");
	strcpy(portas[1].descricao, "\n Esse e o auditorio, lugar onde acontecem as palestras e aulas com palestras, na maioria, no COLTEC. Aqui tem um piano maneiro que voc%c pode tocar, uma vez que a porta estiver aberta, caso nao esteja, voce pode pedir as chaves no SLOP!");
	portas[1].local = 1;
	strcpy(portas[1].nomeporta, "122");
	strcpy(portas[2].descricao, "\n Essa e a sala do Madeira, lugar onde voce tera suas aula de TGL. Ano passado eu tinha aula de 2 em 2 semanas, pois a aula auternava entre a minha subturma (105 - B) e a outra. Aqui temos varias maquinas(cuidado pra nao perder a mao), que com auxilio do Madeira (Alexandre, o professor), podem ser utiliza-das, na aula ou nao. Se voce entregar os materiais e o desenho tecnico, o Madeira pode manufaturar coisas pra voce.");
	portas[2].local = 1;
	strcpy(portas[2].nomeporta, "123");
	strcpy(portas[3].descricao, "\n Eh na sala da nuped que voce pode perguntar sobre qualquer duvida que tenha sobre os horarios das aulas, sera tera aula, o que aconteceu com professores perdidos, alem de informacoes gerais");
	portas[3].local = 1;
	strcpy(portas[3].nomeporta, "110");
	strcpy(portas[4].descricao, "\n Eh nessa sala que varias atividades de classe que precisam de um computador podem ocorrer, por exemplo o seu professor de fisica pode precisar de materiais da internet para dar a aula e por isso levaria sua turma para essa sala.");
	portas[4].local = 3;
	strcpy(portas[4], "102");
	strcpy(portas[5].descricao, "\n Eh aqui que alunos de certos cursos, informatica nao eh um deles, irao trabalhar com materiais feitos de metal e vidro em seu primeiro ano, aqui podem usar as maquinas (como na oficina de tgl) para fabricar coisas.");
	portas[5].local = 3;
	strcpy(portas[5].nomeporta, "105");
	strcpy(portas[6].descricao, "\n Esse e o gremio, lugar perfeito para dormir, isso se os sofas nao estiverem ocupados... Aqui voce pode alugar bolas de futebol, volei, paredao, ping-pong, e outras varias coisas. Descubra-as por si proprio!!");
	portas[6].local = 4;
	strcpy(portas[6].nomeporta, "grem");
	strcpy(portas[7].descricao, "\n Voce esta na cantina. Se, em 2019, tivermos sorte, a cantina ja estara funcionando, e ainda restarao sofas aqui. Local onde ocorre tambem em peso o comercio no COLTEC, entao prepare seu dinheiro para as guloseimas de todo dia.");
	portas[7].local = 4;
	strcpy(portas[7].nomeporta, "cant");

	strcpy(corredores[0].descricao, "\n A portaria tem uma pequena janelinha a direita(0), e na portaria que o porteiro fica e e onde voce pode requisitar chaves para diferentes salas. Mais a frente o corredor se divide em tres, pra direita(1), pra esquerda(3) e uma escada pra cima(2)");
	strcpy(corredores[1].descricao, "\n O corredor se estende ate muito em frente, onde acaba num portao. Esse e o corredor chamado de \"Corredor de tgl\", e pela porta 123 (A ou B) que voce entra na oficina de tgl. A grande porta dupla vermelha, que seria o numero 122, e o auditorio, e a sala 110 e a sala da nuped, tem uma escada para cima(2) e voce ainda pode ir para a portaria (0)");
	strcpy(corredores[3].descricao, "\n O corredor tem uma saida para o salao principal (4) e tambem vai para a portaria (0), existem varios escaninhos para alunos guradarem suas coisas, mais perto da parede que leva a portaria tem a porta da oficina de mecanica, de numero 105. Em um cantinho, no fundo do corredor, tem uma porta com o numero 102 em cima.");
	strcpy(corredores[4].descricao, "\n Aqui eh o 'salao do gremio' ou simplesmente, gremio, aqui que fica o gremio. Voce pode descansar por aí enquanto admira pinturas no teto e manifestacoes culturais, incorporadas em cartazes beges, feitas pelos alunos. Voce pode ir para as quadras(6), pelo lado oposto voce vai ao que chamamos de banho de sol(5), pode ir em direcao a portaria(3)");
	strcpy(corredores[5].descricao, "\n Voce esta no banho de sol, lugar onde voce pode parar um momento para respirar um vento fresco em meio as arvores e aos raios do sol, alem de ter umas cabaninhas bem legais pra se sentar embaixo. Se voce seguir em frente voce chegara na entrada da estufa(7), pra tras voce voltara para o salao do gremio(4)");
	strcpy(corredores[6].descricao, "\n Voce esta na quadra, lugar onde voce podera ficar com seus amigos no intervalo. Sua aula de Educacao Fisica acontecera quase sempre aqui. Os campeonatos esportivos tambem. Junte-se com seus amigos aqui! Voce pode ir para o salao do gremio(4) ou para o corredor da educacao fisica(8)");
	strcpy(corredores[7].descricao, "\n Voce descobriu a estufa/horta da Rose, sua professora de biolgia. Aqui voce passara boa parte das aulas de biologias desenvolvendo o seu proprio plantio que sera avaliado. Nao queira falhar na sua horta... Voce pode voltar para parte principal do banho de sol(5)");

}

int main(){
	corredor *corredores;
	corredores = (corredor *) malloc (20 * sizeof(corredores));
			porta *portas;
			portas = (porta *) malloc (50 * sizeof(porta));
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
			free(corredores);
			free(portas);

			return 0;
}
