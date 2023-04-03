#include <iostream>

using namespace std;

void selectionSort(int arr[], int panjang) {

    int max, temp;
    
    for (int i = panjang - 1; i > 0; i--) {
        max = 0;
        for (int j = 1; j <= i; j++) {
            if (arr[j] < arr[max])
                max = j;
        }
        temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
}

int main(){
    int arr[] = {1, 5, 9, 4, 7};
    int panjang = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, panjang);
    cout << "Mengurutkan Array Dari yang Terbesar :" << endl;
        for (int i = 0; i < panjang; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
