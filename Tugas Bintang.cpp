#include <iostream>

using namespace std;

int main(){
    
    int a, b, c;
    char d, e;
    d = '*';
    e = ' ';

    cout << "Masukkan Panjang baris : ";
    cin >> c;

    for (a = 1; a <= c; a++){
        for (b = 1; b <= a; b++){
            cout << d << e;
        }
        cout << endl;
    }
     return 0;
}