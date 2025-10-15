#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	int var1;
	while (true) {
		cout << "Вывод фигур\n1 - Фигура 1\n2 - Фигура 2\n3 - Фигура 3\n4 - Фигура 4\n5 - Фигура 5\n";
		cout << "6 - Фигура 6\n7 - Фигура 7\n8 - Фигура 8\n9 - Фигура 9\n10 - Фигура 10\n11 - Выход\n";
		cout << "Введите ваш выбор: ";
		cin >> var1;

		if (var1 == 1) {
			for (int i = 0; i <= 10; i++) {
				for (int j = 0; j <= 10; j++) {
					if (i <= 10 && (j > i)) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		else if (var1 == 2) {
			for (int i = 0; i <= 10; i++) {
				for (int j = 0; j <= 10; j++) {
					if (i <= 10 && (j < i)) {
						cout << "*";
					}
				}
				cout << endl;
			}
		}
		else if (var1 == 3) {
			for (int i = 0; i <= 10; i++) {
				for (int j = 0; j <= 10; j++) {
					if ((i < j) && i + j <= 10) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		else if (var1 == 4) {
			for (int i = 0; i <= 10; i++) {
				for (int j = 0; j <= 10; j++) {
					if ((i > j) && i + j >= 10) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		else if (var1 == 5) {
			for (int i = 0; i <= 10; i++) {
				for (int j = 0; j <= 10; j++) {
					if (((i < j) && i + j <= 10) || ((i > j) && i + j >= 10)) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}

		else if (var1 == 6) {
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					if (j <= i && j <= 10 - i - 1) {
						cout << "*";
					}
					else if (j >= i && j >= 10 - i - 1) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}

		else if (var1 == 7) {
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					if (j <= i && j <= 10 - i - 1) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}

		else if (var1 == 8) {
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					if (j >= i && j >= 10 - i - 1) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}

		else if (var1 == 9) {
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					if (j <= 10 - i - 1) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}

		else if (var1 == 10) {
			for (int i = 0; i < 10; i++) {
				for (int j = 0; j < 10; j++) {
					if (j >= 10 - i - 1) {
						cout << "*";
					}
					else {
						cout << " ";
					}
				}
				cout << endl;
			}
		}
		else if (var1 == 11) {
			cout << "До встречи!";
			break;
		}

		else {
			cout << "Неправильный выбор! Введите число от 1 до 10";
		}
	}
	

	return 0;
}