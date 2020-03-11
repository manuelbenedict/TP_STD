#ifndef DOUBLELINKEDLIST_H_INCLUDED
#define DOUBLELINKEDLIST_H_INCLUDED

/**
    Nama    : Manuel Benedict
    NIM     : 1301194182
**/

#include <iostream>
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
using namespace std ;

typedef int infotype ;
typedef struct elmtList *address ;

struct elmtList
{
    infotype info ;
    address prev ;
    address next ;
};

struct List
{
    address first ;
    address last ;
};

bool isEmpty (List L) ;
void createList (List &L) ;
void createNewElmt (infotype X, address &P) ;
void insertFirst(List &L, address P) ;
void insertAfter(List &L, address &Prec, address &P) ;
void insertLast(List &L, address P) ;
void deleteFirst(List &L, address &P) ;
void deleteAfter(List &L, address &Prec, address &P) ;
void deleteLast(List &L, address &P) ;
void concat(List L1, List L2, List &L3) ;
float median(List L) ;
void printInfo (List L) ;
address findElm(List L, infotype X) ;

#endif // DOUBLELINKEDLIST_H_INCLUDED
