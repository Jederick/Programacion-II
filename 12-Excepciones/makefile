FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/calculadora.cpp -o bin/calculadora.o
	g++ $(FLAGS) src/convertidorCambio.cpp -o bin/convertidorCambio.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/excepciones bin/calculadora.o bin/convertidorCambio.o bin/main.o

test:
	mkdir -p bin
	g++ $(FLAGS) src/calculadora.cpp -o bin/calculadora.o
	g++ $(FLAGS) tests/calculadora_tests.cpp -o bin/calculadora_tests.o
	g++ -g -o bin/tests bin/calculadora.o bin/calculadora_tests.o -lgtest -lgtest_main -lpthread

clean:
	rm -Rf bin