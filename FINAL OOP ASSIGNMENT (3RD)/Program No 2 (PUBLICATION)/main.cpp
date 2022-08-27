#include <iostream>
#include "publication.cpp"
#include "book.h"
#include "tape.h"
using namespace std;

int main(){
    Publication pub,*pPub;
    Book book,*pBook;
    Tape tape,*pTape;

    pub.getData();
    pub.putData();
    pub.showPrice();

    system("pause");
    system("cls");

    book.getData();
    book.putData();
    book.showPrice();

    system("pause");
    system("cls");

    tape.getData();
    tape.putData();
    tape.showPrice();

    system("pause");
    system("cls");

    // Allocating Dynamic Memory

    pPub = new Publication;
    pBook = new Book;
    pTape = new Tape;

    pPub -> getData();
    pPub -> putData();
    pPub -> showPrice();

    system("pause");
    system("cls");

    pBook -> getData();
    pBook -> putData();
    pBook -> showPrice();

    system("pause");
    system("cls");

    pTape -> getData();
    pTape -> putData();
    pTape -> showPrice();

    system("pause");
    system("cls");

    // Releasing Memory

    delete pPub;
    delete pBook;
    delete pTape;

    return 0;
}