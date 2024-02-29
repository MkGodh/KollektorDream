#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int duty;
	string name;
	int sum;
	cout << "Введите имя должника: "; cin >> name;
	cout << "Ввведите сумму задолжености: "; cin >> duty;

	if (duty < 0) {
		cout << "Вы ввели неверное значени!"; exit(0);
	}


	while (duty != 0) {
		cout << name << " Тебе осталось выплатить: " << duty << " рублей." << "\n"; cout << "Дай денег лебовски : "; cin >> sum;
		duty -= sum;
		if (duty < 0) {
			int balance = 0;
			balance += duty * -1;
			cout << "Остаток на карте: " << balance << " Ваш долг погашен!"; break;
		}
	}

}