CC=g++ -Wall -O0 -std=c++0x -g -coverage



main: main.cpp
	$(CC) -o prog main.cpp


