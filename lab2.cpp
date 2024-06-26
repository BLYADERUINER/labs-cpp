#include <iostream> // подключаем библиотеку ввод - вывод 
#include <cmath> // подключаем математическую библиотеку 

using namespace std; // создаем пространство имен std

int main() { // объявляем функцию
  double x, y, r; // объявляем переменные с плавающей точкой
  bool positiveArea, negativeArea; // объявляем булевые переменные 

  setlocale(LC_ALL, "Russian"); // подключаем язык

  for (int i = 0; i <= 10; i++) { // создаем цикл на 10 итераций
    cout << "Попытка номер " << i + 1 << endl; // выводим номер попытки

    cout << "Введите значение R" << endl;  // выводим сообщение R
    cin >> r; // ввод радиуса окружности

    cout << "Введите значение x" << endl; // выводим сообщение X
    cin >> x; // ввод x координаты

    cout << "Введите значение y" << endl; // выводим сообщение Y
    cin >> y; // ввод y координаты

    positiveArea = (y >= 0) && (x >= 0) && ((x * x) + (y * y) <= (r * r)) && (x <= y); // условие для положительного радиуса
    negativeArea = (y <= 0) && (x <= 0) && ((x * x) + (y * y) <= (r * r)) && (x >= y); // условие для отрицательного радиуса

    if (positiveArea || negativeArea) { // если вводимые параметры подходят условию
      cout << "Вы попали в мишень! \n" << endl; // выводим сообщение с попаданием
    } else { // иначе 
      cout << "Вы промахнулись :c \n" << endl; // выводим сообщение с промахом
    }
  }

  return 0; // выходим из функции
}