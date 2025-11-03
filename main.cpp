#include <iostream>
#include "Library.h"
using namespace std;

int main() {
    Library lib;
    
    try {
        lib.addBook("Война и мир", "Толстой Л.Н.", "Роман", 82);
        lib.addBook("1984", "Оруэлл Дж.", "Антиутопия", 46);
        lib.addBook("Мастер и Маргарита", "Булгаков М.А.", "Роман", 48);

        lib.addVisitor("Иван", "Иванов", "P001");
        lib.addVisitor("Мария", "Петрова", "P002");
        
        Book* book1 = lib.findBook("Война и мир");
        Book* book2 = lib.findBook("1984");
        Book* book3 = lib.findBook("Мастер и Маргарита");
        Person* person = lib.findVisitor("P001");
        
        if (book1 && book2 && book3 && person) {
            // Выдаем книги
            lib.borrowBook("P001", book1);
            cout << "Книга 1 выдана" << endl;
            
            lib.borrowBook("P001", book2);
            cout << "Книга 2 выдана" << endl;
            
            lib.borrowBook("P001", book3);
            cout << "Книга 3 выдана" << endl;            
            cout << "Посетитель " << person->getFirstName() << " взял " 
                 << person->getBookCount() << " книг(и)" << endl;
        }
        
    } catch (const char* error) {
        cout << error << endl;
    }
    
    return 0;
}