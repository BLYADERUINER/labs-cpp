#include <iostream> // подключаем библиотеку ввода-вывода

using namespace std; // используем пространство имен std

int main() {
  int n, i; // количество элементов и счетчик
  float *arr; // указатель на массив
  float min, max; // минимальный и максимальный элементы
  float negative_sum = 0; // сумма отрицательных элементов
  long product_elements = 1; // произведение элементов

  setlocale(LC_ALL, "Russiаn"); // установка русского языка

  cout << "Введите количество элементов в массиве: ";
  cin >> n; // ввод количество элементов массива

  arr = new float[n]; // выделяем память под массив

  cout << "Введите элементы массива в количествe: " << n << endl;

  for (i = 0; i < n; i++) { // проходимся циклом по элементам массива в размере n
    cin >> arr[i]; // ввод элементов массива
  }

  // вычисляем сумму отрицательных элементов
  for (i = 0; i < n; i++) { // проходимся циклом по элементам массива
    if (arr[i] < 0) { // если элемент отрицательный
      negative_sum += arr[i]; // добавить его к сумме отрицательных элементов
    }
  }

  cout << "Сумма отрицательных элементов: " << negative_sum << endl;

  // находим максимальный и минимальный элементы массива
  min = arr[0]; // минимальный элемент
  max = arr[0]; // максимальный элемент

  for (i = 1; i < n; i++) { // проходимся циклом по элементам массива начиная с 1
    if (arr[i] < min) { // если элемент меньше текущего минимального
      min = arr[i]; // обновляем минимальный элемент
    }
    if (arr[i] > max) { // если элемент больше текущего максимального
      max = arr[i]; // обновляем максимальный элемент
    }
  }

  // находим произведение элементов массива между максимальным и минимальным элементами
  for (i = 0; i < n; i++) { // проходимся циклом по элементам массива
    if (arr[i] != max && arr[i] != min) { // если элемент не равен максимальному и минимальному
      product_elements *= arr[i];  // произведение на текущий элемент
    }
  }

  cout << "Произведение элементов массива между максимальным и минимальным элементами: " << product_elements << endl;

  // сортировка массива
  for (i = 0; i < n - 1; i++) { // проходимся циклом по элементам массива
    for (int j = 0; j < n - i - 1; j++) { 
      if (arr[j] > arr[j + 1]) { // если текущий элемент больше следующего
        int temp = arr[j]; // обменять их местами
        arr[j] = arr[j + 1]; // текущий элемент становится следующим
        arr[j + 1] = temp; // следующий элемент становится текущим
      }
    }
  }

  cout << "Элементы массива в порядке возрастания: ";
  for (i = 0; i < n; i++) { // проходимся циклом по элементам массива
    cout << " " << arr[i]; // вывод элемента
  }
  cout << endl;

  return 0;
}