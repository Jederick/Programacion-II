FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/empleado.cpp -o bin/empleado.o
	g++ $(FLAGS) src/planilla.cpp -o bin/planilla.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/archivosBinarios bin/main.o bin/empleado.o bin/planilla.o

test:
	mkdir -p bin
	g++ $(FLAGS) src/empleado.cpp -o bin/empleado.o
	g++ $(FLAGS) src/planilla.cpp -o bin/planilla.o
	g++ $(FLAGS) tests/planilla_tests.cpp -o bin/planilla_tests.o
	g++ -g -o bin/tests bin/empleado.o bin/planilla.o bin/planilla_tests.o -lgtest -lgtest_main -lpthread

clean:
	rm -Rf bin