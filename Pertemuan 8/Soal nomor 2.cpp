#include <iostream>
using namespace std;

int main() {
    double harga, total, diskon, totalBayar;
    int jumlah;
    double persenDiskon;

    cout << "Masukkan harga barang: ";
    cin >> harga;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlah;

    total = harga * jumlah;

    if (jumlah > 100) {
        persenDiskon = 0.15;
    } else {
        persenDiskon = 0.05;
    }

    diskon = total * persenDiskon;
    totalBayar = total - diskon;

    cout << "Total beli: " << total << endl;
    cout << "Diskon: " << diskon << endl;
    cout << "Total bayar: " << totalBayar << endl;

    return 0;
}

