CC=g++
CFLAGS=-g -Wall -Wextra

default: dynamic

dynamic: dynamic.o
	$(CC) $(CFLAGS) -o dyn dynamic.o

dynamic.o: dynamic.cpp
	$(CC) $(CFLAGS) -c dynamic.cpp

clean:
	$(RM) dyn *.o *~
