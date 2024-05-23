#include <iostream> // подключаем библиотеку ввода-вывода
#include <algorithm> // подключаем библиотеку алгоритмов

using namespace std; // используем пространство имен std

int main() {
  int n, i; // количество элементов и счетчик
  float *arr; // указатель на массив
  float min, max; // минимальный и максимальный элементы
  float negative_sum = 0; // сумма отрицательных элементов
  float product_elements = 1; // произведение элементов

  setlocale(LC_ALL, "Russiаn"); // установка русского языка

  cout << "Введите количество элементов в массиве: "; // ввод количество элементов массива
  cin >> n;

  arr = new float[n]; // выделяем память под массив

  cout << "Введите элементы массива в количествe: " << n << endl; // ввод элементов массива

  for (i = 0; i < n; i++) { // для каждого элемента массива в размере n
    cin >> arr[i];
  }

  // вычисляем сумму отрицательных элементов
  for (i = 0; i < n; i++) { // для каждого элемента массива в размере n
    if (arr[i] < 0) { // если элемент отрицательный
      negative_sum += arr[i]; // добавить его к сумме отрицательных элементов
    }
  }

  cout << "Сумма отрицательных элементов: " << negative_sum << endl; // вывод суммы отрицательных элементов

  // находим максимальный и минимальный элементы массива
  max = *max_element(arr, arr + n); // максимальный элемент
  min = *min_element(arr, arr + n); // минимальный элемент

  // находим произведение элементов массива между максимальным и минимальным элементами
  for (i = 0; i < n; i++) { // для каждого элемента массива в размере n
    if (arr[i] == max) { // если элемент равен максимальному
      while (arr[i] != min) { // пока элемент не равен минимальному
        i++; // увеличиваем счетчик
        product_elements *= arr[i]; // умножаем на текущий элемент
      }

      break; // выход из цикла
    } else if (arr[i] == min) { // если элемент равен минимальному
      while (arr[i] != max) { // пока элемент не равен максимальному
        i++; // увеличиваем счетчик
        product_elements *= arr[i]; // умножить на текущий элемент
      }

      break; // выход из цикла
    }
  }

  // вывод произведения элементов
  cout << "Произведение элементов массива между максимальным и минимальным элементами: " << product_elements << endl;

  sort(arr, arr + n); // сортировка массива по возрастанию

  cout << "Элементы массива в порядке возрастания: "; // вывод отсортированного массива
  for (i = 0; i < n; i++) { // для каждого элемента массива в размере n
    cout << " " << arr[i]; // вывод элемента
  }
  cout << endl;

  return 0;
};