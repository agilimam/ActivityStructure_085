#include <iostream>
using namespace std;

struct detailalamat
{
	char kota[20];
	char desa[20];
};

struct mahasiswa
{
	char nim[12];
	char nama[20];
	detailalamat alamat;
	int umur;
};

int main() {
	mahasiswa mhs[3];

	for (int i = 0; i < 3;i++) {
		cout << "Masukkan NIM : ";
		cin.getline(mhs[i].nim, 12);
		cout << "Masukkan Umur : ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
		cout << "Masukkan Nama : ";
		cin.getline(mhs[i].nama, 20);
		cout << "Alamat : ";
		cout << "\n\tMasukkan Desa : ";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\tMasukkan Kota : ";
		cin.getline(mhs[i].alamat.kota, 20);
	}

	for (int i = 0; i < 3;i++) {
		cout << "\n\nNIm : " << mhs[i].nim;
		cout << "\nUmur : " << mhs[i].umur;
		cout << "\nUmur : " << mhs[i].umur;
		cout << "\nAlamat : ";
		cout << "\tDesa : " << mhs[i].alamat.desa;
		cout << "\tKota : " << mhs[i].alamat.kota;
	}

}

