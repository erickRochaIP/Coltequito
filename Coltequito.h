#ifndef Coltequito_H
#define Coltequito_H /// Guarda, se ja tiver sido importado no mesmo arquivo(.o), nao importa denovo

typedef struct{
    char descricao[500];
    int local;
} porta;

typedef struct{
    char descricao[500];
} corredor;

extern porta portas[350]; // Qual a porta com maior numero no coltec?
extern corredor corredores[100];

// DECLARACAO das fucoes, por algum motivo todo mundo faz isso e nao define elas no .h, mas em outro .c
void corredor_inciar(); /// Seta todos os corredores e portas
void delay(unsigned int);

#endif
