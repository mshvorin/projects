OBJECTS=main.o utils.o adders.o
CXX=g++
CXX=clang
CXXFLAGS=-Wall
LDFLAGS=-lm

main: main.o utils.o adders.o
	$(CXX) -o main $(OBJECTS)
	
main.o: main.cpp utils.h adders.h
	g++ $(CXXFLAGS) -c main.cpp
	
adders.o: adders.cpp adders.h
	g++ $(CXXFLAGS) -c adders.cpp
	
utils.o: utils.cpp utils.h adders.h
	g++ $(CXXFLAGS) -c utils.cpp
	
clean:
	rm -f $(OBJECTS)
	
help:
	@echo = "Targets:"
