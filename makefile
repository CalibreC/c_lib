all: test

test: 
	cc -o test *.c

clean:
	rm -rf *.o test