#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	






	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			if (i >= 0 && i < 3 && (i <= 12)) {
				cout << "****";
			}
			else if (i >= 4 && (j == 7 || j == 8) ) {
				cout << "|===|";
			}
			else if (i > j && i+j > 9) {
				cout << "|___|";
			}
			else {
				cout << "     ";
			}
				
		}
		cout << endl;
	}

	for (int i = 0; i <= 7; i++) {
		for (int j = 0; j < 10; j++) {
		
			if ((i >= 3 && i <= 5 && (j == 2 || j == 3)) || (i >= 3 && i <= 5 && (j == 6 || j == 7)))
				cout << "|   |";
			else
				cout << "|###|";
		
		}

		cout << endl;
	}

	for (int i = 0; i <= 7; i++) {
		for (int j = 0; j < 10; j++) {
			if (i >= 3 && i <= 5 && (j == 2 || j == 3))
				cout << "|   |";
			else if (i >= 3 && i <= 7 && (j == 6 || j == 7))
				cout << "     ";
			else
				cout << "|###|";
		}
		cout << endl;
	}


		
	


	return 0;
}