#include "Library.h"

Library::Library() {
    bookCount = 0;
    visitorCount = 0;
    for (int i = 0; i < 100; i++) {
        books[i] = nullptr;
    }
    for (int i = 0; i < 50; i++) {
        visitors[i] = nullptr;
    }
}

Library::~Library() {
    for (int i = 0; i < bookCount; i++) {
        delete books[i];
    }
    for (int i = 0; i < visitorCount; i++) {
        delete visitors[i];
    }
}

int Library::getBookCount() { return bookCount; }
int Library::getVisitorCount() { return visitorCount; }

void Library::addBook(string title, string author, string genre, int authorAge) {
    if (bookCount >= 100) {
        throw "Ошибка";
    }
    
    try {
        books[bookCount] = new Book(title, author, genre, authorAge);
        bookCount++;
    } catch (const char* error) {
        throw error;
    }
}

void Library::addVisitor(string firstName, string lastName, string id) {
    if (visitorCount >= 50) {
        throw "Ошибка";
    }
    
    visitors[visitorCount] = new Person(firstName, lastName, id);
    visitorCount++;
}

void Library::borrowBook(string personId, Book* book) {
    Person* person = findVisitor(personId);
    if (person == nullptr) {
        throw "Ошибка";
    }
    
    try {
        person->borrowBook(book);
    } catch (const char* error) {
        throw error;
    }
}

void Library::returnBook(string personId, Book* book) {
    Person* person = findVisitor(personId);
    if (person == nullptr) {
        throw "Ошибка";
    }
    
    try {
        person->returnBook(book);
    } catch (const char* error) {
        throw error;
    }
}

Book* Library::findBook(string title) {
    for (int i = 0; i < bookCount; i++) {
        if (books[i]->getTitle() == title) {
            return books[i];
        }
    }
    return nullptr;
}

Person* Library::findVisitor(string id) {
    for (int i = 0; i < visitorCount; i++) {
        if (visitors[i]->getPersonId() == id) {
            return visitors[i];
        }
    }
    return nullptr;
}