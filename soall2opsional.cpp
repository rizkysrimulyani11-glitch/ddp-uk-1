#include <iostream>
using namespace std;

int main() {
    long detik;
    int hari, jam, menit, sisa;

    cout << "======================================" << endl;
    cout << "     Program Konversi Detik ke Waktu  " << endl;
    cout << "======================================" << endl;
    cout << "Masukkan jumlah detik: ";
    cin >> detik;

    // Proses konversi detik ke hari, jam, menit, detik
    hari = detik / 86400;
    sisa = detik % 86400;

    jam = sisa / 3600;
    sisa = sisa % 3600;

	menit = sisa / 60;
    sisa = sisa % 60;

    cout << endl;
    cout << "--------------------------------------" << endl;
    cout << "             Hasil Konversi            " << endl;
    cout << "--------------------------------------" << endl;
    cout << detik << " detik = "
         << hari << " Hari, "
         << jam << " Jam, "
         << menit << " Menit, "
         << sisa << " Detik." << endl;
    cout << "--------------------------------------" << endl;

    cout << endl;

    return 0;
}
