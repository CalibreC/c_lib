C_LIB_NAME=c_lib

all: a.out

a.out: 
	cc -g -o a.out *.c

clean:
	rm -rf *.o a.out