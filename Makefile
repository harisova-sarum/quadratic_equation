CC = gcc
CFLAGS = -Wall

all: test_quadratic_equation

test_quadratic_equation: quadratic_equation.o test_quadratic_equation.o
	$(CC) $(CFLAGS) -o test_quadratic_equation quadratic_equation.o test_quadratic_equation.o -lm

quadratic_equation.o: quadratic_equation.c quadratic_equation.h
	$(CC) $(CFLAGS) -c quadratic_equation.c

test_quadratic_equation.o: test_quadratic_equation.c quadratic_equation.h
	$(CC) $(CFLAGS) -c test_quadratic_equation.c

check: test_quadratic_equation
	./test_quadratic_equation

clean:
	rm -f *.o test_quadratic_equation