# Makefile
all: myprog
	./myprog

myprog:complex.cpp complex.h myprog.cpp
	g++ --std=c++11 -Wall complex.cpp myprog.cpp -o myprog

clean:
	rm myprog