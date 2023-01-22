C_LIB_NAME=c_lib

all: a.out

a.out: 
	cc -g -DC_LIB_TEST -o a.out *.c

clean:
	rm -rf *.o a.out