#include "Wektor.hh"

int main()
{   
    Wektor<LZespolona, ROZMIAR> jeden, dwa;
    Wektor<double, ROZMIAR> jeden1, dwa1;
    LZespolona zesp(2);
    
    std::cin >> jeden >> dwa;
    std::cin >> jeden1 >> dwa1;

    std::cout << "--------LZespolona-------" << std::endl;
    std::cout << jeden << std::endl;
    std::cout << dwa << std::endl;
    std::cout << "skalar" << jeden * dwa << std::endl;
    std::cout << "suma" << jeden + dwa << std::endl;
    std::cout << "roznica" << jeden - dwa << std::endl;
    std::cout << "pomnozyc przez" << jeden * zesp << std::endl;
    std::cout << "podzielic przez" << jeden / zesp << std::endl;
    if( jeden != dwa)
    {
        std::cout << "Nie sa rowne" << std::endl;
    }

    std::cout << "--------double-------" << std::endl;
    std::cout << jeden1 << std::endl;
    std::cout << dwa1 << std::endl;
    std::cout << "skalar" << jeden1 * dwa1 << std::endl;
    std::cout << "suma" << jeden1 + dwa1 << std::endl;
    std::cout << "roznica" << jeden1 - dwa1 << std::endl;
    std::cout << "*pomnozyc przez" << jeden1 * 2 << std::endl;
    std::cout << "podzielic przez" << jeden1 /  2 << std::endl;
    if( jeden1 != dwa1)
    {
        std::cout << "Nie sa rowne" << std::endl;
    }


}