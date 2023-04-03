#include <iostream>

using namespace std;

int main()
{
    float a, b, t, luas, p, q, r, s, keliling;

    cout << "Masukkan Panjang a : ";
    cin >> a;
    cout << "Masukkan Panjang b : ";
    cin >> b;
    cout << "Masukkan Tinggi : ";
    cin >> t;
    cout << "Masukkan panjang sisi : ";
    cin >> p >> q >> r >> s;

    luas = 0.5 * a + b * t;
    keliling =  p + q + r + s;
    cout << "Luas Trapesium : " << luas << endl;
    cout << "Keliling Trapesium : " << keliling << endl;


	return 0;
}
