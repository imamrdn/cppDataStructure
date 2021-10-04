#include <iostream>
#include <sstream>
using namespace std;

struct sumOperation{
	int a, b, index;;
	int arrA[20], arrB[20], arrC[20];

	string aString, bString;
};

string changeStr(int a){
	string str;

	stringstream obj;
	obj << a;
	obj >> str;

	return str;
}

int changeInt(char a){
	int c;
	stringstream obj;
	obj << a;
	obj >> c;

	return c;
}

int main(){
	sumOperation sum;
	cout<<"Penjumlahan Array\n";
	cout<<"=================\n";
	cout<<"Data A: "; cin >> sum.a;
	cout<<"Data B: "; cin >> sum.b;
	
	sum.index = 0;
	sum.aString = changeStr(sum.a);
	sum.bString = changeStr(sum.b);

	int lenghtA = sum.aString.length();
	int lenghtB = sum.bString.length();
	
	cout<<"\nArray A = ";
	for (int i=0; i<lenghtA; i++) {
		sum.arrA[i] = changeInt(sum.aString[i]);
		cout<<sum.arrA[i]<<" ";
	}

	cout<<"\nArray B = ";
	for (int i=0; i<lenghtB; ++i) {
		sum.arrB[i] = changeInt(sum.bString[i]);
		cout<<sum.arrB[i]<<" ";
	}


	if (lenghtA >= lenghtB) {
		for (int i = lenghtA-1; i >= 0; i--) {
			if (lenghtB >= 1){
				sum.arrC[sum.index] = sum.arrA[i] + sum.arrB[lenghtB-1];
				lenghtB--;
				sum.index++;
			} else {
				sum.arrC[sum.index] = sum.arrA[i];
				sum.index++;
			}
		}
		cout << endl;
	}

	for (int i = 0; i < sum.index; i++) {
		if (sum.arrC[i] > 9) {
			sum.arrC[i+1] = sum.arrC[i+1] + 1;
			sum.arrC[i] = sum.arrC[i]-10;
		}
	}

	cout <<"\nHasil = ";
	for (int i = sum.index-1; i>=0; i--) {
		cout << sum.arrC[i] << " ";
	}
	cout << endl;

	return 0;
}
