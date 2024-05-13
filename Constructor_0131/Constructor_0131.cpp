#include <iostream>
using namespace std;

class mahasiswa					//class
{
public:							//akses modifier
	static int nim;				//parameter
	int id;
	string nama;

	void setID();
	void printALL();
	mahasiswa(string pnama)
	{
		nama = pnama;
		setID();
	}
};

int mahasiswa::nim = 10;

void mahasiswa::setID()					// set id
{
	id = ++nim;							//nim bernilai 0 ditambahkan 1 baru diberikan ke ID 

}

void mahasiswa::printALL()
{
	cout << "ID = " << id << endl;
	cout << "nama = " << nama << endl;
	cout << endl;
}

int main()									//untuk memanggi;
{
	mahasiswa mhs1("Lia Kurnia");
	mahasiswa mhs2("Asroni");
	mahasiswa mhs3("Andi Kurniawan");
	mahasiswa mhs4("Joko Purbi");

	mhs1.printALL();
	mhs2.printALL();
	mhs3.printALL();
	mhs4.printALL();

	return 0;

}