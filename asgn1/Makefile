# Makefile for liking flex and C
CC	= cc -g -O0 -Wall -Wextra -std=c99

BIN	= myshell
OBJECTS	= myshell.o lex.yy.o
CPPSRC	= myshell.c lex.yy.c
LSOURCE	= lex.l

all : ${BIN}

${BIN} : ${OBJECTS}
	${CC} -o ${BIN} ${OBJECTS} -lfl

%.o : %.c
	${CC} -c $<

lex.yy.c : ${LSOURCE}
	flex ${LSOURCE}

clean :
	- rm ${OBJECTS} lex.yy.c
spotless : clean
	- rm ${BIN}

