CC = g++
FLAGS = -c -Wall
INCLUDE = -I ./include
OBJECTS = ./build/main.o ./build/Combinations.o

all: Algorithms

clean:
	rm ./build/*.o
	rm ./bin/Algorithms

Algorithms: $(OBJECTS)
	$(CC) -o $@ $?
	mv Algorithms ./bin/Algorithms

./build/main.o: ./src/main.cc
	$(CC) $(FLAGS) ./src/main.cc $(INCLUDE)
	mv main.o ./build/main.o

./build/Combinations.o: ./src/Combinations.cc ./include/Combinations.h
	$(CC) $(FLAGS) ./src/Combinations.cc $(INCLUDE)
	mv Combinations.o ./build/Combinations.o
