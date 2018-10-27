CC = gcc
CFLAGS = -I
HEADERS = Coltequito.h
## OLha so eh facinho entender
## destino: dependencias
##	comando a ser executado para conseguir destino

## %.o -> todos os programas que terminem com .o
## %.c -> todos os programas que terminem com .c
## entao Coltequito, precisa de objetos .o, entao ele a regra de cima se aplica e pega todos os .c e dependencias e cria os respectivos .o que sao usados depois pra fazer o programa final

## pra funcionar eh so dar   make   no terminal, isso eh, se voce estiver usando linux, se for windows tem que digitar tudo manualmente mesmo e esse makefile eh inutil :)

%.o: %.c %(HEADERS)
	$(CC) -c -o $@ $< $(CFLAGS)

Coltequito: Coltequito.o Complexo.o
	$(CC) -o Coltequito Coltequito.o Complexo.o