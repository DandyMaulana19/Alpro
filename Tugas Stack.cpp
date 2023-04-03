#include <iostream>
#include <stack>

using namespace std;

stack<string> nama;

// Menambah antrian pasien
void Ngantri(string pasien){
    nama.push(pasien);
}

// Memanggil Pasien
void Manggil(){
    cout << nama.top();
    nama.pop();
}

// Melihat jumlah antrian pasien
void Jumlah(){
    cout << nama.size();
}

// Melihat nama pasien yang mengantri
void Cek(){
    for (int i = nama.size(); i > 0; i--) {
        cout << nama.top() << endl;
        nama.pop();
    }
}

int main() {
    int pilih;
    string pasien;

    nama.push("Ahmad");
    nama.push("Kelvin");
    nama.push("Raden");
    
    a:
    cout << "         PILIH MENU        " << endl << endl;;
    cout << "===========================" << endl;
    cout << "|| NO ||      MENU       ||" << endl;
    cout << "===========================" << endl;
    cout << "||  1 || TAMBAH ANTRIAN  ||" << endl;
    cout << "||  2 || PANGGIL ANTRIAN ||" << endl;
    cout << "||  3 || JUMLAH ANTRIAN  ||" << endl;
    cout << "||  4 || CEK ANTRIAN     ||" << endl;
    cout << "===========================" << endl << endl;

    cout << "PILIH MENU : ";
    cin >> pilih;
    cout << endl;

    if(pilih == 1){
        cout << "NAMA PASIEN : ";
        cin >> pasien;
        Ngantri(pasien);
    }else if(pilih == 2){
        Manggil();
    }else if(pilih == 3){
        Jumlah();
    }else if(pilih == 4){
        Cek();
    }else{
        cout << "MENU TIDAK TERSEDIA !" << endl;
        cout << "SILAHKAN PILIH KEMBALI !" << endl;
        goto a;
    }
    cout << endl << endl;
    goto a;
}