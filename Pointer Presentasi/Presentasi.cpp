#include <iostream>

using namespace std;

int main(){
    int *ptra, a;
    // Deklarasi Value
    a = 5;
    // Deklarasi Pointer
    ptra = &a;
    
    // Deklarasi PointertoPointer
    int **ptrToPtr;
    ptrToPtr = &ptra;

    cout << a << endl;
    cout << *ptra << endl;
    cout << **ptrToPtr << endl;
}