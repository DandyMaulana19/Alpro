#include <iostream>

using namespace std;

int main()
{
    int pilih;

        cout << "1. Operasi Mata" << endl;
        cout << "2. Operasi Jantung" << endl;
        cout << "Pilih Jenis Operasi : ";
        cin >> pilih;

    switch(pilih){
        case 1:
            if (pilih == 1) {
                cout << "1. Katarak" << endl;
                cout << "2. Plus/Minus" << endl;
                cout << "3. Silinder" << endl;
                cout << "Pilih Jenis Operasi Mata : ";
                cin >> pilih;
                
                if (pilih == 1){
                    cout << "Biayanya adalah Rp. 7.500.000";
                }else if(pilih== 2){
                    cout << "Biayanya adalah Rp. 5.000.000";
                }else if(pilih == 3){
                    cout << "Biayanya adalah Rp. 4.000.000";
                }else{
                    cout << "Input Anda Salah";
                }
            }   
            break;

        case 2:
            if(pilih == 2){
                cout << "1. Jantung Koroner" << endl;
                cout << "2. Katup Jantung" << endl;            
                cout << "3. Otot Jantung" << endl;
                cout << "Pilih Jenis Operasi Jantung : ";
                cin >> pilih;

                if (pilih == 1){                    
                    cout << "Biayanya adalah Rp. 500.000.000";
                }else if(pilih == 2){
                    cout << "Biayanya adalah Rp. 350.000.000";
                }else if(pilih == 3) {
                    cout << "Biayanya adalah Rp. 450.000.000";
                }else{
                    cout << "Input Anda Salah";
                }
            }
            break;
            
        default:     
                cout << "Operasi yang anda pilih tidak tersedia!";

    return 0;
    }
}