#
#
CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++17

__start__:uklad_szablon
	./uklad_szablon

uklad_szablon: obj/main.o obj/Wektor.o obj/main.o
