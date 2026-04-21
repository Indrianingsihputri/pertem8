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
    cout <<"\n NIM: " << mhs[0].NIM;
    cout <<"\n Nama: " << mhs[0].Nama;
    cout <<"\n Alamat: " << mhs[0].Alamat;
    cout <<"\n Alamat Desa: " << mhs[0].Alamat.desa;
    cout <<"\n Alamat Kota: " << mhs[0].Alamat.kota;
    cout <<"\n Umur: " << mhs[0].Umur;
    }


    return 0;
   
}