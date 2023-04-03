#include <iostream>

using namespace std;

int main()
{
    string nama;
    int pilih;
    pilih = 1 || 2;
    
    do{
        cout << "MENU" << endl;
        cout << "1. Ulang" << endl;
        cout << "2. Keluar" << endl;
        cout << "Pilihan : ";
        cin >> pilih;
        cout << endl;
    }
    while (pilih == 1);
    
    return 0;
} 