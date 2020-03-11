#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    /*
    Nama    : Manuel Benedict
    NIM     : 1301194182
    */

    List N;
    infotype X;
    address P;
    int i;

    createList (N);
    cout<<"Masukkan digit NIM ke-3 terakhir: ";
    cin>>X;
    P = allocate(X);
    insertFirst(N, P);
    printInfo(N);

    cout<<"Masukkan digit NIM ke-2 terakhir: ";
    cin>>X;
    P = allocate(X);
    insertFirst(N, P);
    printInfo(N);

    cout<<"Masukkan digit NIM terakhir: ";
    cin>>X;
    P = allocate(X);
    insertFirst(N, P);
    printInfo(N);

    deleteFirst(N, P);
    cout<<"Keluaran setelah angka pertama dihapus: " ;
    printInfo(N);
    return 0;
}
