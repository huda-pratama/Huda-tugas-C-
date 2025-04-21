#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, kelas, nim, umur, hobi;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan kelas: ";
    getline(cin, kelas);

    cout << "Masukkan NIM: ";
    getline(cin, nim);

    cout << "Masukkan umur: ";
    getline(cin, umur);

    cout << "Masukkan hobi: ";
    getline(cin, hobi);

    cout << "\n== Data Diri ==" << endl;
    cout << "NIM   : " << nim << endl;
    cout << "Kelas : " << kelas << endl;
    cout << "Nama  : " << nama << endl;
    cout << "Umur  : " << umur << endl;
    cout << "Hobi  : " << hobi << endl;

    return 0;
}


