includes_dir = ../includes/
src_dir = src/

all:
	g++ -Wall -I$(includes_dir) $(src_dir)*.cpp -o debug/main.o
	./"debug/main.o"

build:
	g++ -Wall -I$(includes_dir) $(src_dir)*.cpp -o debug/main.o

run:
	./"debug/main.o"