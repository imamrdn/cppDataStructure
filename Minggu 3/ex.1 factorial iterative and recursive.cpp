#include <iostream>
using namespace std;

class factorial	{
	friend ostream& operator << (ostream&, factorial&);
	friend istream& operator >> (istream&, factorial&);
	
	private :
		int n, reply, fact;
	
	public :
		void header();
		void input();
		int iterative();
		int recursive(int n);
};

void factorial::header(){
	cout<<"Program Menghitung Faktorial\n";
	cout<<"============================\n";
	cout<<"1. Metode Iteratif\n";
	cout<<"2. Metode Rekursif\n";
	cout<<"============================\n";	
	cout<<"Masukkan pilihan anda (1/2) = ";
	cin>>reply;
}

void factorial::input(){
	cout<<"Masukkan nilai n : ";
	cin>>n;
	cout<<"===================================\n";
}

int factorial::iterative(){
	fact = 1;
	for (int i=1; i<=n; i++){
		fact *= i;
	}
	return fact;
};

int factorial::recursive(int n)	{
	if(n<=1)	{
		return 1;
	} else {
		return n*recursive(n-1);
	}
};

ostream& operator << (ostream& out, factorial& f){
	f.header();
	if (f.reply==1){
		f.input();
		out<<"Hasil Iteratif dari "<<f.n<<"!"<<" adalah "<<f.iterative();
	} else if (f.reply == 2){
		f.input();
		out<<"Hasil Rekursif dari "<<f.n<<"!"<<" adalah "<<f.recursive(f.n);
	} else {
		out<<"Perintah yang anda masukkan salah";
	}
	
	return out;
}

int main(){
	factorial run;
	cout<<run;
	
	return 0;
}

