OBJECTS = solutions.o

main: main.o solutions.o
	g++ -o main main.o $(OBJECTS)

tests: tests.o solutions.o
	g++ -o tests tests.o $(OBJECTS)

solutions.o: solutions.cpp timeslot.h time.h movie.h solutions.h

main.o: main.cpp solutions.cpp time.h timeslot.h movie.h

clean:
	rm -f main tests main.o solutions.o $(OBJECTS)
