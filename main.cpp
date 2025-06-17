#include "Library.h"
#include <iostream>
using namespace std;

int main() {
    string filename = "library.csv";
    int choice;

    do {
        cout << endl << "=== Library Management System ===" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Delete Book" << endl;
        cout << "5. Update Book" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose: ";
        cin >> choice;

        switch (choice) {
        case 1: addBook(filename); break;
        case 2: viewBooks(filename); break;
        case 3: searchBook(filename); break;
        case 4: deleteBook(filename); break;
        case 5: updateBook(filename); break;
        case 0: cout << "Goodbye!" << endl; break;
        default: cout << "Invalid choice." << endl;
        }
    } while (choice != 0);

    return 0;
}
