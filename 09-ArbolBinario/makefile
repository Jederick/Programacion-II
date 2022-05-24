FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/arbol.cpp -o bin/arbol.o
	g++ $(FLAGS) src/nodoArbol.cpp -o bin/nodoArbol.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -o bin/final bin/main.o bin/nodoArbol.o bin/arbol.o


make test:
	mkdir -p bin
	g++ $(FLAGS) src/arbol.cpp -o bin/arbol.o
	g++ $(FLAGS) src/nodoArbol.cpp -o bin/nodoArbol.o
	g++ $(FLAGS) tests/arbol_tests.cpp -o bin/arbol_tests.o
	g++ -g -o bin/test bin/arbol_tests.o bin/arbol.o bin/nodoArbol.o -lgtest -lgtest_main -lpthread 

clean:
	rm -Rf bin
