# Tugas Struktur Data Algoritma 1 (ADT)
Nama  : Siti Zubaidah
NPM   : G1A021002
Kelas : Informatika B
Dosen pengampu  : Mochammad Yusa,S.Kom.,M.Kom.

Penjelasan Source Code  :

//Siti Zubaidah
//G1A021002
//Informatika B
Source Code diatas berfungsi untuk menambahkan komentar

#include <iostream>
#include <conio.h>
Source Code diatas merupakan header pada program yang kita buat

using namespace std ;
Berfungsi memberikan intruksi terhadap compiler untuk menggunakan semua fungsi yang terkait untuk kerangka yang sama, bisa berupa berkas, class, dan sejenisnya yang berkaitan dengan std.

int main(int argc, char const *argv[]){
	int n = 100;
	char NPM[n], nama[n], kelas[n];
Merupakan Deklarasi Variabel
  
  cout << "=====================================" << endl;
	cout << "======== INPUT DATA MAHASISWA =======" << endl;
	cout << "=====================================" << endl; 
	cout << "NPM	: "; cin.getline(NPM, n);
	cout << "Nama 	: "; cin.getline(nama, n);
	cout << "Kelas	: "; cin.getline(kelas, n);
Berfungsi ntuk menerima data input dari user
  
 cout << "=====================================" << endl;

	cout << endl << endl;
	cout << "=====================================" << endl;
	cout << "=========== DATA MAHASISWA ==========" << endl;
	cout << "=====================================" << endl;
	cout << "NPM	: " << NPM << endl;
	cout << "Nama 	: " << nama << endl;
	cout << "Kelas	: " << kelas << endl;
	cout << "=====================================" << endl;
 Berfungsi untuk menmpilkan data yang telah diinput oleh pengguna tadi
  
  getch();
 Berfungsi untuk membaca data karakter
  
	return 0;
Berfungsi untuk menyatakan hasil keluaran dari fungsi program berakhir dengan normal
