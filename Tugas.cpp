//Siti Zubaidah
//G1A021002
//Informatika B

#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[]){
	int n = 100;
	char NPM[n], nama[n], kelas[n];

	cout << "=====================================" << endl;
	cout << "======== INPUT DATA MAHASISWA =======" << endl;
	cout << "=====================================" << endl; 
	cout << "NPM	: "; cin.getline(NPM, n);
	cout << "Nama 	: "; cin.getline(nama, n);
	cout << "Kelas	: "; cin.getline(kelas, n);

	cout << "=====================================" << endl;

	cout << endl << endl;
	cout << "=====================================" << endl;
	cout << "=========== DATA MAHASISWA ==========" << endl;
	cout << "=====================================" << endl;
	cout << "NPM	: " << NPM << endl;
	cout << "Nama 	: " << nama << endl;
	cout << "Kelas	: " << kelas << endl;
	cout << "=====================================" << endl;

	getch();	
	return 0;
}