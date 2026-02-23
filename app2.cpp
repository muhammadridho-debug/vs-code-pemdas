#include <iostream>
using namespace std;

int main () {
    //mendeklarasikan variabel
    float penyebut, pembilang, hasil;

    // menampilkan output
    cout << "Masukkan Pembilang :" << endl;
    //memasukkan input
    cin >> pembilang;

    cout << "Masukkan Penyebut" << endl;
    cin >> penyebut;

    hasil = pembilang / penyebut;
    cout << "Hasilnya :" << hasil;
}