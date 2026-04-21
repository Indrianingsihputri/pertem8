#include <iostream>
#include <string>

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
    Mahasiswa mhs[3];
    for (int i = 0; i < 3; i++)
    {
    cout << "Nomor Mahasiswa: ";
    getline(cin, mhs.NIM);
    cout << "Nama Mahasiswa: ";
    getline(cin, mhs.Nama);
    cout << "Alamat Mahasiswa: ";
    cout << "\n Nama Desa: ";
    cin >> mhs.Alamat.desa;
    cout << "\n Nama Kota: ";
    cin >> mhs.Alamat.kota;
    cout << "Umur Mahasiswa: ";
    cin >> mhs.Umur;  
    } 

    cout << endl;
    cout <<"\n NIM: " << mhs.NIM;
    cout <<"\n Nama: " << mhs.Nama;
    cout <<"\n Alamat: " << mhs.Alamat;
    cout <<"\n Alamat Desa: " << mhs.Alamat.desa;
    cout <<"\n Alamat Kota: " << mhs.Alamat.kota;
    cout <<"\n Umur: " << mhs.Umur;

    return 0;
   
}