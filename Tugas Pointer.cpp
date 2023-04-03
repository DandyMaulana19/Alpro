#include <iostream>

using namespace std;

double bil1, bil2, hasil, pilih;
string ulang;

void Tambah(double *bil1, double *bil2, double *hasil){
    *hasil = *bil1 + *bil2;
}

void Kurang(double *bil1, double *bil2, double *hasil){
    *hasil = *bil1 - *bil2;
}

void Kali(double *bil1, double *bil2, double *hasil){
    *hasil = *bil1 * *bil2;
}

void Bagi(double *bil1, double *bil2, double *hasil){
    *hasil = *bil1 / *bil2;
}

void Pangkat(double *bil1, double *bil2, double *hasil){
    
    int pangkat;
    pangkat = 1;

    for(int i = 1; i <= *bil2; i++){
        pangkat = pangkat * *bil1;
    }
    
    *hasil = pangkat;
}

int main(){

    a:
    cout << "       KALKULATOR    " << endl << endl;
    cout << "========================" << endl;
    cout << "|| 1 ||  PERTAMBAHAN  ||" << endl;
    cout << "|| 2 ||  PENGURANGAN  ||" << endl;
    cout << "|| 3 ||   PERKALIAN   ||" << endl;
    cout << "|| 4 ||   PEMBAGIAN   ||" << endl;
    cout << "|| 5 ||  PERPANGKATAN ||" << endl;
    cout << "========================" << endl << endl;
    
    cout << "Pilih Menu : ";
    cin >> pilih;

    if (pilih == 1){
        cout << "Masukkan angka pertama :";
        cin >> bil1;
        cout << "Masukkan angka kedua : ";
        cin >> bil2; 
        Tambah(&bil1, &bil2, &hasil);
    }else if (pilih == 2){
        cout << "Masukkan angka pertama :";
        cin >> bil1;
        cout << "Masukkan angka kedua : ";
        cin >> bil2; 
        Kurang(&bil1, &bil2, &hasil);
    }else if(pilih == 3){
        cout << "Masukkan angka pertama :";
        cin >> bil1;
        cout << "Masukkan angka kedua : ";
        cin >> bil2; 
        Kali(&bil1, &bil2, &hasil);
    }else if(pilih == 4){
        cout << "Masukkan angka pertama :";
        cin >> bil1;
        cout << "Masukkan angka kedua : ";
        cin >> bil2; 
        Bagi(&bil1, &bil2, &hasil);
    }else if(pilih == 5){
        cout << "Masukkan angka pertama :";
        cin >> bil1;
        cout << "Masukkan pangkat : ";
        cin >> bil2; 
        Pangkat(&bil1, &bil2, &hasil);
    }else{
        cout << "PILIHAN TIDAK TERSEDIA !" << endl << endl;
        cout << "SILAHKAN MEMILIH KEMBALI !" << endl << endl;
        goto a;
    }
    cout << "Hasil : " << hasil << endl << endl;
    goto a;
}
