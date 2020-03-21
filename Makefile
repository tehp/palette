CC = g++
CCFLAGS = -o palette -Wall

main: 
	$(CC) main.cpp $(CCFLAGS)

test: main
	./palette