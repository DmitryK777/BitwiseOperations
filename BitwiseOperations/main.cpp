#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int firstVariable;
	int secondVariable;

	cout << "Введите первую переменную: "; cin >> firstVariable;
	cout << "Введите вторую переменную: "; cin >> secondVariable;
	cout << endl;

	cout << "Вы ввели: " << endl;
	cout << "first variable = " << firstVariable << " и " << "second variable = " << secondVariable << endl;
	cout << endl;

	firstVariable ^= secondVariable;
	secondVariable ^= firstVariable;
	firstVariable ^= secondVariable;

	cout << "Поменяли значения местами: " << endl;
	cout << "first variable = " << firstVariable << " и " << "second variable = " << secondVariable << endl;
	cout << endl;
}