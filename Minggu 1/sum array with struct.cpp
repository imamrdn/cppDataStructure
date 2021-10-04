#include <iostream>
#include <sstream>
using namespace std;

int ubahInt(char x){
	int c;

	stringstream obj;
	obj << x;
	obj >> c;

	return c;
}

int main(){
	int A, B;
	
	cout<<"-- A : "; cin>>A;
	cout<<"-- B : "; cin>>B;
	
	//ubah ke string
	string aString;
	string bString;
	
	stringstream as;
	as << A;
	as >> aString;
	
	stringstream bs;
	bs << B;
	bs >> bString;
	
	//simpan ke array
	int arrA[20], arrB[20], arrC[20], save[20];
	int panjangArrA = aString.length();
	int panjangArrB = bString.length();
	
	cout<<endl;
	cout<<"Array A = ";
	for(int i=0; i < panjangArrA; i++){
		arrA[i] = ubahInt(aString[i]);
		cout<<arrA[i]<<" ";
	}
	
	cout<<endl;
	cout<<"Array B = ";
	for(int i=0; i < panjangArrB; i++){
		arrB[i] = ubahInt(bString[i]);
		cout<<arrB[i]<<" ";
	}
	
	cout<<endl;
	
	for (int i = panjangArrA - 1; i>=0; i--){
		arrA[i];
		arrB[i];
		arrC[i] = (arrA[i] + arrB[i])%10;
		
		if ((arrA[i]+arrB[i])/10 == 1){
			A+=1;
		} 
		
	}
	
	cout<<"Array C = ";
	for(int i=0; i < panjangArrA; i++){
		arrC[i] = arrA[i]+arrB[i];
		if(arrC[i]>9){
			arrC[i]-=10;
			arrC[i] = arrC[i] + 1;
		}
		cout<<arrC[i]<<" ";
	}
	
	
	
	
}
