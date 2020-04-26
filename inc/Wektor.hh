#ifndef _WEKTOR_HH
#define _WEKTOR_HH

#include "rozmiar.hh"
#include "Zespolona.hh"

template <class T, int size>
class Wektor
{
    T tab[size];
public:
    Wektor() {for (T &TAB : tab) TAB = 0;}
    Wektor(T TAB[]);
};


#endif

