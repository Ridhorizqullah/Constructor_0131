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

