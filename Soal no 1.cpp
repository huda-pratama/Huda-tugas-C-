#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    if (angka > 0) {
        cout << "Bilangan Positif" << endl;
    } else if (angka < 0) {
        cout << "Bilangan Negatif" << endl;
    } else {
        cout << "Bilangan Nol" << endl;
    }

    return 0;
}

