#include <iostream> // подключаем библиотеку ввод - вывод
#include <iomanip> // подключаем библиотеку модификаторов
#include <cmath> // подключаем математическую библиотеку

using namespace std; // создаем пространство имен std

int main() {
  double x, b, a, y = 0; // объявляем переменные
  int n, i = 0;
  
  setlocale(LC_ALL, "Russian"); // подключаем язык

  cout << "Введите X" << endl;
  cin >> x; // ввод X

  cout << "Введите N" << endl;
  cin >> n; // ввод N

  a = sin(x); // присваиваем sin x
  b = sqrt(2); // присваиваем √ 2

  do { // объявляем цикл
    i++; // с итерацией +1

    y = y + ( a / b ); // результат = прошлое значение + sin x / √ 2  

    a = sin(a); // sin sin x
    b = sqrt((2 + i) + b); // (√2 + i) + √ 2

  } while (i < n);

  cout << "y = " << setprecision(5) << y << "\n\n"; // вывод результата

  return 0;
}