#include <iostream>
#include <conio.h>
using namespace std;

class MyArray	{
	friend ostream& operator <<(ostream&, const MyArray&);
	
	public:
		MyArray(int n=10);
		void kurang_satu();
		void cetak_array();
	
	private:
		int n;
		int A[10];
};

ostream& operator <<(ostream& output, const MyArray& Mine) {
	for (int i=0; i<Mine.n; i++){
		output<<"Nilai indeks ke-["<<i<<"] adalah "<<Mine.A[i]<<endl;
	}
	getch();
	return output;
}

MyArray::MyArray(int ukuran){
	n = 10;
	for (int i=0; i<n; i++){
		A[i] = i+1;
	}
}

void MyArray::kurang_satu(){
	for (int i=0; i<n; i++){
		A[i]--;
	}
}

void MyArray::cetak_array(){
	for (int i=0; i<n; i++){
		cout<<"Nilai indeks ke-["<<i<<"] adalah "<<A[i]<<endl;
	}
	getch();
}

int main(){
	MyArray x;
	cout<<"Nilai array asal : "<<endl;
	x.cetak_array();
	cout<<"\nPakai operator overloading : \n";
	cout<<x;
	x.kurang_satu();
	cout<<"\nSetelah dikurangi 1 menjadi : "<<endl;
	x.cetak_array();
}


