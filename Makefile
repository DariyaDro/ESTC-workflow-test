.PHONY: all clean
all: Result
	./Result
Result: main.o functions.o
	gcc -o Result main.o functions.o
main.o: main.c
	gcc -c -o main.o main.c
functions.o: functions.c
	gcc -c -o functions.o functions.c
clean: 
	rm -rf Result *.o
