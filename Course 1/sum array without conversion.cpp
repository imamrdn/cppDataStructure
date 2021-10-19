#include <iostream>
using namespace std;

int main(){
	int A[20], B[20], C[20], nA, nB;
	
	cout<<"Masukkan banyak data a = ";
	cin>>nA; 
	
	for(int i=0; i<nA; i++){
		cout<<"Masukkan angka = ";
		cin>>A[i];
	}
	cout<<endl;
	cout<<"Masukkan banyak data b = ";
	cin>>nB;
	
	for(int i=0; i<nB; i++){
		cout<<"masukkan angka = ";
		cin>>B[i];
	}
	cout<<endl;
	cout<<"Data A = ";
	for(int i=0; i<nA; i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
	cout<<"Data B = ";
	for(int i=0; i<nB; i++){
		cout<<B[i]<<" ";
	}
	cout<<endl;
	cout<<"Data C = ";
	for(int i=0; i<nB; i++){
		C[i]=A[i]+B[i];
		
		if(C[i]>9){
			C[i]-=10;
			C[i]+=1;
		}
		
		cout<<C[i]<<" ";
	}
}
