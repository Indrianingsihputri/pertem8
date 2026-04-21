#include <iostream>
using namespace std;

struct DetailAlamat
{
    string desa;
    string kota;
};

struct Mahasiswa
{
    string NIM;
    string Nama;
    DetailAlamat Alamat;
    int Umur;
};


int main()
{
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa: ";
    cin >> mhs.NIM;
    cout << "Nama Mahasiswa: ";
    cin.ignore();
    getline(cin, mhs.Nama);
    cout << "Alamat Mahasiswa: ";
    cout << "\n Nama Desa: ";
    cin >> mhs.Alamat.desa;
    cout << "\n Nama Kota: ";
    cin >> mhs.Alamat.kota;
    cout << "Umur Mahasiswa: ";
    cin >> mhs.Umur;

    cout << endl;
    cout <<"\n NIM: " << mhs.NIM;
    cout <<"\n Nama: " << mhs.Nama;
    cout <<"\n Alamat: " << mhs.Alamat;
    cout <<"\n Umur: " << mhs.Umur;
    
}
