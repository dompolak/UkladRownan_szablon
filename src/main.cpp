#include "Uklad.hh"

int main()
{   
   uklad_rownan<LZespolona, ROZMIAR> uklad;
    Wektor<LZespolona, ROZMIAR> we_wynikow, we_bledu;

std::cin >> uklad;
std::cout << std::fixed << std::setprecision(2) 
          << uklad << std::endl << std::endl;

try
{
    we_wynikow = uklad.Oblicz();
    std::cout << "Rozwiazania:" << std::endl << std::endl;
    std::cout << std::fixed << std::setprecision(2) 
              << we_wynikow << std::endl << std::endl;

}
catch(std::string wyjatek)
{
    if(wyjatek == "wyjatek1")
    {
        std::cout << "uklad sprzeczny" << std::endl;
    }
    if(wyjatek == "wyjatek2")
    {
        std::cout << "uklad sprzeczny albo nieoznaczony" << std::endl;
    }    
}
we_bledu = wektor_bledu(uklad, we_wynikow);
std::cout  << "Wektor bledu: ( " 
           << std::scientific << std::setprecision(1) 
           << we_bledu << " )" << std::endl;

std::cout << "Dlugosc wektora bledu: " << we_bledu.dlugosc() << std::endl;
}