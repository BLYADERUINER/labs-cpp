#include <iostream> // подключаем библиотеку ввод - вывод
#include <iomanip> // подключаем библиотеку модификаторов
#include <cmath> // подключаем библиотеку матана

using namespace std; // создаем пространство имен std

int main() // объявляем функцию
{
  double x, y, R1 = 2, R2 = 1; // объявляем переменные с плавающей точкой

  setlocale(LC_ALL, ""); // подключаем языки

  cout << "x"; // выводим x

  for (x = -7; x <= 3; x++) { // проходимся циклом и выводим координаты x
    cout << fixed << setw(5) << setprecision(1) << x;
  }

  cout << endl; // конец вывода x

  cout << "y"; // выводим y 

  for(x = -7; x <= 3; x++) { // проходимся циклом с условиями и выводим координаты y
    if(x >= -7 && x <= -6) {
      y = 1;
    } else if(x >= -6 && x <= -4) {
      y = -(x * 0.5) - 2;
    } else if(x >= -4 && x <= 0) {
      y = sqrt(pow(R1, 2) - pow(x + 2, 2));
    } else if(x >= 0 && x <= 2) {
      y = -sqrt(pow(R2, 2) - pow(x - 1, 2));
    } else if(x >= 2 && x <= 3) {
      y = -x + 2;
    }

    cout << fixed << setw(5) << setprecision(1) << y;
  }
  
  cout << endl; // конец вывода y

  return 0;
}