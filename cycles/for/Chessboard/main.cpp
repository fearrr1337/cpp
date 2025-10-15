#include <iostream>
#include <string>
using namespace std;


int main() {
	setlocale(LC_ALL, "RUS");

	string white = "-";
	string black = "*";
	int var1;
	cout << "¬ведите ширину клетки доски: ";
	cin >> var1;

	for (int i = 0; i <= 8; i++) {
		for (int j = 0; j <= 8; j++)
			if (i % 2 == 0) {
				for (int k = 0; k < var1; k++) {
					cout << black;
				}
				for (int v = 0; v < var1; v++) {
					cout << white;
				}
			}
			else {
				for (int k = 0; k < var1; k++) {
					cout << white;
				}
				for (int v = 0; v < var1; v++) {
					cout << black;
				}
			}
		cout << endl;
	}
}