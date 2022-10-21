.PHONY: clean
Result: main.o
	gcc -o Result main.o
main.o: main.c
	gcc -c -o main.o main.c
clean: 
	rm -rf Result *.o