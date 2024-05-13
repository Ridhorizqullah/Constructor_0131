#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public:
	long long int Nim;
	string Nama;

public:
	Mahasiswa()
	{
		Nim = 20230140115;
		Nama = "dhito";
	};
	Mahasiswa(int iNim) {
		Nim = iNim;
	}
	Mahasiswa(string iNama) {
		Nama = iNama;
	}
	Mahasiswa(int iNim, string iNama) {
		Nim = iNim;
		Nama = iNama;
	}
	void cetak() {
		cout << endl << "Nim   =" << Nim << endl;
		cout << " Nama  =" << Nama << endl;
	}
};

