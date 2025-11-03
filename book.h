#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    string genre;
    int authorAge;
    bool isOnHand;
    string borrowerId;

public:
    Book();
    Book(string t, string a, string g, int age);
    
    string getTitle();
    string getAuthor();
    string getGenre();
    int getAuthorAge();
    bool getIsOnHand();
    string getBorrowerId();
    
    void setTitle(string t);
    void setAuthor(string a);
    void setGenre(string g);
    void setAuthorAge(int age);
    void setIsOnHand(bool status);
    void setBorrowerId(string id);
};