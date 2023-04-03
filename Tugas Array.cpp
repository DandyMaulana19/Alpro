#include <iostream>

using namespace std;

int pilih;

void maskapai(void);
void maskapai2(void);
void maskapai3(void);

void maskapai(){
    cout << "SILAHKAN PILIH MASKAPAI" << endl << endl;
    cout << " ====================" << endl;
    cout << " || NO || MASKAPAI ||" << endl;
    cout << " ====================" << endl;
    cout << " ||  1 || CITILINK ||" << endl;
    cout << " ||  2 || LION AIR ||" << endl;
    cout << " ||  3 ||  GARUDA  ||" << endl;
    cout << " ====================" << endl;
    cout << "Maskapai : ";
    cin >> pilih;
}

void maskapai2(int pilih){
    goto1 :
    cout << endl;
    if (pilih == 1 || pilih == 2 || pilih == 3){
        cout << "SILAHKAN PILIH KELAS" << endl << endl;
        cout << " =====================" << endl;
        cout << " || NO || KELAS     ||" << endl;
        cout << " =====================" << endl;
        cout << " ||  1 || EKONOMI   ||" << endl;
        cout << " ||  2 || BISNIS    ||" << endl;
        cout << " ||  3 || EKSEKUTIF ||" << endl;
        cout << " =====================" << endl;
        cout << "Kelas : ";
        cin >> pilih;
    }else{
        cout << "Pilihan Anda Tidak Tersedia" << endl;
        cout << " Silahkan Memilih Kembali! " << endl;
        goto goto1;
    }
}

void maskapai3(int pilih){
    goto2 :
    if (pilih == 1){
        cout << endl;
        cout << "        SILAHKAN PILIH JADWAL     " << endl << endl;
        cout << " =========================================" << endl;
        cout << " ||  NO  || KEBERANGKATAN ||    HARGA   ||" << endl;
        cout << " =========================================" << endl;
        cout << " ||   1  ||     14.00     ||   800.000  ||" << endl;
        cout << " ||   2  ||     17.00     ||  1.000.000 ||" << endl;
        cout << " ||   3  ||     22.00     ||  1.200.000 ||" << endl;
        cout << " ||   4  ||     01.00     ||  1.400.000 ||" << endl;
        cout << " =========================================" << endl;        
        cout << "Jadwal : ";
        cin >> pilih;
    }else if (pilih == 2){
        cout << endl;
        cout << "        SILAHKAN PILIH JADWAL     " << endl << endl;
        cout << " ==========================================" << endl;
        cout << " ||  NO  ||  KEBERANGKATAN ||    HARGA   ||" << endl;
        cout << " ==========================================" << endl;
        cout << " ||   1  ||      14.00     ||  1.000.000 ||" << endl;
        cout << " ||   2  ||      17.00     ||  1.300.000 ||" << endl;
        cout << " ||   3  ||      22.00     ||  1.500.000 ||" << endl;
        cout << " ||   4  ||      01.00     ||  1.700.000 ||" << endl;
        cout << " ==========================================" << endl;
        cout << "Jadwal : ";
        cin >> pilih;
    }else if (pilih == 3){
        cout << endl;
        cout << "        SILAHKAN PILIH JADWAL     " << endl << endl;
        cout << " ==========================================" << endl;
        cout << " ||  NO  ||  KEBERANGKATAN ||    HARGA   ||" << endl;
        cout << " ==========================================" << endl;
        cout << " ||   1  ||      14.00     ||  1.600.000 ||" << endl;
        cout << " ||   2  ||      17.00     ||  1.800.000 ||" << endl;
        cout << " ||   3  ||      22.00     ||  2.000.000 ||" << endl;
        cout << " ||   4  ||      01.00     ||  2.100.000 ||" << endl;
        cout << " ==========================================" << endl;        
        cout << "Jadwal : ";
        cin >> pilih; 
    }else{
        cout << "Pilihan Anda Tidak Tersedia" << endl;
        cout << " Silahkan Memilih Kembali! " << endl;
        goto goto2;
    }
}

int main(){
    int arr[3][3][4] = {
        {{800000, 1000000, 1200000, 1400000},
         {800000, 1000000, 1200000, 1400000},
         {800000, 1000000, 1200000, 1400000}},

        {{1000000, 1300000, 1500000, 1700000},
         {1000000, 1300000, 1500000, 1700000},
         {1000000, 1300000, 1500000, 1700000}},

        {{1600000, 1800000, 2000000, 2100000},
         {1600000, 1800000, 2000000, 2100000},
         {1600000, 1800000, 2000000, 2100000}},

    };
    maskapai();
    maskapai2(pilih);
    maskapai3(pilih);
    pilih = pilih - 1;
    cout << "Harga Tiket Anda :" << arr[pilih][pilih][pilih] << endl;
}