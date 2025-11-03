#include <iostream>
#include "Book.h"
using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    string personId;
    Book* borrowedBooks[3];
    int bookCount;

public:
    Person();
    Person(string fn, string ln, string id);
    
    string getFirstName();
    string getLastName();
    string getPersonId();
    int getBookCount();
    
    void setFirstName(string fn);
    void setLastName(string ln);
    void setPersonId(string id);
    
    void borrowBook(Book* book);
    void returnBook(Book* book);
};