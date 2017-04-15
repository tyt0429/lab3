Clock: Clock.o sort.o
	g++ -o sort sort.o Clock.o
Clock.o:Clock.cpp Clock.h
	g++ -c Clock.cpp	
sort.o: sort.cpp Clock.h
	g++ -c sort.cpp
clean:
	rm sort *.o
