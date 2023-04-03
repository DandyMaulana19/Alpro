#include <iostream>

using namespace std;

int main(){

    int prima;
    int bilangan;
    prima = 1;
    a:
    cout << "Masukkan Angka : ";
    cin >> bilangan;

    for(int i = 2; i < bilangan; i++){
        if(bilangan % i == 0){
            prima = 0;
        }
    }

    if (bilangan == 1){
        cout << "Bukan bilangan prima" << endl;
    }else if(prima == 0){
        cout << "Bukan bilangan prima" << endl;
    }else{
        cout << "Bilangan prima" << endl;
    }
    goto a;
}