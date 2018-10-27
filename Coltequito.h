#ifndef Coltequito_H
#define Coltequito_H     /// Guarda, se ja tiver sido importado no mesmo arquivo(.o), nao importa denovo

typedef struct{
    char descricao[100];
}porta;

typedef struct{
    char descricao[100];
    porta portas[500];             /// Podiamos fazer so um vetor sem precisar de ter um grandao em cada struct e colocar todas as portas nesse vetor
}corredor;


corredor corredores[100];

// DECLARACAO das fucoes, por algum motivo todo mundo faz isso e nao define elas no .h, mas em outro .c
void corredor_inciar();   /// Seta todos os corredores e portas
void delay(unsigned int);
int corredor_escolher();  /// interacao com o usuario pra escolher o corredor a ser seguido, nao sei se precisa ser uma afuncao

#endif