#include <iostream>
using namespace std;

class Person {
private:
    string firstName;
    string lastName;
    string personId;

public:
    Person();
    Person(string fn, string ln, string id);
    
    string getFirstName();
    string getLastName();
    string getPersonId();
    
    void setFirstName(string fn);
    void setLastName(string ln);
    void setPersonId(string id);
};