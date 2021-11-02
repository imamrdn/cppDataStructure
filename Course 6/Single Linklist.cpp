#include <iostream>
using namespace std;
// membuat objek/ item list
struct Node {
  int data;
  Node *berikut;
};

// Langkah 2
class LinkedList { 
public:
// buat konstruktor sebagai ciri linklist
	LinkedList(){ 
		first = NULL;
    }
	void nodeBaru(int);
    void cetak();
    void tambahAkhir(int);
    void tambahTengah(int);
    void hapusDepan();
    void hapusBelakang();
    void hapusTengah(int);

private:
	Node* first;
};

// Langkah 3
void LinkedList::nodeBaru(int A){ 
	Node *baru = new Node();
	baru->data = A;
	baru->berikut = first;
	first = baru; // jangan lupa, pemiliknya first
}
// Langkah 4
void LinkedList::cetak(){ //5
	Node *jalan = first;
	while (jalan != NULL){
		cout << jalan->data << " ";
		jalan = jalan->berikut;
	}	
}

// Langkah 9
// 1. pastikan ada pointer menunjuk item terakhir menggunakan prinsip jalan di cetak
void LinkedList::tambahAkhir(int B){
	Node *p = new Node();
	p = first;
	while (p->berikut != NULL)	// kondisi p berhenti
		p = p->berikut;		// p menelusuri setiap elemen
	// print data yang ditunjuk pastikan
	cout << "\ndata akhir : " << p->data << "\n";
	// 2. buat node baru data baru
	Node *baru = new Node();
	baru->data = B;
	baru->berikut = NULL;
	// 3. sambungkan berikut dari p ini ke node yang ditunjuk pointer baru
	p->berikut = baru;
}

// Langkah 11
// Perhatikan, secara logik sama dengan menambah setelah eelemn terakhir
void LinkedList::tambahTengah(int C){
// 1. pastikan ada pointer menunjuk item yang diinginkan menggunakan prinsip jalan di cetak
	Node *p = new Node();
	p = first;
// 2. posisi data yg diinginkan
	while (p->berikut->data < C) 
	p = p->berikut;
// print data yang ditunjuk. Pastikan sudah sesuai
	cout << "\ndata yang diinginkan : " << p->data << "\n";
// 3. buat node baru data baru
	Node *baru = new Node();
	baru->data = C;
// 4 menunjuk setelah data yang diinginkan
	baru->berikut = p->berikut; 
// 5. sambungkan berikut dari p ini
	p->berikut = baru;
}

// Langkah 13
// Dengan menggunakan program terdahulu, asumsikan kita memiliki elemen 1, 2, 3 dan 4
void LinkedList::hapusDepan(){
	Node *hapus = new Node();
	hapus = first;
	first = first->berikut;
	cout << "\n" << hapus->data << " yang dihapus\n";
	delete hapus;
}
//Dengan fungsi di atas, menggunakan main function, hapuslah data 1 dan 2.

// Langkah 15
void LinkedList::hapusBelakang(){
	Node *p = new Node();
	// 1. p bertugas sebagai penunjuk posisi elemen yang dihapus
	p = first;
	// 2. posisi data yg diinginkan
	while (p->berikut->berikut != NULL) 
	p = p->berikut;
	// pastikan menunjuk elemen 3
	cout << "\nmenunjuk elemen ke : " << p->data;
	// tempatkan pointer hapus di depan pointer p
	Node *hapus = p->berikut;
	// pastikan menunjuk elemen 4
	cout << "\n"<< hapus->data << " yang dihapus \n";
	// putuskan berikut dari p
	p->berikut = NULL;
	delete hapus;
}

// Langkah 17 
void LinkedList::hapusTengah(int A){
	Node *p = new Node();
	// 1. p bertugas sebagai penunjuk posisi elemen yang dihapus
	p = first;
	// 2. posisi p di depan data yg akan dihapus
	while (p->berikut->data != A) 
	p = p->berikut;
	// pastikan menunjuk elemen 3
	cout << "\nmenunjuk elemen ke : " << p->data;
	// tempatkan pointer hapus di depan pointer p
	Node *hapus = p->berikut;
	// pastikan menunjuk elemen 4
	cout << "\n" << hapus->data << " yang dihapus\n";
	// p berikut menunjuk elemen setelah elemen yg dihapus
	p->berikut = hapus->berikut;
	delete hapus;
}

// Langkah 5
int main() {
	LinkedList My;  // deklarasi variabel My
	My.nodeBaru(4); // Isi data node pertama dengan 4
	My.nodeBaru(3);
	My.nodeBaru(2);
	My.nodeBaru(1);
	My.cetak();
	cout<<endl;
	
	My.tambahAkhir(6);
	My.cetak();
	cout<<endl;
	
	My.tambahTengah(5); //nilainya harus kurang dari tambahAkhir
	My.cetak();
	cout<<endl;
	
	My.hapusDepan();
	My.cetak();
	cout<<endl;
	
	My.hapusBelakang();
	My.cetak();
	cout<<endl;
	
	My.hapusTengah(3);
	My.cetak();
	cout<<endl;
	std::cout << "\nTaraaaaa!\n";
	std::cout << "Gampang to ? Kabeh kui gampang\nNEK ISO NGGARAP!\n";
}

// Langkah 6
// Karena first tak lagi NULL, dilakukan sedikit modifikasi
//void nodeBaru(int A){ //4
//	Node *baru = new Node();
//	baru->data = A;
//	baru->berikut = first; // NULL diganti first
//	first = baru;
//}

// Langkah 7
//Karena elemen link list tak hanya satu item, maka kita bisa menggunakan perulangan untuk mengunjungi setiap elemennya
//void cetak(){ 
//	Node *jalan = first;
//	while (jalan != NULL){
//		cout << jalan->data << " ";
//		jalan = jalan->berikut;
//		}	
//	}