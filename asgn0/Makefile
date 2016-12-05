# Makefile for cat.c
MKFILE		= Makefile
CC		= cc -g -O0 -Wall -Wextra -std=gnu99
CSOURCE		= cat.c
OBJECTS		= ${CSOURCE:.c=.o}
EXEBIN		= cat

all : ${EXEBIN}

${EXEBIN} : ${OBJECTS}
	${CC} -o $@ ${OBJECTS}

$.o : %.c
	${CC} -c $<

clean:
	- rm ${OBJECTS}

spotless: clean
	- rm ${EXEBIN}
