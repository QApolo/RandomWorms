#all: animacion

#gfx.o: gfx.c
#	gcc -c gfx.c
#animacion.o: animacion.cpp
#	g++ -c animacion.cpp
#animacion: gfx.o animacion.o
#	g++ gfx.o animacion.o -o animacion -lX11

#clean:
#	@echo "Removing binary files..."
#	rm -rf *.o
#	rm animacion

all: Simulator

gfx.o: gfx.c
	gcc -c gfx.c

Point.o: ./headers/geometry/Point.cpp
	g++ -c ./headers/geometry/Point.cpp

Movement.o: Movement.cpp
	g++ Movement.cpp -c

OscillatorMovement.o: Movement.o OscillatorMovement.cpp
	g++ Movement.o OscillatorMovement.cpp -c

Worm.o: Point.o Movement.o Worm.cpp
	g++ Point.o Movement.o Worm.cpp -c

Simulator.o: Worm.o
	g++ -c Simulator.cpp

Simulator: gfx.o Simulator.o Point.o
	g++ gfx.o Point.o -o Simulator -lX11

clean:
	@echo "Removing binary files..."
		rm -rf *.o
		rm Simulator