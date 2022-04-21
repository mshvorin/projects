main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o caesar.o viginere.o decryption.o
	g++ -std=c++11 -o tests tests.o funcs.o caesar.o viginere.o decryption.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

test-ascii.o: test-ascii.cpp
	g++ -c test-ascii.cpp

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp

viginere.o: viginere.cpp viginere.h
	g++ -c viginere.cpp

decryption.o: decryption.cpp decryption.h
	g++ -c decryption.cpp

main.o: main.cpp funcs.h
	g++ -c main.cpp

tests.o: tests.cpp doctest.h funcs.h
	g++ -std=c++11 -c tests.cpp
	
clean:
	rm -f main tests test-ascii main.o funcs.o tests.o test-ascii.o caesar.o viginere.o decryption.o
