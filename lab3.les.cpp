#include <iostream> // подключаем библиотеку ввод - вывод
#include <iomanip> // подключаем библиотеку модификаторов

using namespace std; // создаем пространство имен std

int main() // объявляем функцию
{
  double x, y, r; // объявляем переменные с плавающей точкой

  setlocale(LC_ALL, ""); // подключаем языки

  cout << "x"; // выводим x

  for (x = -2; x <= 2; x++) { // проходимся циклом и выводим координаты x
    cout << fixed << setw(5) << setprecision(1) << x;
  }

  cout << endl; // конец вывода x

  cout << "y"; // выводим y 

  for(x = -2; x <= 2; x++) { // проходимся циклом с условиями и выводим координаты y
    if(x < -2) {
      y = 0;
    } else if(x >= -2 && x < -1) {
      y = -x - 2;
    } else if(x >= -1 && x < 1) {
      y = x;
    } else if(x >= 1 && x < 2 ) {
      y = -x + 2;
    } else if(x >= 2) {
      y = 0;
    }

    cout << fixed << setw(5) << setprecision(1) << y;
  }

  cout << endl; // конец вывода y

  return 0;
}