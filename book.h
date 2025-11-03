#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    string genre;
    bool isOnHand;
    string borrowerId;

public:
    Book();
    Book(string t, string a, string g);
    
    string getTitle();
    string getAuthor();
    string getGenre();
    bool getIsOnHand();
    string getBorrowerId();
    
    void setTitle(string t);
    void setAuthor(string a);
    void setGenre(string g);
    void setIsOnHand(bool status);
    void setBorrowerId(string id);
};