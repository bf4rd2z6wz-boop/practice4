#include <iostream>
int main()
{
 int requiredAmount;
 std:: cout << "Введите сумму, которую хочет снять Вася: ";
 std:: cin >> requiredAmount;
 if(requiredAmount%100!=0 || requiredAmount < 100)
 {
    std:: cout << "Выдача ровно " << requiredAmount <<  " рублей невозможна";
  return 1;
 }
if(requiredAmount>150000)
 {
    std:: cout << "Выдача более 150000 рублей за раз невозможна";
  return 1;
 }
int N5000 = requiredAmount/5000;
requiredAmount = requiredAmount % 5000;
if(N5000>0)
{
    std:: cout << N5000 << " по 5000 рублей.";
}
int N2000 = requiredAmount/2000;
requiredAmount = requiredAmount % 2000;
if(N2000>0)
{
    std:: cout << N2000 << " по 2000 рублей.";
}

int N1000 = requiredAmount/1000;
requiredAmount = requiredAmount % 1000;
if(N1000>0)
{
    std:: cout << N1000 << " по 1000 рублей.";
}
int N500 = requiredAmount/500;
requiredAmount = requiredAmount % 500;
if(N500>0)
{
    std:: cout << N500 << " по 500 рублей.";
}

int N200 = requiredAmount/200;
requiredAmount = requiredAmount % 200;
if(N200>0)
{
    std:: cout << N200 << " по 200 рублей.";
}
int N100 = requiredAmount/100;
requiredAmount = requiredAmount % 100;
if(N100>0)
{
    std:: cout << N100 << " по 100 рублей.";
}
return 0;
}
