# makefile pamsi
FLAGI = -Iinc -Wall -pedantic



# to robi program.out
all: main.o tab.o
	g++ $(FLAGI)   main.o tab.o   -o program.out


# to robi main.o
main.o: src/main.cpp
	g++ $(FLAGI)  -c   src/main.cpp


tab.o: src/tab.cpp
	g++ $(FLAGI)  -c   src/tab.cpp



clear:
	rm *.o *~
