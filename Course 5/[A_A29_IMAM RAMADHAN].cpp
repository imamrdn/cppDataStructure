//linklist menyalin
#include <iostream>
using namespace std;

class Node {
	public :
		int listOne, listTwo, listThree, listFour, listFive;
		Node *A, *B, *run, *next;
		void nodeB();
		
};

void Node::nodeB(){
	B = new Node;
	B = A;
	B->next = NULL;
	A->next = B;
	run = B;
	
	cout<<run->listOne<<" ";
	cout<<run->listTwo<<" ";
	cout<<run->listThree<<" ";
	cout<<run->listFour<<" ";
	cout<<run->listFive;	
	run = run->next;
}

int main(){
	Node x;
	
	x.A->listOne = 1;
	x.A->listTwo = 2;
	x.A->listThree = 3;
	x.A->listFour = 4;
	x.A->listFive = 5;
	x.A->next = NULL;
	
	Node *run = x.A;
	cout<<"List A : ";
	while(run != 0){
		cout<<run->listOne<<" ";
		cout<<run->listTwo<<" ";
		cout<<run->listThree<<" ";
		cout<<run->listFour<<" ";
		cout<<run->listFive<<" ";
		run = run->next;
	}
	
	cout<<"\nList B : ";
	x.nodeB();

}