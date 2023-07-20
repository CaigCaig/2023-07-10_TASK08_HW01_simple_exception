#include <iostream>
#include <Windows.h>
#include <string>
#include "funcs.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int forbidden_length = 0;
	int len = 0;
	string str;
	cout << "Введите запретную длину: ";
	cin >> forbidden_length;

	try {
		while (1) {
			cout << "Введите слово: ";
			cin >> str;
			cout << "Длина слова \"" << str << "\" равна " << function(str, forbidden_length) << endl;
		}
	}
	catch(const char* err) {
		cout << "Вы ввели слово запретной длины! До свидания" << endl;
	}
	
	system("pause");
}