#include <iostream>
int main()
{
int dayToday, monthToday, yearToday;
int dayBirthday, monthBirthday, yearBirthday;
std:: cout << "Введите сегодняшнюю дату (день/месяц/год): ";
std:: cin >> dayToday >> monthToday >> yearToday;
std:: cout << "Введите дату рождения (день/месяц/год): ";
std:: cin >> dayBirthday >> monthBirthday >> yearBirthday;
if(yearToday-yearBirthday < 18)
{
    std:: cout << "Продавать нельзя";
}
if(yearToday-yearBirthday > 18)
{
    std:: cout << "Продавать можно";
}
else if (yearToday-yearBirthday == 18)
{
if(monthToday<monthBirthday)
{
    std:: cout << "Продавать нельзя";
}
else if(monthToday>monthBirthday)
{
    std:: cout << "Продавать можно"; 
}
else
{
if(dayToday<=dayBirthday)
{
     std:: cout << "Продавать нельзя";
}
else
{
     std:: cout << "Продавать можно"; 
}

}

}








}