#include "cdll.h"

/**
    Nama    : Manuel Benedict
    NIM     : 1301194182
**/

bool isEmpty(List L)
{
    return (first(L)==NULL) ;
}

void createList(List &L)
{
    first(L) = NULL ;
}

void createNewElmt(infotype X, address &P)
{
    P = new elmList ;
    next(P) = NULL ;
    prev(P) = NULL ;
    info(P) = X ;
}

void insertFirst(List &L, address P)
{
    if (isEmpty(L))
    {
        first(L) = P ;
        next(P) = P ;
        prev(P) = P ;
    }
    else
    {
        next(P) = first(L) ;
        prev(P) = prev(first(L)) ;
        next(prev(first(L))) = P ;
        prev(first(L)) = P ;
        first(L) = P ;
    }
}

void insertAfter(address Prec, address P)
{
    prev(next(Prec)) = P ;
    next(P) = next(Prec) ;
    next(Prec) = P ;
    prev(P) = Prec ;
}

void deleteFirst(List &L, address &P)
{
    P = first(L) ;
    if (next(P) == first(L))
    {
        first(L) = NULL ;
    }
    else
    {
        next(prev(first(L))) = next(P) ;
        first(L) = next(P) ;
        next(prev(first(L))) = first(L) ;
    }
}


void deleteAfter(address Prec, address &P)
{
    P = next(Prec) ;
    if (next(next(Prec)) == Prec)
    {

        next(P) = NULL ;
        prev(P) = NULL ;
        next(Prec) = Prec ;
        prev(Prec) = Prec ;
    }
    else
    {
        next(Prec) = next(P) ;
        prev(next(P)) = Prec ;
        next(P) = NULL ;
        prev(P) = NULL ;
    }
}


int countWord (char data[3], List L)
{
    address P ;
    int i;
    P = first(L) ;
    i = 0;
    while (P != prev(first(L)))
    {
        if ((info(P) == data[1]) && (info(next(P)) == data[2]) && (info(next(next(P))) == data[3]))
        {
            i++ ;
        }
        P = next(P) ;
    }
    return i ;
}

void printInfo(List L)
{
    address P ;
    P = first(L) ;
    if (!isEmpty(L))
    {
        cout<<info(P)<<" " ;
        P = next(P) ;
        while (P != first(L))
        {
            cout<<info(P)<<" " ;
            P = next(P) ;
        }
    }
    else
    {
        cout<<"List kosong" ;
    }
    cout<<endl ;
}
