all: sieve.o driver.o
	gcc -o sieve.o driver.o
sieve.o: sieve.c sieve.h
	gcc -c sieve.c -lm
driver.o: driver.c sieve.h
	gcc -c driver.c
run:
	./a.out
clean:
	rm -f *.o *.out *~ 
