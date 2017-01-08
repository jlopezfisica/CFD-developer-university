# Define the macros here
SHELL = /bin/sh

OBJS = main.cpp factorial.cpp hello.cpp
CFLAG = -Wall -g
CC = g++
INCLUDE =
LIBS = -lm

hello.o:${OBJ}
	${CC} ${CFLAG} ${INCLUDES} -o $@ ${OBJS} ${LIBS}

clean:
	-rm -f *.o

.cpp.o:
	${CC} ${CFLAGS} ${INCLUDES} -c $<
