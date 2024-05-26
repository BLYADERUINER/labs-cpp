#include <iostream> // подключаем библиотеку ввод - вывод
#include <string> // подключаем библиотеку строк

using namespace std; // используем пространство имен std

struct Student { // создаем структуру студент
  string name; // фамилия и инициалы студента
  int group; // группа студента
  int session[5]; // массив оценок
  
  double averageScore() const { // метод вычисляющий среднюю оценку
    int sum = 0; // сумма оценок
    
    for (int i = 0; i < 5; i++) { // проходимся циклом по оценкам
      sum += session[i]; // суммируем оценки
    }

    return static_cast<double>(sum) / 5; // возвращаем среднюю оценку приводя к типу double
  }
};

void sortStudentsByGroup(Student arr[], int student_num) { // функция сортировки по группе
  for (int i = 0; i < student_num - 1; i++) { // проходимся циклом по студентам
    for (int j = 0; j < student_num - i - 1; j++) { 
      if (arr[j].group > arr[j + 1].group) { // сравниваем группы студентов
        Student temp = arr[j]; // меняем местами группы студентов
        arr[j] = arr[j + 1]; // текущий элемент становится следующим
        arr[j + 1] = temp; // следующий элемент становится текущим
      }
    }
  }
}

int main() {
  int student_num; // количество студентов
  bool student_found = false; // флаг наличия студентов со средним баллом больше 4.0

  setlocale(LC_ALL, "Russian"); // подключаем язык

  cout << "Введите количество студентов: " << endl;
  cin >> student_num; // вводим количество студентов

  Student data[student_num]; // массив студентов

  for (int i = 0; i < student_num; i++) {
    cout << "Студент №" << i + 1 << endl; // выводим номер студента
    cout << "Введите фамилию и инициалы студента: " << endl;
    cin >> data[i].name; // вводим фамилию и инициалы

    cout << "Введите группу студента: " << endl;
    cin >> data[i].group; // вводим группу

    cout << "Введите 5 оценок студента: " << endl;
    for (int j = 0; j < 5; j++) { // проходимся циклом по оценкам
      cin >> data[i].session[j]; // вводим оценки
    }

    cout << endl;
  }

  sortStudentsByGroup(data, student_num); // сортируем студентов по группе

  for (int i = 0; i < student_num; i++) { // проходимся циклом по студентам
    if (data[i].averageScore() > 4.0) { // сравниваем средний балл
      cout << "Студент: " << data[i].name << ", Группа: " << data[i].group << endl; // выводим студентов со средним баллом больше 4.0
      student_found = true; // устанавливаем флаг наличия студентов со средним баллом больше 4.0
    }
  }

  if (!student_found) { // если флаг не установлен
    cout << "Нет студентов со средним баллом больше 4.0" << endl;
  }

  return 0;
}