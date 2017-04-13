.PHONY:	all d_test clean
	
all : calc deposit-test

calc:	build/src/lab1.o build/src/deposit.o
	gcc build/src/lab1.o build/src/deposit.o -o bin/deposit-calc

build/src/deposit.o:	src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o

build/src/lab1.o:	src/lab1.c
	gcc -Wall -Werror -c src/lab1.c -o build/src/lab1.o

d_test: deposit-test

deposit-test: build/test/main.o build/test/deposit_test.o build/src/deposit.o
	gcc build/test/main.o build/test/deposit_test.o build/src/deposit.o -o bin/deposit-test

build/test/main.o: test/main.c
	gcc -I src -I thirdparty -Wall -Werror -c test/main.c -o build/test/main.o

build/test/deposit_test.o: test/deposit_test.c
	gcc -I thirdparty -I src -Wall -Werror -c test/deposit_test.c -o build/test/deposit_test.o

clean:
	rm -rf build/test/*.o build/src/*.o bin/*
