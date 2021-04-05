CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=myBank.o
FLAGS= -Wall -g

all: main2_1 main2_2 main2_3 main2_4

default: run_main2_4

run_main2_1: main2_1
	./main2_1	
run_main2_2: main2_2
	./main2_2	
run_main2_3: main2_3
	./main2_3	
run_main2_4: main2_4
	./main2_4	

main2_1: main2_1.c
	$(CC) $(FLAGS) -o main2_1 main2_1.c

main2_2:main2_2.c
	$(CC) $(FLAGS) -o main2_2 main2_2.c

main2_3:main2_3.c
	$(CC) $(FLAGS) -o main2_3 main2_3.c

main2_4:main2_4.c
	$(CC) $(FLAGS) -o main2_4 main2_4.c

clean:
	rm -f *.o *.a *.so main2_1 main2_2 main2_3
