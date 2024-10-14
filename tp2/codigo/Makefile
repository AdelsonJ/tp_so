all: tabela.o memoria.o 
	gcc memoria.o tabela.o main.c -o tp2virtual

tabela.o: tabela.h tabela.c
	gcc -c tabela.c

mamoria.o: memoria.h memoria.c
	gcc -c memoria.c

clean: 
	rm -rf tp2virtual tabela.o memoria.o
