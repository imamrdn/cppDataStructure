#include <iostream>
#include <sstream>
#include <conio.h>
using namespace std;

struct pengurangan{
	int a, b;
    int arrA[20], arrB[20];
	string stringA, stringB;
};

string ubahString(int a) {
	string str;
	stringstream obj;
	obj << a;
	obj >> str;

	return str;
}

int ubahInt(char a) {
	int i;
	stringstream obj;
	obj << a;
	obj >> i;

	return i;
}

int main() {
    pengurangan kurang;
    cout << "Pengurangan\n";
	cout << "Masukkan nilai A : "; cin >> kurang.a;
	cout << "Masukkan nilai B : "; cin >> kurang.b;

	kurang.stringA = ubahString(kurang.a);
	kurang.stringB = ubahString(kurang.b);

	int panjangA = kurang.stringA.length();
	int panjangB = kurang.stringB.length();

	for (int i = 0; i < panjangA; i++) {
		kurang.arrA[i] = ubahInt(kurang.stringA[i]);
	}

	for (int i = 0; i < panjangB; ++i) {
		kurang.arrB[i] = ubahInt(kurang.stringB[i]);
	}

	int hasil[20];
	int index = 0;

	if (panjangA >= panjangB) {
		for (int i = panjangA-1; i >= 0; i--) {
			if (panjangB >= 1) {
				hasil[index] = kurang.arrA[i] - kurang.arrB[panjangB-1];
				panjangB--;
				index++;
			} else {
				hasil[index] = kurang.arrA[i];
				index++;
			}
		}
		cout << endl;
	}

	for (int i = 0; i < index; i++) {
		if (hasil[i] < 0) {
			hasil[i + 1] = hasil[i + 1] - 1;
			hasil[i] = hasil[i] + 10;
		}
	}

	cout << "Hasilnya adalah = ";
	for (int i = index-1; i >= 0; i--) {
		cout << hasil[i] << " ";
	}
	cout << endl;

    getch();
	return 0;
}