#include <iostream>

using namespace std;

void insertionSort(int arr[], int panjang){
    for (int i = 1; i < panjang; i++){
        int key = arr[i];
        int j = i - 1;

        while (key > arr[j] && j >= 0){
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main(){
    int arr[] = {1, 5, 2, 4, 3};
    int panjang = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, panjang);
    cout << "Mengurutkan Array Dari Yang Terbesar :" << endl;
        for (int i = 0; i < panjang; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}