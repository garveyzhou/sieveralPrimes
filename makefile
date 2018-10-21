all: sieve.o driver.o
	gcc sieve.o driver.o -lm
sieve.o: sieve.c sieve.h
	gcc -c sieve.c -lm
driver.o: driver.c sieve.h
	gcc -c driver.c
run:
	./a.out
clean:
	rm -f *.o *.out *~ 
