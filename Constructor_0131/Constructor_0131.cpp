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