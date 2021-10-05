#include <iostream>
#include <conio.h>
using namespace std;
//coba pakai const

void kurang_satu(int A[], int n){
	for (int i=0; i<n; i++){
		A[i]--;
	}
}

void cetak_array(int A[], int n){
	for (int i=0; i<n; i++){
		cout<<"Nilai indeks ke-["<<i<<"] adalah "<<A[i]<<endl;
	}
	getch();
}

int main(){
	int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = 10;
	cout<<"Nilai array asal : "<<endl;
	cetak_array(A, n);
	kurang_satu(A, n);
	cout<<"\nSetelah dikurangi 1 menjadi : "<<endl;
	cetak_array(A, n);
}
