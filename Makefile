#[Makefile]

#[Option]
CC = gcc
CFLAGS = -Wall -Wextra -O3
SRC = OSInfo

#[Content]

.PHONY: all clean

all : 
	cp ${SRC}.c ${SRC}.cpp
	${CC} ${CFLAGS} ${SRC}.c -o ${SRC}
	./${SRC}
	rm ${SRC}
	${CC} ${CFLAGS} ${SRC}.cpp -o ${SRC}
	./${SRC}
	rm ${SRC}
	rm ${SRC}.cpp

clean : 
	rm -f ${SRC}.cpp ${SRC}