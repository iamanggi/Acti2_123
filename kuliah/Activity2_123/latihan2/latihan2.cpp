#include <iostream>
using namespace std;

float PersegiPanjang(float p, float l) {
    return p * l;
}

float Lingkaran(float r) {
    return 3.14 * r * r;
}

float segitiga(float a, float t) {
    return 0.5 * a * t;
}


int main()
{
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;
    do {
        cout << "\n\n===========";
        cout << "\n M E N U";
        cout << "\n\n===========";
        cout << "\n 1. Luas Persegi Panjang";
        cout << "\n 2. Luas lingkaran";
        cout << "\n 3. Luas Segitiga";
        cout << "\n 4. Keluar ";
        cout << "\n pilihan (1/2/3/4) = ";
        cin >> pilihan;


        switch (pilihan)
        {
        case 1:
            cout << "masukan panjang = ";
            cin >> panjang;
            cout << "masukan lebar = ";
            cin >> lebar;
            cout << "\nLuas Persegi Panjang = " << PersegiPanjang(panjang, lebar);
            break;

        case 2:
            cout << "masukan jari-jari= ";
            cin >> jejari;
            cout << "\nLuas Lingkaran = " << Lingkaran(jejari);
            break;

        case 3:
            cout << "masukan alas = ";
            cin >> alas;
            cout << "masukan tinggi = ";
            cin >> tinggi;
            cout << "\nluas segitiga = " << segitiga(alas, tinggi);
            break;

        case 4:
            break;
        default:
            cout << "pilihan salah !!";
            break;
        }
    } while (pilihan != 4);
}


