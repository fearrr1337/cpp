#include <iostream>
#include <string>
#include <format>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");


	//int count = 0;

	//while (count <= 5) {
	//	cout << count << endl;
	//	count++;
	//}

	//cout << "-------" << endl;

	//for (int i = 0; i <= 5; i++) {
	//	cout << i << endl;
	//}

	//cout << "-------" << endl;

	//int i = 0;
	//for (; i <= 5; i++) {
	//	cout << i << endl;
	//}

	//cout << "-------" << endl;

	//int i = 0;
	//for (;;) {
	//	if (i >= 5)
	//		break;
	//	cout << i << endl;
	//	i++;
	//}

	// 1

	//int var1, var2;
	//cout << "������� ������ ���������: ";
	//cin >> var1;
	//cout << "������� ����� ���������: ";
	//cin >> var2;

	//for (;;) {
	//	int var3;
	//	cout << "������� ����� �������� � ��������: " << endl;
	//	cin >> var3;
	//	if (var3 >= var1 && var3 <= var2) {
	//		cout << "����� ������ � ��������!\n";
	//		break;
	//	}
	//	else {
	//		cout << "����� �� ������ � �������! ������� ����� ��� ���!\n";
	//	}
	//}

	// 2

	int redAmount = 20;
	int redPrice = 400;
	string redBalls = format("�������: ������� ���������� ������      ����: {}    ����������: {}\n", redPrice, redAmount);

	int blueAmount = 16;
	int bluePrice = 500;
	string blueBalls = format("�������: ����� ���������� ������       ����: {}    ����������: {}\n", bluePrice, blueAmount);

	int greenAmount = 26;
	int greenPrice = 600;
	string greenBalls = format("�������: ������� ���������� ������    ����: {}    ����������: {}\n", greenPrice, greenAmount);

	int threeAmount = 8;
	int threePrice = 7000;
	string threeBalls = format("�������: ���������� ����              ����: {}    ����������: {}\n", threePrice, threeAmount);

	string positions = format("�������:\n1 - {}\n2 - {}\n3 - {}\n4 - {}\n", redBalls, blueBalls, greenBalls, threeBalls);
	int sum = 0, mainSum = 0;
	int clientAmountRed = 0, clientAmountBlue = 0, clientAmountGreen = 0, clientAmountThree = 0;


	for (;;) {
		for (;;) {
			if (redAmount == 0 && blueAmount == 0 && greenAmount == 0 && threeAmount == 0) {
				cout << "������ �� �������� � �������!";
				break;
			}
			else {
				string redBalls = format("�������: ������� ���������� ������      ����: {}    ����������: {}\n", redPrice, redAmount);
				string blueBalls = format("�������: ����� ���������� ������       ����: {}    ����������: {}\n", bluePrice, blueAmount);
				string greenBalls = format("�������: ������� ���������� ������    ����: {}    ����������: {}\n", greenPrice, greenAmount);
				string threeBalls = format("�������: ���������� ����              ����: {}    ����������: {}\n", threePrice, threeAmount);
				string positions = format("�������:\n1 - {}\n2 - {}\n3 - {}\n4 - {}\n5 - �����\n", redBalls, blueBalls, greenBalls, threeBalls);
				int var1, amount;
				cout << positions;
				cout << "������� �������: ";
				cin >> var1;
				if (var1 == 1) {
					if (redAmount == 0) {
						cout << "������� ������� ���� � �������! �������� ������ �����!\n";
					}
					else {
						while (true) {
							cout << redBalls;
							cout << "������� �����������: ";
							cin >> amount;
							if (amount > 0 && amount <= redAmount) {
								redAmount -= amount;
								sum += amount * 400;
								clientAmountRed += amount;
								break;
							}
							else {
								cout << "������� ������������ �����������! ������� ������!\n";
							}
						}
					}

				}
				else if (var1 == 2) {
					if (blueAmount == 0) {
						cout << "����� ������� ���� � �������! �������� ������ �����!\n";
					}
					else {
						while (true) {
							cout << blueBalls;
							cout << "������� �����������: ";
							cin >> amount;
							if (amount > 0 && amount <= blueAmount) {
								blueAmount -= amount;
								sum += amount * 500;
								clientAmountBlue += amount;
								break;
							}
							else {
								cout << "������� ������������ �����������! ������� ������!\n";
							}
						}
					}
				}
				else if (var1 == 3) {
					if (greenAmount == 0) {
						cout << "������� ������� ���� � �������! �������� ������ �����!\n";
					}
					else {
						while (true) {
							cout << greenBalls;
							cout << "������� �����������: ";
							cin >> amount;
							if (amount > 0 && amount <= greenAmount) {
								greenAmount -= amount;
								sum += amount * 600;
								clientAmountGreen += amount;
								break;
							}
							else {
								cout << "������� ������������ �����������! ������� ������!\n";
							}
						}
					}
				}
				else if (var1 == 4) {
					if (threeAmount == 0) {
						cout << "������� ������� ���� � �������! �������� ������ �����!\n";
					}
					else {
						while (true) {
							cout << threeBalls;
							cout << "������� �����������: ";
							cin >> amount;
							if (amount > 0 && amount <= threeAmount) {
								threeAmount -= amount;
								sum += amount * 7000;
								clientAmountThree += amount;
								break;
							}
							else {
								cout << "������� ������������ �����������! ������� ������!\n";
							}
						}
					}
				}
				else if (var1 == 5) {
					break;
				}
			}
			

		}
		cout << "���: " << endl;
		cout << "�������:\t\t����������:\t\t����\t\t\n";
		if (clientAmountRed != 0) {
			cout << "������� ������\t\t" << clientAmountRed << "\t\t\t" << clientAmountRed * 400 << endl;
		}
		if (clientAmountBlue != 0) {
			cout << "����� ������\t\t" << clientAmountBlue << "\t\t\t" << clientAmountBlue * 500 << endl;
		}
		if (clientAmountGreen != 0) {
			cout << "������� ������\t\t" << clientAmountGreen << "\t\t\t" << clientAmountGreen * 600 << endl;
		}
		if (clientAmountThree != 0) {
			cout << "���������� ����\t\t" << clientAmountThree << "\t\t\t" << clientAmountThree * 7000 << endl;
		}
		mainSum += sum;
		cout << "����� �����: " << sum << endl;
		int var3;

		sum = 0;
		clientAmountThree = 0;
		clientAmountRed = 0;
		clientAmountBlue = 0;
		clientAmountGreen = 0;



		cout << "��������� �����: \n1 - ��\n2 - �����";
		cin >> var3;
		while (true)
		{
			if (var3 == 1 || var3 == 2)
				break;
			cout << "��������� �����: \n1 - ��\n2 - �����";
			cin >> var3;
		}


		if (var3 == 2) {
			cout << "����� ������� �������� �������: " << mainSum << endl;
			break;
		}
	}

	
	

	return 0;
}