#include <iostream> // подключаем библиотеку ввод - вывод
#include <iomanip> // подключаем библиотеку модификаторов
#include <cmath> // подключаем математическую библиотеку

using namespace std; // создаем пространство имен std

int main() { // объявляем функцию
  double x, y, r = 3; // объявляем переменные с плавающей точкой

  cout << "x:"; // выводим x

  for (x = -9; x <= 9; x++) { // проходимся циклом и выводим координаты x
    cout << fixed << setw(5) << setprecision(1) << x;
  }

  cout << endl; // конец вывода x

  cout << "y:"; // выводим y 

  for(x = -9; x <= 9; x++) { // проходимся циклом с условиями и выводим координаты y
    if(x >= -9 && x <= -6) {
      y = -(sqrt(pow(r, 2) - pow(x + 6, 2)));
    } else if(x >= -6 && x <= -3) {
      y = x + 3;
    } else if(x >= -3 && x <= 0) {
      y = sqrt(pow(r, 2) - pow(x, 2));
    } else if(x >= 0 && x <= 3) {
      y = -x + 3;
    } else if(x >= 3 && x <= 9) {
      y = (x * 0.5) - 1.5;
    }

    cout << fixed << setw(5) << setprecision(1) << y;
  }
  
  cout << endl; // конец вывода y

  return 0;
}