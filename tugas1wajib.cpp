#include <iostream>
using namespace std;

int main() {
    long long detikAwal, sisa;
    int jam, menit, detik;

    cout << "==============================" << endl;
    cout << "   PROGRAM KONVERSI WAKTU" << endl;
    cout << "==============================" << endl;
    cout << "Masukkan total detik: ";
    cin >> detikAwal;

    sisa = detikAwal;
    jam = sisa / 3600;
    sisa = sisa % 3600;
    menit = sisa / 60;
    detik = sisa % 60;

    cout << endl;
    cout << "------------------------------" << endl;
    cout << "Hasil Konversi:" << endl;
    cout << detikAwal << " detik = " 
         << jam << " jam, "
         << menit << " menit, "
         << detik << " detik." << endl;
    cout << "------------------------------" << endl;

    cout << "Selesai." << endl;
    cin.ignore();
    cin.get();

    return 0;
}
