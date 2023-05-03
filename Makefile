text0 =
text1 = Compilación del proyecto...
text2 = Modo de empleo:
text3 = ./main_maze_t \< data_maze_1.txt
text4 = Se han eliminado el fichero ejecutable y los ficheros objetos.
text5 = clear; make clean; make; clear; ./main_maze_t < data_maze_1.txt

CC=g++
CXXFLAGS=-g -std=c++14

OBJS = maze_t.o main_maze_t.o

all: ${OBJS}
		@echo $(text0)
		@echo $(text1)
		$(CC) $(CXXFLAGS) -o main_maze_t ${OBJS}
		@echo $(text0)
		@echo $(text2)
		@echo $(text3)

clean:
	rm -rf *.o main_maze_t
	@echo $(text4)