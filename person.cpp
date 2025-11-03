#include "Person.h"

Person::Person() {
    firstName = "";
    lastName = "";
    personId = "";
}

Person::Person(string fn, string ln, string id) {
    firstName = fn;
    lastName = ln;
    personId = id;
}

string Person::getFirstName() { return firstName; }
string Person::getLastName() { return lastName; }
string Person::getPersonId() { return personId; }

void Person::setFirstName(string fn) { firstName = fn; }
void Person::setLastName(string ln) { lastName = ln; }
void Person::setPersonId(string id) { personId = id; }