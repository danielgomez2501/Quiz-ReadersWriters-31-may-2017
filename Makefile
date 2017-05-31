all: lib bin

clean:
	rm -rf *.o *.a a.out readerwriter

lib:
	gcc -c readerwriter_util.c -o readerwriter_util.o
	ar rc libreaderwriter.a readerwriter_util.o

bin:
	gcc readerwriter.c -o readerwriter -L$(shell pwd) -pthread -lreaderwriter -lm
