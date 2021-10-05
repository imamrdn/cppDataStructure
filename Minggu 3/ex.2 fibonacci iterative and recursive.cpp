#include <iostream>	
using namespace std;

class fibonacci	{
	friend istream& operator >> (istream&, fibonacci&);
	friend ostream& operator << (ostream&, fibonacci&);
	
	private :
		int reply, n;
		
	public :
		void iterative();
		int recursive(int);
		void input();
		
};

istream& operator >> (istream& in, fibonacci& f){
	cout<<"Program Deret Fibonacci\n";
	cout<<"============================\n";
	cout<<"1. Metode Iteratif\n";
	cout<<"2. Metode Rekursif\n";
	cout<<"============================\n";	
	cout<<"Masukkan pilihan anda (1/2) = ";
	in>>f.reply;
	
	return in;
}

void fibonacci::input(){
	cout<<"Masukkan nilai n : ";
	cin>>n;
	cout<<"===================================\n";
}

void fibonacci::iterative(){
	int n1 = 1, n2 = 0;
	if ((n == 0) || (n == 1)){
		cout<< 1;
	} else {
		int result = 0;
		for (int i = 1; i <= n; i++) {
			result = n1 + n2;
			n1 = n2;
			n2 = result;
			cout<<result<<" ";
		}
	}
}

int fibonacci::recursive(int n){
	if ((n==1) || (n==2))	{
		return (1);
	} else	{
		return (recursive(n-1) + recursive(n-2));
	}
}

ostream& operator << (ostream& out, fibonacci& f){
	if (f.reply == 1) {
		out<<"Fibonacci Iterative = ";
		f.iterative();
	} else if (f.reply == 2){
		out<<"Fibonacci Recursive = ";
		for(int i=1; i<=f.n; i++)	{
			out<<f.recursive(i)<<" ";
		}
	} else {
		out<<"Perintah yang anda masukkan salah";
	}
	
	return out;
}

int main(){
	fibonacci run;
	cin>>run;
	run.input();
	cout<<run;

	return 0;
}
