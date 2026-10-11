#include <iostream>
int main()
{
int day;
std:: cout << "Введите день мая ";
std:: cin >> day;
if(day<1 || day>31)
{
    std::cout << "День не в диапазоне";
}
else
{
int dayMay = day % 7;
if(dayMay==0 || dayMay==6 || (day>=1 && day<=5) || (day>=8 && day<=10) )
{
    std:: cout << "Выходной день";
}
else 
{
    std:: cout << "Будний день";
}




}

}