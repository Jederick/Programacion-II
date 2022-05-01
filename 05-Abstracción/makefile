FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ -c --std=c++17 src/main.cpp -o bin/main.o 
	g++ -c --std=c++17 src/Delfin.cpp -o bin/Delfin.o
	g++ -c --std=c++17 src/Perro.cpp -o bin/Perro.o 
	g++ -o bin/abstraccion bin/Delfin.o bin/Perro.o bin/main.o

debug:
	mkdir -p bin
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ $(FLAGS) src/Delfin.cpp -o bin/Delfin.o 
	g++ $(FLAGS) src/Perro.cpp -o bin/Perro.o
	g++ -o bin/debug bin/Perro.o bin/Delfin.o bin/main.o

clean:
	rm -Rf bin
