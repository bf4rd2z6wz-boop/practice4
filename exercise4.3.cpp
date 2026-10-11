#include <iostream>
int main()
{
 int dayOfMonth; 
 int targetDay;  
std:: cout << "Введите день недели, с которого начинается месяц(1-7): ";
std:: cin >> dayOfMonth;
if(dayOfMonth<1 || dayOfMonth>7)
{
    std::cout << "День не в диапазоне";
}
std::cout << "Введите число мая (1-31): ";
std:: cin >> targetDay;
    if ( targetDay < 1 || targetDay > 31) 
    {
        std::cout << "Ошибка: некорректное число. В мае может быть от 1 до 31 дня." ;
      
    }
int currentDay= (targetDay-1+dayOfMonth-1)%7+1;
if(currentDay==6 || currentDay==7 || (targetDay>=1 && targetDay<=5) || (targetDay>=8 && targetDay<=10) )
{
    std:: cout << "Выходной день";
}
else 
{
    std:: cout << "Будний день";
}










}