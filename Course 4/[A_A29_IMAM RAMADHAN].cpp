#include <iostream>
#define maks5

using namespace std;

class swipeRight{
	friend ostream& operator<<(ostream&, const swipeRight&);
	friend istream& operator>>(istream&, swipeRight&);
	
	public:
		swipeRight();
		void print();
		void operator + (int y);
	
	private:
		char array[5];
		int position;
};

swipeRight::swipeRight(){
	for(int i=0;i<5;i++)
		array[i]='0';
}

void swipeRight::print(){
	for(int i=0;i<5;i++)
	cout<<array[i]<<" ";
}

ostream& operator<<(ostream& out, const swipeRight& x){
	for(int i=0;i<5;i++)
		out<<x.array[i]<<" ";
	out<<endl;
	return out;
}

istream& operator>>(istream& in, swipeRight& y){
	int position;
	for (int position=1; position<=5; position++){
		cout<<"Masukkan Nilai Array Posisi Ke-"<<position<<"= ";
	
		if(position >= 0 && position <= 5){
			in>>y.array[position-1];
		}
	}
	return in;
}

void swipeRight::operator + (int y){
	int n=5;
	for(int i=0; i<y; i++){
		int temp=array[n-1];
		for(int i=n-1;i>=0;i--)
			array[i+1]=array[i];
		array[0]=temp;
	}
	
}

int main() {
	swipeRight run;
	cout<<"Program Array Geser Kanan\n\n";
	cout<<"Array Masih Kosong : "<<run;
	cin>>run;
	cout<<endl<<"Array Saat Ini : "<<run;
	run+4;
	cout<<"Array Setelah Digeser Kanan : "<<run<<endl;
	cout<<endl;

	return 0;
}