# Define the macros here
SHELL = /bin/sh

OBJS = main.cpp factorial.cpp hello.cpp
CFLAG = -Wall -g
CC = g++
INCLUDE =
LIBS = -lm

hello:${OBJ}
	${CC} ${CFLAG} ${INCLUDES} -o $@ ${OBJS} ${LIBS}

clean:
	-rm -f hello

.cpp.o:
	${CC} ${CFLAGS} ${INCLUDES} -c $<
