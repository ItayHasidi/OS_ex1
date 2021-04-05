CC=gcc
AR=ar
OBJECTS_MAIN=main1_1.o
OBJECTS_LIB=hello_ariel.o
FLAGS= -Wall -g

all: hello_ariel.so run_main1_1 run_main1_2 run_main1_3

default: run_main1_3

run_main1_1: main1_1
	./main1_1
run_main1_2: main1_2
	./main1_2
run_main1_3: main1_3
	./main1_3

main1_1: main1_1.o
	$(CC) $(FLAGS) -o main1_1 main1_1.o hello_ariel.o
main1_2: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o main1_2 $(OBJECTS_MAIN) ./hello_ariel.so
main1_3: hello_ariel.h main1_3.c lib
	$(CC) $(FLAGS) main1_3.c -fPIC -ldl -o main1_3

lib: hello_ariel.h hello_ariel.c 
	$(CC) $(FLAGS) -shared hello_ariel.c -fPIC -o hello_ariel.so

hello_ariel.so: $(OBJECTS_LIB)
	$(CC) -o hello_ariel.so -shared $(OBJECTS_LIB)

hello_ariel.o: hello_ariel.c hello_ariel.h
	$(CC) $(FLAGS) -fPIC -c hello_ariel.c

main1_1.o: main1_1.c hello_ariel.o
	$(CC) $(FLAGS) -fPIC -c main1_1.c

clean:
	rm -f *.o *.a *.so main1_1 main1_2 main1_3





# run_main1_1: main1_1
# 	./main1_1

# main1_1: main1_1.o
# 	$(CC) $(FLAGS) -o main1_1 main1_1.o ./hello_ariel.so

# hello_ariel.o: hello_ariel.c hello_ariel.h
# 	$(CC) $(FLAGS) -fPIC -c hello_ariel.c
# main1_1.o: main1_1.c hello_ariel.h
# 	$(CC) $(FLAGS) -fPIC -c main1_1.c



