CC = gcc

beta : main.o main.c utils.c utils.o factors-lister.o
	gcc factors-lister.o main.o utils.o -o beta

main.o: main.c
	gcc -c main.c -o main.o
utils.o: utils.c
	gcc -c utils.c -o utils.o
factors-lister.o: Math/FactorsLister.c
	gcc -c Math/FactorsLister.c -o factors-lister.o
