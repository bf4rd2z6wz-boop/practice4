#include <iostream>
int main()
{
int fullPrice =500000;
int entrances = 3;
int flats = 40; 
int costForOne = fullPrice / (entrances* flats);
std:: cout << "Приветствуем вас в калькуляторе квартплаты!  " <<"\n";
std:: cout << "Введите сумму, указанную в квитанции: " << fullPrice << "\n";
std:: cout << "Сколько подъездов в вашем доме? " << entrances << "\n"; ;
std:: cout << "Сколько квартир в каждом подъезде? " << flats << "\n";;
std:: cout << "Каждая квартира должна платить по "  << costForOne  << " руб.";



}