.PHONY:	all clean
	
all : calc

calc:	build/lab1.o build/deposit.o
	gcc build/lab1.o build/deposit.o -o bin/deposit-calc

build/deposit.o:	src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o

build/lab1.o:	src/lab1.c
	gcc -Wall -Werror -c src/lab1.c -o build/lab1.o

clean:
	rm -rf build/*.o bit/deposit-calc