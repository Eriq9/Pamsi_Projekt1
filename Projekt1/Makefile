
FLAG=-g -Iinc -Wall -pedantic -std=c++0x

_start_: sorting
	./sorting

sorting: obj obj/main.o obj/Vector.o obj/Matrix.o \
			obj/Quicksort.o  obj/Mergesort.o obj/Heapsort.o obj/Introsort.o
	g++ -Wall -pedantic -std=c++0x -o sorting obj/main.o obj/Vector.o  obj/Matrix.o \
	obj/Quicksort.o  obj/Mergesort.o obj/Heapsort.o obj/Introsort.o

obj:
	mkdir obj

obj/Vector.o: src/Vector.cpp inc/Vector.hh
	g++ -c ${FLAG} -o obj/Vector.o src/Vector.cpp

obj/Matrix.o: src/Matrix.cpp inc/Matrix.hh
	g++ -c ${FLAG} -o obj/Matrix.o src/Matrix.cpp

obj/Quicksort.o: src/Quicksort.cpp inc/Quicksort.hh
	g++ -c ${FLAG} -o obj/Quicksort.o src/Quicksort.cpp

obj/Mergesort.o: src/Mergesort.cpp inc/Mergesort.hh
	g++ -c ${FLAG} -o obj/Mergesort.o src/Mergesort.cpp

obj/Heapsort.o: src/Heapsort.cpp inc/Heapsort.hh
	g++ -c ${FLAG} -o obj/Heapsort.o src/Heapsort.cpp

obj/Introsort.o: src/Introsort.cpp inc/Introsort.hh 
	g++ -c ${FLAG} -o obj/Introsort.o src/Introsort.cpp

obj/main.o: src/main.cpp inc/Vector.hh inc/Quicksort.hh  inc/Matrix.hh inc/Mergesort.hh inc/Heapsort.hh inc/Introsort.hh 
	g++ -c ${FLAG} -o obj/main.o src/main.cpp

clean:
	rm -f obj/*.o

