all: test

test: 
	cc -g -o test *.c

clean:
	rm -rf *.o test