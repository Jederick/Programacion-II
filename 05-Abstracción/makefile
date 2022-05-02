FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ -c --std=c++17 src/main.cpp -o bin/main.o 
	g++ -c --std=c++17 src/becaCuatro.cpp -o bin/becaCuatro.o
	g++ -c --std=c++17 src/becaCinco.cpp -o bin/becaCinco.o
	g++ -c --std=c++17 src/becado.cpp -o bin/becado.o
	g++ -o bin/abstraccion bin/becaCuatro.o bin/becaCinco.o bin/becado.o bin/main.o

debug:
	mkdir -p bin
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ $(FLAGS) src/becaCuatro.cpp -o bin/becaCuatro.o 
	g++ $(FLAGS) src/becaCinco.cpp -o bin/becaCinco.o
	g++ $(FLAGS) src/becado.cpp -o bin/becado.o
	g++ -o bin/debug bin/becaCuatro.o bin/becaCinco.o bin/main.o

clean:
	rm -Rf bin
