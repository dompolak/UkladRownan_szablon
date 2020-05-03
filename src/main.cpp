#include "Uklad.hh"

int main()
{   
    /*uklad_rownan<double, ROZMIAR> uklad;
    Wektor<double, ROZMIAR> we_wynikow, we_bledu;

std::cin >> uklad;
std::cout << uklad << std::endl << std::endl;

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

std::cout  << "Wektor bledu: ( " 
           //<< std::scientific << std::setprecision(1) 
           << wektor_bledu(uklad, we_wynikow) << " )" << std::endl;

we_bledu = uklad.get_arg1() * uklad.get_arg2() - we_wynikow;
std::cout << we_wynikow << std::endl;
std::cout << we_bledu << std::endl;*/
macierz<double, ROZMIAR> tmp;
for(;;)
{
    std::cin >> tmp;
    std::cout << tmp.wyznacznik() << std::endl;
}

}