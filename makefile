CC=gcc
AR=ar
FLAGS= -g
OBJECTS_LIB=my_funcT3.o
OBJECTS_MAIN=main.o

# 8
all: stringProg libclass.a

# 5	
stringProg : $(OBJECTS_MAIN) libclass.a
	$(CC) $(FLAGS) -o stringProg $(OBJECTS_MAIN) libclass.a

main.o: main.c my_funcT3.h
	$(CC) $(FLAGS) -c main.c

libclass.a: $(OBJECTS_LIB)
	$(AR) -rcs libclass.a $(OBJECTS_LIB)	

my_funcT3.o: my_funcT3.c my_funcT3.h
	$(CC) $(FLAGS) -c my_funcT3.c
.PHONY: clean all
clean:
	rm -f *.o *.a *.so stringProg

