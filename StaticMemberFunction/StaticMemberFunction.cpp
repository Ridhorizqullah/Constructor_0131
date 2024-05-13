#include <iostream>
using namespace std;

class mahasiswa
{
private:
	long long static int nim;
public:
	long long int id;
	string nama;

	void setID();
	void printALL();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	mahasiswa(string pnama) : nama(pnama) { setID(); }

};

long long int mahasiswa::nim = 0;

void mahasiswa::setID()
{
	id = ++nim;
}

void mahasiswa::printALL()
{
	cout << "ID = " << id << endl;
	cout << "nama = " << nama << endl;
	cout << endl;
}

int main()									//untuk memanggi;
{
	mahasiswa mhs1("irfan fauzi");
	mahasiswa::setNim(20230131);            // mengakses nim melalui static member function
	mahasiswa mhs2("ridho");
	mahasiswa mhs3("eko samudra");
	mahasiswa mhs4("dito bantul");

	mhs1.printALL();
	mhs2.printALL();
	mhs3.printALL();
	mhs4.printALL();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;

	return 0;

}