#include "cdll.h"

/**
    Nama    : Manuel Benedict
    NIM     : 1301194182
**/


int main()
{
    List L ;
    address A1,T1,T2,C1,A2,S,C2,A3;
    char data[3] ;

    createList(L) ;
    printInfo(L) ;

    createNewElmt('a',A1) ;
    insertFirst(L,A1) ;

    createNewElmt('t',T1) ;
    insertFirst(L,T1) ;

    createNewElmt('t',T2) ;
    insertAfter(A1,T2) ;

    createNewElmt('c',C1) ;
    insertAfter(T1,C1) ;

    createNewElmt('a',A2) ;
    insertAfter(T2,A2) ;

    createNewElmt('s',S) ;
    insertAfter(A2,S) ;


    createNewElmt('c',C2) ;
    insertAfter(S,C2) ;

    createNewElmt('a',A3) ;
    insertAfter(C2,A3) ;
    printInfo(L) ;

    data[1] = 'c' ;
    data[2] = 'a' ;
    data[3] = 't' ;
    cout<<"Jumlah kata cat: "<<countWord(data,L) ;

}
