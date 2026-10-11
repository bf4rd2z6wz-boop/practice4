#include <iostream>
int main()
{
int speed;
int attitude;
std:: cout << "Введите скорость самолета";
  std:: cin >> speed;
 std:: cout << "Введите высоту";
  std:: cin >> attitude; 
  if(speed>=750 && speed<==850 && attitude>=9000 && attitude<=9500)
  {
    std::cout << "Результат: Самолёт летит ПРАВИЛЬНЫМ эшелоном." 
    }
  else 
  {
        std::cout << "Результат: Эшелон НЕПРАВИЛЬНЫЙ!"
  }



}
