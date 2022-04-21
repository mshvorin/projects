main: main.o lab.o
	g++ -o main main.o lab.o

main.o: main.cpp lab.h
	g++ -c main.cpp

lab.o: lab.cpp lab.h
	g++ -c lab.cpp
	
clean: 
	rm -f main main.o lab.o
