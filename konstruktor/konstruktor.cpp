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

int main() {
	Mahasiswa mhs1;
	Mahasiswa mhs2(20);
	Mahasiswa mhs3("imron");
	Mahasiswa mhs4(20, "asek");

	mhs1.cetak();
	mhs2.cetak();
	mhs3.cetak();
	mhs4.cetak();
	return 0;
}