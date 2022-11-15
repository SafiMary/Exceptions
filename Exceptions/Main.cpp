#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;


double devide(double num1, double num2) {
	if (num2 == 0)
		//throw "обнаружено деление на ноль";
		//throw exception("обнаружено деление на ноль");
		throw invalid_argument("делить на ноль нельзя");
	return num1 / num2;
}
//Заполнение массива случайными значениями от begin до end
template <typename T>
void fill_arr(T arr[] , const int length, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}
//Вывод массива на экран( с исключениями)
template <typename T>
void show_arr(T arr[], const int length) {
	if (length <= 0)
		throw invalid_argument("обнаружена отрицательная длина массива");
	cout << '[';
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	//Классическая проверка (if... else)
	/*cout << "Введите начало диапазона: ";
	cin >> n;
	cout << "Введите конец диапазона: ";
	cin >> m;
	if (n < m)
		cout << "Все супер\n";
	else
		cout << "Ошибка ввода\n";*/
		//Обработка исключений
		/*try {
		cout << "Введите начало диапазона: ";
		cin >> n;
		cout << "Введите конец диапазона: ";
		cin >> m;
		if (n > m)
			throw 1;
		if (n == m)
			throw "Границы диапазона равны.";
		cout << "Все отлично!\n";
		}

		catch (const int& e) {
			if (e == 1)
				cout << "Начало диапазона больше конца диапазона.\n";
		}
		catch (const char*& e) {
			cout << "Ошибка:" << e << "\n";
		}*/
		//Обработка деления на ноль
		/*try {
			cout << "Введите два числа: \n";
		cin >> n >> m;
		cout << n << " / " << m << " = " <<
			devide(n, m) << '\n';
		}
		catch (const char* e) {
			cout << "Ошибка: " << e << '\n';
		}
		catch (const exception& ex) { //может ловить исключения любого типа
			cout << "Ошибка: " << ex.what() << '\n';//возвращает содержимое исключения
		}*/
	//Исключения при работе с файлами
		/*string path = "file.txt";

	ofstream out;
	out.exceptions(ios::badbit | ios::failbit | ios::eofbit);//включили исключения
	try {
	out.open(path);
	cout << "Файл открыт для записи.\n";
	out.close();
	}
	catch (const ios::failure& ex) {//работает с исключениями и выводит код ошибки
		cout << "Ошибка открытия файла: " << ex.what() << '\n';
		cout << "Код ошибки: " << ex.code().value() << '\n';//ex.code содержит  с сообщением и кодом
	}*/
	//Задача 1. Вывод массива на экран

	cout << "Задача 1.\n Массив: \n";
	const int size = 10;
	int arr[size];
	try {
	fill_arr(arr, size, 1, 11);
	show_arr(arr, -5);
	}
	catch (const exception& ex) {
		cout << "Ошибка: " << ex.what() << endl;
	}
	

	


	return 0;
}
