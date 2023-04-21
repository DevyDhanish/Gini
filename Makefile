includes_dir = ../includes/
src_dir = src/

all:
	g++ -Wall -I$(includes_dir) $(src_dir)*.cpp -o debug/main.exe
	"debug/main.exe"

build:
	g++ -Wall -I$(includes_dir) $(src_dir)*.cpp -o debug/main.exe

run:
	"debug/main.exe"