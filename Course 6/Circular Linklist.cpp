//circular
// Langkah 1, mengkonstruksikan item link list
#include <iostream>
using namespace std;  //1
// membuat objek/ item list
struct Node{
  int data;
  Node *berikut;
};

// Langkah 2 : membuat class pointer yang menunjuk link list
class LinkedList {   //2
  public:
  // buat konstruktor sebagai ciri linklist
    LinkedList(){    //3
      first = NULL;
    }
    void nodeBaru(int);
    void cetak();
    void tambahAkhir(int);
    void tambahTengah(int);
    void hapusBelakang();

private:
    Node* first;
};

// Langkah 3
void LinkedList::nodeBaru(int A){   //4
	Node *baru = new Node();
	baru->data = A;
	baru->berikut = NULL;  
		
	if(first == NULL){
		first = baru;
		baru->berikut = first; // ciri penting
	
	} else {
		// pointer akhir menunjuk elemen terakhir
        Node* akhir = first;
        while(akhir->berikut != first)
          akhir = akhir->berikut;
        // pointer berikut dari akhir SELALU ke baru/ciri 
        akhir->berikut = baru;
        baru->berikut = first;
        first = baru;  // pemilik circulaar link list
	}
}

// Langkah 5 
void LinkedList::cetak(){     
	Node *jalan = first;
	while (jalan != NULL){
		cout << jalan->data << " ";
		jalan = jalan->berikut;
		if(jalan == first)      // ini penting untuk ciri circular
		    break;
	}
}

// Langkah 8 : menambah node SETELAH ELEMEN TERAKHIR
void LinkedList::tambahAkhir(int B){
	// 1. pastikan ada pointer menunjuk item terakhir
	// menggunakan prinsip jalan di cetak
	Node *p = new Node();
	p = first;
	while (p->berikut != first) // ciri circular untuk akhir link list
		p = p->berikut;
	// print data yang ditunjuk pastikan
	cout << "\ndata akhir : " << p->data << "\n";
	// 2. buat node baru data baru
	Node *baru = new Node();
	baru->data = B;
	baru->berikut = first;
	// 3. sambungkan berikut dari p ini
	p->berikut = baru;
}

// Langkah 10
void LinkedList::tambahTengah(int C){
	// 1. pastikan ada pointer menunjuk item yang diinginkan
	// menggunakan prinsip jalan di cetak
	Node *p = new Node();
	p = first;
	// 2. posisi data yg diinginkan
	while (p->berikut->data < C) 
	p = p->berikut;
	// print data yang ditunjuk pastikan
	cout << "\ndata yang diinginkan : " << p->data << "\n";
	// 3. buat node baru data baru
	Node *baru = new Node();
	baru->data = C;
	// 4 menunjuk setelah data yang diinginkan
	baru->berikut = p->berikut; 
	// 5. sambungkan berikut dari p ini
	p->berikut = baru;
}

void LinkedList::hapusBelakang(){
	if(first != NULL) {
        if(first->berikut == first) {
          first = NULL;
        } else {
			Node* temp = first;
			while(temp->berikut->berikut != first)
				temp = temp->berikut;
			Node* lastNode = temp->berikut;
			temp->berikut = first;
			delete lastNode; 
        }
    }
}

int main(){
	LinkedList My;  // deklarasi variabel My
	My.nodeBaru(4); // Isi data node pertama 
	My.nodeBaru(3);
	My.tambahAkhir(6);
	My.tambahTengah(5);
	My.cetak();
	My.hapusBelakang();
	cout<<"\nSetelah dihapus\n";
	My.cetak();

	
	
	std::cout << "\nHello World!\n";
}