#include <iostream> // подключаем библиотеку ввод - вывод
#include <string> // подключаем библиотеку строк

using namespace std; // используем пространство имен std

int main() {
	string input_string; // строка ввода
	string digits; // строка цифр
	string letters; // строка букв
	string result; // результат

	setlocale(LC_ALL, "Russian"); // подключаем язык
  
	cout << "Введите строку, состоящую из алфавитно-цифровых символов: "; // вводим строку
	cin >> input_string;

	// проходимся циклом по каждому символу в введенной строке
	for (char symbol : input_string) {
		// Если символ является цифрой, то добавляем его в строку digits
		if (isdigit(symbol)) {
			digits += symbol;
		} 
		// Иначе, если символ не является цифрой, то добавляем его в строку letters
		else {
			letters += symbol;
		}
	}

	// объединяем строки digits и letters
	result = digits + letters;

	cout << "Результат: " << result << endl; // выводим результат

	return 0;
}