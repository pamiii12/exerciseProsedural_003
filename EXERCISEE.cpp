#include <iostream>
using namespace std;

int main()
{
    const int jumlahMahasiswa = 20;
    string namaMahasiswa[jumlahMahasiswa];
    int nilaiBahasainggris[jumlahMahasiswa];
    int nilaiMatematika[jumlahMahasiswa];
    string status[jumlahMahasiswa];


    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Masukkan nama mahasiswa: ";
        cin >> namaMahasiswa[i];
        cout << "Masukkan nilai bahasa Inggris: ";
        cin >> nilaiBahasainggris[i];
        cout << "Masukkan nilai Matematika: ";
        cin >> nilaiMatematika[i];
        cout << endl;

        int rata_rata = (nilaiBahasainggris[i] + nilaiMatematika[i]) / 2;

        if (rata_rata >= 70) {
            status[i] = "Diterima";
        }
        else {
            status[i] = "Ditolak";
        }
    }


    cout << "Nama\t\tStatus" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << namaMahasiswa[i] << "\t\t" << status[i] << endl;
    }

    return 0;
}