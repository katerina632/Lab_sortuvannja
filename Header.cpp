#include "Header.h"
#include<iostream>
#include<ctime>
#include <time.h>

using namespace std;

void randomArr(int* arr, int size, int d1, int d2)
{
	
	d2 = d2 - d1 + 1;
	for (int i = 0; i < size; i++) {
		arr[i] =d1+rand()%d2;
	}

}

void showArr(int* arr, int size)
{
	for (int i = 0; i < size; i++) {		
			cout << arr[i] << "\t";
			if (i % 10 == 0 && i!=0) {
				cout << endl;
			}
			//continue;
	}
	cout << endl;
}

int Serednje(int* arr, int size)
{
	double sum = 0;
	double ser = 0;

	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	ser = sum / size;
	return ser;
}

int Kratne5(int* arr, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 5 == 0) {
			count++;
		}
	}
	return count;
}

void SearchElement(int* arr, int size, int Search)
{
	int count = 0;
	bool isExist = false;
	
	cout << "Vy shucaly element - " << Search <<" \nJogo posycij - ";
	
	for (int i = 0; i < size; i++) {
		if (arr[i] == Search) {
			cout << i + 1 << ", ";
			count++;
		}
		
		else if(count==0 && i==size-1) {
			isExist = true;
		}
	}
	if (isExist == true) {
		cout << "Takogo elementu ne isnuje!" << endl;
	}		
}

void ZbilBubbl(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size-1; j++) {
				if (arr[j] > arr[j+1]) {
					int temp = arr[j]; 
					arr[j] = arr[j + 1];
					arr[j + 1] = temp; 
				}
			}
		}
}

void ZbilVstavka(int* arr, int size)
{
	int temp = 0;
	int indexPrev = 0;

	for (int i = 1; i < size; i++) { 
		temp = arr[i]; 
		indexPrev = i - 1; 
		while (indexPrev >= 0 && arr[indexPrev] > temp) { 
		
			arr[indexPrev + 1] = arr[indexPrev];
			arr[indexPrev] = temp;
			indexPrev--;
		}
	}
}

void ZbilVubirka(int* arr, int size)
{
	 for (int i = 0; i < size; i++) {
			int temp = arr[0];
			for (int j = i+1; j < size; j++) {
				if (arr[i]>arr[j]) {
					temp = arr[i]; 
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}	
		}
}

void ZmenshBubbl(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	
}

void ZmenshVstavka(int* arr, int size)
{
	int temp = 0;
	int indexPrev = 0;

	for (int i = 1; i < size; i++) {
		temp = arr[i];
		indexPrev = i - 1;
		while (indexPrev  >=0 && arr[indexPrev] < temp) {

			arr[indexPrev + 1] = arr[indexPrev];
			arr[indexPrev] = temp;
			indexPrev--;
		}
	}
}

void ZmenshVubirka(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		int temp = arr[0];
		for (int j = i + 1; j < size; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

