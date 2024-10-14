all: processManager.o reporter.o
	gcc processManager.o reporter.o main.c -o main

reporter.o: reporter.h reporter.c
	gcc -c reporter.c

processManager.o: processManager.h processManager.c
	gcc -c processManager.c

clean: 
	rm -rf processManager.o reporter.o main