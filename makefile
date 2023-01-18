all: test.out

test.out: 
	cc -g -o test.out *.c

clean:
	rm -rf *.o test.out