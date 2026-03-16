#include <bits/stdc++.h>
#include <string>

using namespace std;

struct kendaraan { 
    string nama, merk, jenis, BahanBakar, NomorPolisi, warnaBody;
    int jumlahRoda, volumeMesin, tahunProduksi, jumlahPenumpang;
    float harga;
};

int main() {
    kendaraan VW, BMW, Mercedez;

    BMW.merk = "M Competition";
    cin >> BMW.nama;
    Mercedez.merk = "AMG Black Edition";
    cin >> Mercedez.nama;

    cout << "Merk mobil BMW : " << BMW.merk << endl;
    cout << "Merk mobil Mercedez : " << Mercedez.merk << endl;

    return 0;
}