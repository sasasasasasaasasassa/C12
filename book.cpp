#include "Book.h"

Book::Book() {
    title = "";
    author = "";
    genre = "";
    authorAge = 0;
    isOnHand = false;
    borrowerId = "";
}

Book::Book(string t, string a, string g, int age) {
    if (age < 0 || age > 150) {
        throw "Ошибка";
    }
    
    title = t;
    author = a;
    genre = g;
    authorAge = age;
    isOnHand = false;
    borrowerId = "";
}

string Book::getTitle() { return title; }
string Book::getAuthor() { return author; }
string Book::getGenre() { return genre; }
int Book::getAuthorAge() { return authorAge; }
bool Book::getIsOnHand() { return isOnHand; }
string Book::getBorrowerId() { return borrowerId; }

void Book::setTitle(string t) { title = t; }
void Book::setAuthor(string a) { author = a; }
void Book::setGenre(string g) { genre = g; }

void Book::setAuthorAge(int age) {
    if (age < 0 || age > 150) {
        throw "Ошибка";
    }
    authorAge = age;
}

void Book::setIsOnHand(bool status) { isOnHand = status; }
void Book::setBorrowerId(string id) { borrowerId = id; }