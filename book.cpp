#include "Book.h"

Book::Book() {
    title = "";
    author = "";
    genre = "";
    isOnHand = false;
    borrowerId = "";
}

Book::Book(string t, string a, string g) {
    title = t;
    author = a;
    genre = g;
    isOnHand = false;
    borrowerId = "";
}

string Book::getTitle() { return title; }
string Book::getAuthor() { return author; }
string Book::getGenre() { return genre; }
bool Book::getIsOnHand() { return isOnHand; }
string Book::getBorrowerId() { return borrowerId; }

void Book::setTitle(string t) { title = t; }
void Book::setAuthor(string a) { author = a; }
void Book::setGenre(string g) { genre = g; }
void Book::setIsOnHand(bool status) { isOnHand = status; }
void Book::setBorrowerId(string id) { borrowerId = id; }