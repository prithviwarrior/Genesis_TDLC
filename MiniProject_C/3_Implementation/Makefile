SRC = test.c\
calc.c\
Unity/unity.c\

INC = calc.h\
-IUnity\

#.PHONY : all

all: ${SRC}
	gcc ${SRC} ${INC} -o all.out -lm

run:
	./all.out
