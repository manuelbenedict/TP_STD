#include "doublelinkedlist.h"

/**
    Nama    : Manuel Benedict
    NIM     : 1301194182
**/

bool isEmpty (List L)
{
    return ((first(L) == NULL) && (last(L) == NULL)) ;
}

void createList (List &L)
{
    first(L) = NULL ;
    last(L) = NULL ;
}

void createNewElmt (infotype X, address &P)
{
    P = new elmtList ;
    next(P) = NULL ;
    prev(P) = NULL ;
    info(P) = X ;
}

void insertFirst(List &L, address P)
{
    if (isEmpty(L))
    {
        last(L) = P ;
    }
    else
    {
        next(P) = first(L) ;
        prev(first(L)) = P ;
    }
    first(L) = P ;
}

void insertAfter(List &L, address &Prec, address &P)
{
    next(P) = next(Prec) ;
    prev(P) = Prec ;
    prev(next(Prec)) = P ;
    next(Prec) = P ;
}

void insertLast(List &L, address P)
{
    if (last(L) != NULL)
    {
        prev(P) = last(L) ;
        next(last(L)) = P ;
        last(L) = P ;
    }
    else
    {
        first(L) = P ;
        last(L) = P ;
    }
}

void deleteFirst(List &L, address &P)
{
    if (first(L) != NULL)
    {
        P = first(L) ;
        first(L) = next(P) ;
        next(P) = NULL ;
        prev(first(L)) = NULL ;
    }
    else if (first(L) == last(L))
    {
        P = first(L) ;
        first(L) = NULL ;
        last(L) = NULL ;
    }
}

void deleteAfter(List &L, address &Prec, address &P)
{
    P = next(Prec) ;
    next(Prec) = next(P) ;
    next(P) = NULL ;
}

void deleteLast(List &L, address &P)
{
    if (last(L) != NULL)
    {
        P = last(L) ;
        last(L) = prev(P) ;
        prev(P) = NULL ;
        next(last(L)) = NULL ;
    }
    else if (last(L) == first(L))
    {
        P = last(L) ;
        last(L) = NULL ;
        first(L) = NULL ;
    }
}

void concat(List L1, List L2, List &L3)
{
    address P,Q ;
    P = first(L1) ;
    while (P != NULL)
    {
        insertLast(L3,P) ;
        P = next(P) ;
    }
    Q = first(L2) ;
    while (Q != NULL)
    {
        insertLast(L3,Q) ;
        Q = next(Q) ;
    }
}

float median(List L)
{
    address P,Q ;
    int hitungelemen,tengah,i ;
    float kiri,kanan,median ;
    Q = first(L);
    hitungelemen = 0 ;
    while (Q != NULL)
    {
        hitungelemen++;
        Q = next(Q);
    }
    tengah = hitungelemen / 2;
    if (hitungelemen% 2==1)
    {
        i = 0 ;
        P = first(L);
        while (tengah > i)
        {
            P = next(P);
            i++;
        }
        tengah++ ;
        return info(P) ;
    }
    else
    {
        i = 1 ;
        P = first(L) ;
        while (tengah > i)
        {
            P = next(P);
            i++;
        }
        kiri= info(P);
        kanan = info(next(P));
        median = (kiri+kanan)/2;
        return median;
    }
}

void printInfo (List L)
{
    address P;
    P = first(L) ;
    while (P != NULL)
    {
        cout<<info(P)<<" " ;
        P = next(P) ;
    }
    cout<<endl ;
}

address findElm(List L, infotype X)
{
    address P ;
    P = first(L) ;
    while ((P != NULL) && (X != info(P)))
    {
        P = next(P) ;
    }
    return P ;
}
