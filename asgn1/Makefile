# Makefile for liking flex and C
CC	= cc -g -O0 -Wall -Wextra -std=c99
BIN	= myshell
OBJ	= ${BIN}.o lex.yy.o
OBJFLEX	= ${BIN}.o lex.yy.o -lfl
FLEX	= lex.l

${BIN} : ${OBJ}
	${CC} -o $@ ${OBJFLEX}
%.o : %.c
	${CC} -c $<

lex.yy.c : ${FLEX}
	flex ${FLEX}

