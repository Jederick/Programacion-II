all:
	mkdir -p bin
	g++ -g -c --std=c++17 src/Calculadora.cpp -o bin/Calculadora.o
	g++ -g -c --std=c++17 src/main.cpp -o bin/main.o 
	g++ -o bin/final bin/Calculadora.o bin/main.o
final:
	mkdir -p bin
	g++ -c --std=c++17 src/Calculadora.cpp -o bin/Calculadora.o
	g++ -c --std=c++17 src/main.cpp -o bin/main.o 
	g++ -o bin/final bin/Calculadora.o bin/main.o

clean:
	rm -Rf bin
