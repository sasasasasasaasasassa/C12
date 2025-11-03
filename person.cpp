#include "Person.h"

Person::Person() {
    firstName = "";
    lastName = "";
    personId = "";
    bookCount = 0;
    for (int i = 0; i < 3; i++) {
        borrowedBooks[i] = nullptr;
    }
}

Person::Person(string fn, string ln, string id) {
    firstName = fn;
    lastName = ln;
    personId = id;
    bookCount = 0;
    for (int i = 0; i < 3; i++) {
        borrowedBooks[i] = nullptr;
    }
}

string Person::getFirstName() { return firstName; }
string Person::getLastName() { return lastName; }
string Person::getPersonId() { return personId; }
int Person::getBookCount() { return bookCount; }

void Person::setFirstName(string fn) { firstName = fn; }
void Person::setLastName(string ln) { lastName = ln; }
void Person::setPersonId(string id) { personId = id; }

void Person::borrowBook(Book* book) {
    if (bookCount >= 3) {
        throw "Ошибка";
    }
    
    if (book == nullptr) {
        throw "Ошибка";
    }
    
    if (book->getIsOnHand()) {
        throw "Ошибка";
    }
    
    borrowedBooks[bookCount] = book;
    bookCount++;
    book->setIsOnHand(true);
    book->setBorrowerId(personId);
}

void Person::returnBook(Book* book) {
    if (book == nullptr) {
        throw "Ошибка";
    }
    
    bool found = false;
    for (int i = 0; i < bookCount; i++) {
        if (borrowedBooks[i] == book) {
            for (int j = i; j < bookCount - 1; j++) {
                borrowedBooks[j] = borrowedBooks[j + 1];
            }
            borrowedBooks[bookCount - 1] = nullptr;
            bookCount--;
            book->setIsOnHand(false);
            book->setBorrowerId("");
            found = true;
            break;
        }
    }
    
    if (!found) {
        throw "Ошибка";
    }
}