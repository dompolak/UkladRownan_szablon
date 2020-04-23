#
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++17

__start__:uklad_szablon
	./uklad_szablon

uklad_szablon: obj/main.o obj/Wektor.o obj/Zespolona.o
	g++ -Wall -pedantic -o uklad_szablon obj/main.o obj/Wektor.o obj/Zespolona.o 

obj/main.o: src/main.cpp inc/Wektor.hh inc/Zespolona.hh inc/rozmiar.hh 
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Wektor.o: src/Wektor.cpp inc/rozmiar.hh inc/Wektor.hh inc/Zespolona.hh
	g++ ${CPPFLAGS} -o obj/Wektor.o src/Wektor.cpp

obj/Zespolona.o: src/Zespolona.cpp inc/rozmiar.hh inc/Zespolona.hh
	g++ ${CPPFLAGS} -o obj/Zespolona.o src/Zespolona.cpp

clean:
	rm -f obj/*.o uklad_rownan
