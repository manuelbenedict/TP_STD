#include <iostream>
#include "doublelinkedlist.h"

/**
    Nama    : Manuel Benedict
    NIM     : 1301194182
**/


int main()
{

    List L1,L2,L3 ;
    address P,Prec ;

    createList(L1) ;
    createNewElmt(4,P) ;
    insertFirst(L1,P) ;
    printInfo(L1) ;
    cout<<"Keluaran L1 yang seharusnya: 4" ;
    cout<<endl ;
    createNewElmt(2,P) ;
    insertFirst(L1,P) ;
    printInfo(L1) ;
    cout<<"Keluaran L1 yang seharusnya: 2 4" ;
    cout<<endl ;
    createNewElmt(1,P) ;
    insertFirst(L1,P) ;
    printInfo(L1) ;
    cout<<"Keluaran L1 yang seharusnya: 1 2 4" ;
    cout<<endl ;
    deleteFirst(L1,P);
    cout<<"Keluaran L1 setelah elemen pertama dihapus: " ;
    printInfo(L1) ;
    cout<<endl ;
    Prec = findElm(L1,2) ;
    createNewElmt(7,P) ;
    insertAfter(L1,Prec,P) ;
    printInfo(L1) ;
    cout<<"Keluaran L1 setelah elemen ditambahkan: 2 7 4" ;
    cout<<endl ;

    Prec = findElm(L1,2) ;
    deleteAfter(L1,Prec,P);
    printInfo(L1) ;
    cout<<"Keluaran L1 setelah elemen dihapus: 2 4" ;
    cout<<endl ;
    cout<<endl ;

    createList(L2) ;
    createNewElmt(7,P) ;
    insertLast(L2,P) ;
    printInfo(L2) ;
    cout<<"Keluaran L2 yang seharusnya: 7" ;
    cout<<endl ;
    createNewElmt(8,P) ;
    insertLast(L2,P) ;
    printInfo(L2) ;
    cout<<"Keluaran L2 yang seharusnya: 7 8" ;
    cout<<endl ;
    createNewElmt(9,P) ;
    insertLast(L2,P) ;
    printInfo(L2) ;
    cout<<"Keluaran L2 yang seharusnya: 7 8 9" ;
    cout<<endl ;
    deleteLast(L2,P);
    cout<<"Keluaran L2 setelah elemen terakhir dihapus: " ;
    printInfo(L2) ;
    cout<<endl ;

    createList(L3) ;
    concat(L1,L2,L3);
    cout<<"Keluaran L3 (gabungan dari L1 dan L2): " ;
    printInfo(L3) ;
    cout<<"Median dari L3: "<<median(L3) ;
    cout<<endl ;

    return 0 ;
}


