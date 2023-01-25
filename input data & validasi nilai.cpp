#include <iostream>

using namespace std;

struct Mahasiswa
{
    unsigned int n;
    string nama[10], status[10], prodi[10], fakultas[10], alamat[10];
    string visitor;
    // int nilai[10];
};

void showdata()
{
    struct Mahasiswa mhs;
    cout << "=============Selamat Datang=============" << endl;
    cout << "Jumlah Data Yang akan di input = ";
    cin >> mhs.n;

    cout << "==== Silahkan Isi Form Di Bawah :)==== " <<endl;
    for (int i = 0; i < mhs.n; i++)
    {
        cout << "Data ke-" << i + 1 << endl; 
        getchar();
        cout << "Masukan Nama Mahasiswa : ";
        getline(cin,mhs.nama[i]);

        cout << "Fakultas               : ";
        getline(cin,mhs.fakultas[i]);
        
        cout << "Program Studi          : ";
        getline(cin, mhs.prodi[i]);

        cout << "Alamat                 : ";
        getline(cin,mhs.alamat[i]);

    }
    cout << endl;
    cout << ">>>>>>>>>>>>>>>DAFTAR DATA MAHASISWA<<<<<<<<<<<<<" << endl;
    cout << "-------------------------------------------------" << endl;

    for (int i = 0; i < mhs.n; i++)
    {
        cout << "Data ke - " << i + 1 << " ( " << mhs.nama[i] << " ) " << endl;
        cout <<"Nama Lengkap    :"<< mhs.nama[i] << endl;
        cout <<"Fakultas        :"<< mhs.fakultas[i] << endl;
        cout <<"Program Studi   :"<< mhs.prodi[i] << endl;
        cout <<"Alamat          :"<< mhs.alamat[i] << endl;
        cout << "------------------------------" << endl;
    }
}

void validasi()
{
    system("CLS");
    cout << "\n"
         << endl;
    int a;
    string name[10], status[10];
    int nilai[10];
    cout << "Program Validasi Nilai Mahasiswa" << endl;
 
    cout << "Masukan Jumlah Data Yang akan di input = ";
    cin >> a;
    cout << endl;

    for (int i = 0; i < a; i++)
    {
        cout << "Selamat Datang " << endl;
        cout << endl;

        cout << "Data ke-" << i + 1 << endl;
        cout << "Masukan Nama Mahasiswa = ";
        cin >> name[i];
        cout << "Masukan Nilai = ";
        cin >> nilai[i];

        if (nilai[i] <= 50)
        {
            status[i] = "Tidak Lulus";
        }
        else
        {
            status[i] = "Lulus";
        }
    }
    cout << endl;
    cout << ">>>>>>>>>>DAFTAR NILAI MAHASISWA<<<<<<<<<<" << endl;
    cout << "-------------------------------------------------" << endl;

    for (int i = 0; i < a; i++)
    {
        cout <<"Nama Lengkap    :"<< name[i] << endl;
        cout <<"Nilai           :"<< nilai[i] << endl;
        cout <<"Status          :"<< status[i] << endl;
        cout <<"Keterangan      :"<< "Mahasiswa Atas nama " << name[i] << " Memiliki Status " << status[i] << endl;
        cout << "------------------------------" << endl;
    }
}

int main()
{
    char ulang;
    int pilihanmu;
    do
    {
        cout << "================ Selamat Datang ========================" << endl;
        cout << "##  Program Sederhana Menggunakan Bahasa C++ ##" << endl;
        cout << "========================================================" << endl;
        cout << "1. Program Input Data Mahasiswa" << endl;
        cout << "2. Program Validasi Nilai Mahasiswa" << endl;
        cout << "=========================================================" << endl;
        cout << "Pilihan anda: ";
        cin >> pilihanmu;

        switch (pilihanmu)
        {
        case 1:
        {
            showdata();
            break;
        }
        case 2:
        {
            validasi();
            break;
        }
        break;
        default:
            cout << "Mau Pilih Menu Lain" << endl;
        }
        cout << "Ingin memilih menu lain (y/t)? ";
        cin >> ulang;
        cout << endl;
    } while (ulang != 't');

    system("CLS");
    cout << "Anda Telah Mengakhiri Program\n";
    cout << "Terimakasih :)\n";
    cout << endl;
    return 0;
}