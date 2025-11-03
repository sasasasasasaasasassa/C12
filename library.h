#include <iostream>
#include "Book.h"
#include "Person.h"
using namespace std;

class Library {
private:
    Book* books[100];
    int bookCount;
    Person* visitors[50];
    int visitorCount;

public:
    Library();
    ~Library();
    
    int getBookCount();
    int getVisitorCount();
    
    void addBook(string title, string author, string genre, int authorAge);
    void addVisitor(string firstName, string lastName, string id);
    void borrowBook(string personId, Book* book);
    void returnBook(string personId, Book* book);
    
    Book* findBook(string title);
    Person* findVisitor(string id);
};