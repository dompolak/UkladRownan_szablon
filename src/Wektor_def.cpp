#include "Wektor.hh"

template<class T, int size>
Wektor<T, size>::Wektor(T TAB[])
{
    for(int i(0); i < size; i++)
    {
        tab[i] = TAB[i];
    }
}