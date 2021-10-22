#include <iostream>
using namespace std;

class Node {
	public :
		int data;
		Node *berikut;
};

Node *kepala, *ekor, *run, *baru;

void tambahData(int x){
	baru = new Node;
	baru->data = x;
	baru->berikut = NULL;
	ekor->berikut = baru;
	ekor = baru;
}

int main(){
	int n, tampung;
	
	kepala = new Node;
	kepala->data = 1;
	kepala->berikut = NULL;
	ekor = kepala;
	
	cout<<"Masukkan n : ";cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Masukkan data : ";cin>>tampung;
		if (i == 0) {
			kepala->data = tampung;
			tambahData(tampung);	
		}
	}
	
	run = kepala;
	while(run != 0){
		cout<<"Isi = "<<run->data<<endl;
		run = run->berikut;
	}
	
	
}