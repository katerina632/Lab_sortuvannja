#include<iostream>
#include<string>
#include<ctime>
#include "Header.h"
#include <time.h>

using namespace std;

int main() {

	srand(time(0));

	const int size = 100;
	int arr[size];
	int action1=0, action2=0, action3=0;
	int diapazon1=0, diapazon2=0;
	int Element;

	do {
	cout << "1. Zapovnyty masyv " << endl;
	cout << "2. Vyvesty masyv na ekran" << endl;
	cout << "3. Znajty element" << endl;
	cout << "4. Sortyvannja masyvu.. " << endl;
	cout << "5. Pokazaty serednje znachennja elementiv. " << endl;
	cout << "6. Znajty kil'kisst' elementiv, kratnyh 5 " << endl;
	cout << "7. Exit " << endl << endl;

	cout << "Vvedit'diju->_ ";
	cin >> action1;
	cout << endl;

	switch (action1) {
	case 1:
		cout << "Vvedit' diapazon chysel cherez probil, dlja randomnogo zapovnennja masyvu->_ ";
		cin >> diapazon1;
		cin >> diapazon2;
		randomArr(arr, size, diapazon1, diapazon2);
		cout << "Masyv uspishno zapovneno!" << endl;
		cout << endl;
		break;
	case 2:
		showArr(arr, size);
		cout << endl;
		break;
	case 3:
		cout << " Vvedit' element, jakyj neobhidno znajty->_ ";
		cin >> Element;
		cout << endl;
		SearchElement(arr, size, Element);
		cout << endl << endl;

		break;
	case 4:

		do {
			cout << "1. Po zrostannju" << endl;
			cout << "2. Po spadannjuannju" << endl;
			cout << "3. Povernytys' do poperedn'ogo meny " << endl;

			cout << "Vvedit'diju->_ ";
			cin >> action2;
			cout << endl;

			switch (action2) {
			case 1:

				do {
					cout << "1. Metodom bul'bashka" << endl;
					cout << "2. Metodom vstavky" << endl;
					cout << "3. Metodom vybirky" << endl;
					cout << "4. Povernytys' do poperedn'ogo meny " << endl;

					cout << "Vvedit'diju->_ ";
					cin >> action3;
					cout << endl;

					switch (action3) {
					case 1:
						ZbilBubbl(arr, size);
						cout << "Masyv uspishno vidsortovano!" << endl;
						cout << endl;
						break;
					case 2:
						ZbilVstavka(arr, size);
						cout << "Masyv uspishno vidsortovano!" << endl;
						cout << endl;
						break;
					case 3:
						ZbilVubirka(arr, size);
						cout << "Masyv uspishno vidsortovano!" << endl;
						cout << endl;
						break;
					case 4:
						break;
					default:
						cout << "Error!" << endl;
					}

				} while (action3 != 4);

				break;
			case 2:
				do {
					cout << "1. Metodom bul'bashka" << endl;
					cout << "2. Metodom vstavky" << endl;
					cout << "3. Metodom vybirky" << endl;
					cout << "4. Povernytys' do poperedn'ogo meny " << endl;

					cout << "Vvedit'diju->_ ";
					cin >> action3;
					cout << endl;

					switch (action3) {
					case 1:
						ZmenshBubbl(arr, size);
						cout << "Masyv uspishno vidsortovano!" << endl;
						cout << endl;
						break;
					case 2:
						ZmenshVstavka(arr, size);
						cout << "Masyv uspishno vidsortovano!" << endl;
						cout << endl;
						break;
					case 3:
						ZmenshVubirka(arr, size);
						cout << "Masyv uspishno vidsortovano!" << endl;
						cout << endl;
						break;
					case 4:
						break;
					default:
						cout << "Error!" << endl;
					}

				} while (action3 != 4);

				break;
				break;
			case 3:
				break;
			default:
				cout << "Error!" << endl;
			}

		} while (action2 != 3);


		break;
	case 5:
		cout << "Serednje znachennja elementiv masyvu = " << Serednje(arr, size) << endl;
		cout << endl;
		break;
	case 6:
		cout << "Kil'kist' elementiv, kratnyh 5 = " << Kratne5(arr, size) << endl;
		cout << endl;
		break;
	case 7:
		cout << "Bye" << endl;
		break;
	default:
		cout << "Error!" << endl;
	}

	} while (action1 != 7);

	





	system("pause");
	return 0;
}