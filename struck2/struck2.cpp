#include <iostream>
using namespace std;

struct DetailAlamat
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char nim[12];
	char nama[20];
	DetailAlamat alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;

	cout << "Masukkan NIM : ";
	cin.getline(mhs.nim, 12);
	cout << "Masukkan Umur : ";
	cin >> mhs.umur;
	cin.ignore(1, '\n');
	cout << "Masukkan Nama : ";
	cin.getline(mhs.nama, 20);
	cout << "Alamat : ";
	cout << "\n\tMasukkan Desa : ";
	cin.getline(mhs.alamat.desa, 20);
	cout << "\tMasukkan Kota : ";
	cin.getline(mhs.alamat.kota, 20);

	cout << "\n\nNIm : " << mhs.nim;
	cout << "\nUmur : " << mhs.umur;
	cout << "\nNama : " << mhs.nama;
	cout << "\n Alamat : ";
	cout << "\n\tDesa : " << mhs.alamat.desa;
	cout << "\n\tKota : " << mhs.alamat.kota;

}