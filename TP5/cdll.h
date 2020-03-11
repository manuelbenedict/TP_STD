#ifndef CDLL_H_INCLUDED
#define CDLL_H_INCLUDED

/**
    Nama    : Manuel Benedict
    NIM     : 1301194182
**/

#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
using namespace std ;

typedef char infotype ;
typedef struct elmList *address ;

struct elmList
{
    infotype info ;
    address prev,next ;
};

struct List
{
    address first ;
};

bool isEmpty(List L) ;
void createList(List &L) ;
void createNewElmt(infotype X, address &P) ;
void insertFirst(List &L, address P) ;
void insertAfter(address Prec, address P) ;
void deleteFirst(List &L, address &P) ;
void deleteAfter(address Prec, address &P) ;
int countWord(char data[3], List L) ;
void printInfo(List L) ;




#endif // CDLL_H_INCLUDED
