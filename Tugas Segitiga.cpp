# include <iostream>

using namespace std;

int main(){

    float x, y, a, b, c, luas, keliling;

    cout << "Masukkan Panjang Alas : ";
    cin >> x;
    cout << "Masukkan Tinggi : ";
    cin >> y;
    cout << "Masukkan panjang sisi : ";
    cin >> a >> b >> c;

    luas = 0.5 * x * y;
    keliling = a + b + c;
    cout << "Luas Segitiga : " << luas << endl;
    cout << "Keliling Segitiga : " << keliling << endl;

    return 0;
}
