#include <iostream>

using namespace std;

// int main(){
//     int *ptr;
//     int arr[5] = { 5, 6, 7, 8, 9};
//     ptr = &arr[1];
    
//     cout << *ptr << endl;
// }


int main(){
    int *ptr;
    int arr[5] = { 5, 6, 7, 8, 9};
    ptr = &arr[0];

    cout << *ptr + 1;
    cout << *ptr + 2;
    cout << *ptr + 3 << endl;
}