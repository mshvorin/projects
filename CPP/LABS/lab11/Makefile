main: main.o 
	g++ -o main main.o 

tests: tests.o 
	g++ -o tests tests.o 

main.o: main.cpp profile.h network.h

tests.o: tests.cpp doctest.h profile.h network.h

clean:
	rm -f main tests a.out main.o tests.o 
