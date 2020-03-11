#include <iostream>
#include "list.h"
using namespace std;

/*
    Nama    : Manuel Benedict
    NIM     : 1301194182
*/

void createList (List &L)
{
    first(L) = NULL ;
}

address allocate(infotype X)
{
    address P = new elmlist;
    info(P) = X;
    next(P) = NULL;
    return P;
}

void insertFirst(List &L, address P)
{
    next(P) = first(L);
    first(L) = P;
}

void insertLast(List &L, address P)
{
    address R;
    R = first(L);
    while(next(R) != NULL)
    {
        R = next(R);
    }
    next(R) = P;
}

void printInfo (List L)
{
    address P = first(L);
    while (P != NULL)
    {
        cout<<info(P)<<", ";
        P = next(P);
    }
    cout<<endl;
}

void deleteFirst (List &L, address &P)
{
    if (first(L) != NULL) {
        P = first(L);
        first(L) = next(P) ;
        next(P) = NULL ;
    }
}
