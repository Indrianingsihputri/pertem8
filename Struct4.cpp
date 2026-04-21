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
    cout << " Data Mahasiswa ke-" << i + 1 << endl;
    cout << "Nomor Mahasiswa: ";
    getline(cin, mhs[i].NIM);
    cout << "Nama Mahasiswa: ";
    getline(cin, mhs.Nama);
    cout << "Alamat Mahasiswa => " << endl;
    cout << "\n Nama Desa: ";
    cin >> mhs[i].Alamat.desa;
    cout << "\n Nama Kota: ";
    cin >> mhs[i].Alamat.kota;
    cout << "Umur Mahasiswa: ";
    cin >> mhs[i].Umur;  
    }

    for (int i = 0; i < 3; i++)
    {
    cout << endl;
    cout << " Data Mahasiswa ke-" << i + 1 << endl;
    cout <<"\n NIM: " << mhs[i].NIM;
    cout <<"\n Nama: " << mhs[i].Nama;
    cout <<"\n Alamat: " << mhs[i].Alamat;
    cout <<"\n Alamat Desa: " << mhs[i].Alamat.desa;
    cout <<"\n Alamat Kota: " << mhs[i].Alamat.kota;
    cout <<"\n Umur: " << mhs[i].Umur;
    }


    return 0;
   
}