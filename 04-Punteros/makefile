FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ -c --std=c++17 src/Calculadora.cpp -o bin/Calculadora.o
	g++ -c --std=c++17 src/main.cpp -o bin/main.o 
	g++ -o bin/punteros bin/Calculadora.o bin/main.o

test:
	mkdir -p bin
	g++ $(FLAGS) tests/calculadora_tests.cpp -o bin/calculadora_tests.o
	g++ $(FLAGS) src/Calculadora.cpp -o bin/Calculadora.o
	g++ -g -o bin/tests bin/calculadora_tests.o bin/Calculadora.o -lgtest -lgtest_main -lpthread 


debug:
	mkdir -p bin
	g++ $(FLAGS) src/Calculadora.cpp -o bin/Calculadora.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o 
	g++ -o bin/debug bin/Calculadora.o bin/main.o

clean:
	rm -Rf bin
