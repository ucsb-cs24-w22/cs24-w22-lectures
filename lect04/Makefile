# Makefile
all: myprog test
	./myprog
	./test

myprog:complex.cpp complex.h myprog.cpp
	g++ --std=c++11 -Wall complex.cpp myprog.cpp -o myprog

test:complex.cpp complex.h test.cpp
	g++ --std=c++11 -Wall complex.cpp test.cpp -o test

# -Wall: show all warnings
# -std=c++11: using c++11 notation

clean:
	rm myprog