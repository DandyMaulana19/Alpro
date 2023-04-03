#include <iostream>
#include <queue>

using namespace std;

queue<string> nama;

// Menambah antrian pasien
void Ngantri(string pasien){
    nama.push(pasien);
}

// Memanggil Pasien
void Manggil1(){
    cout << nama.front();
}

void Manggil2(){
    cout << nama.back();
}

// Melihat jumlah antrian pasien
void Jumlah(){
    cout << nama.size();
}

// Melihat nama pasien yang mengantri
void Cek(){
    for (int i = nama.size(); i > 0; i--) {
        cout << nama.front() << endl;
        nama.pop();
    }
}

int main() {
    int pilih;
    string pasien, panggil;

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
        b:
        cout << "NAMA PASIEN : ";
        cin >> pasien;
        Ngantri(pasien);
    }else if(pilih == 2){
        cout << "AWAL/AKHIR ? ";
        cin >> panggil;
        if(panggil == "awal" || panggil == "Awal" || panggil == "AWAL"){
            Manggil1();
        }else if (panggil == "akhir" || panggil == "Akhir" || panggil == "AKHIR")
        {
            Manggil2();
        }else{
            cout << "MENU TIDAK TERSEDIA !" << endl;
            cout << "SILAHKAN PILIH KEMBALI !" << endl;
            goto b;
        }
        
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