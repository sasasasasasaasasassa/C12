#include "Library.h"

Library::Library() {
    bookCount = 0;
    visitorCount = 0;
}

int Library::getBookCount() { return bookCount; }
int Library::getVisitorCount() { return visitorCount; }

void Library::setBookCount(int count) { bookCount = count; }
void Library::setVisitorCount(int count) { visitorCount = count; }