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
    float nilai[10];
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;
    bool menu;
    menu = true;

    while (menu == true)
    {
        cout << "\n\n============";
        cout << "\n M E N U";
        cout << "\n\n============";
        cout << "\n 1. Luas Persegi Panjang";
        cout << "\n 2. Luas Lingkaran";
        cout << "\n 3. Luas Segitiga";
        cout << "\n 4. Array";
        cout << "\n 5. keluar";
        cout << "\n Pilihan (1/2/3/4/5) : ";
        cin >> pilihan;


        switch (pilihan)
        {
        case 1:
            cout << "masukan panjang = ";
            cin >> panjang;
            cout << "maasukan lebar = ";
            cin >> lebar;
            cout << "\n Luas Persegi Panjang = " << PersegiPanjang(panjang, lebar);
            break;

        case 2:
            cout << "masukan jari-jari= ";
            cin >> jejari;
            cout << "\n Luas lingkaran= " << Lingkaran(jejari);
            break;

        case 3:
            cout << "masukan alas= ";
            cin >> alas;
            cout << "masukan tinggi= ";
            cin >> tinggi;
            cout << "\n Luas segitiga= " << segitiga(alas, tinggi);
            break;

        case 4:
            cout << "Mengisi Array\n";
            for (int i = 0; i < 5; i++) {
                cout << "Nilai ke- " << (i + 1) << ": " << nilai[i];
                cin >> nilai[i];
            }
            cout << "membaca isi array \n";
            for (int i = 0; i < 5; i++) {
                cout << "\n Nilai ke- " << (i + 1) << ": " << nilai[i];
            }
            break;

        case 5:
            menu = false;
        default:
            cout << "pilihan salah !!";
            break;
        }

    }


}


