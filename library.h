#include <iostream>
using namespace std;

class Library {
private:
    int bookCount;
    int visitorCount;

public:
    Library();
    
    int getBookCount();
    int getVisitorCount();
    
    void setBookCount(int count);
    void setVisitorCount(int count);
};