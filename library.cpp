#include "library.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

vector<Book> loadBooks(const string& filename) {
    vector<Book> books;
    ifstream file(filename);
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string isbn, title, author, yearStr;
        getline(ss, isbn, ',');
        getline(ss, title, ',');
        getline(ss, author, ',');
        getline(ss, yearStr);
        int year = stoi(yearStr);
        books.push_back(Book(isbn, title, author, year));
    }

    file.close();
    return books;
}

void saveBooks(const string& filename, const vector<Book>& books) {
    ofstream file(filename);
    for (const Book& b : books) {
        file << b.toCSV() << "\n";
    }
    file.close();
}

void addBook(const string& filename) {
    string isbn, title, author;
    int year;
    cout << "Enter ISBN: "; cin >> isbn;
    cin.ignore();
    cout << "Enter Title: "; getline(cin, title);
    cout << "Enter Author: "; getline(cin, author);
    cout << "Enter Year: "; cin >> year;

    ofstream file(filename, ios::app);
    file << isbn << "," << title << "," << author << "," << year << "\n";
    file.close();
    cout << "Book added successfully.\n";
}

void viewBooks(const string& filename) {
    vector<Book> books = loadBooks(filename);
    if (books.empty()) {
        cout << "No books found.\n";
        return;
    }
    for (const Book& b : books) {
        b.display();
    }
}

void searchBook(const string& filename) {
    string targetISBN;
    cout << "Enter ISBN to search: ";
    cin >> targetISBN;

    vector<Book> books = loadBooks(filename);
    for (const Book& b : books) {
        if (b.isbn == targetISBN) {
            cout << "Book found:\n";
            b.display();
            return;
        }
    }
    cout << "Book not found.\n";
}

void deleteBook(const string& filename) {
    string targetISBN;
    cout << "Enter ISBN to delete: ";
    cin >> targetISBN;

    vector<Book> books = loadBooks(filename);
    vector<Book> updatedBooks;
    bool found = false;

    for (const Book& b : books) {
        if (b.isbn == targetISBN) {
            found = true;
        }
        else {
            updatedBooks.push_back(b);
        }
    }

    if (found) {
        saveBooks(filename, updatedBooks);
        cout << "Book deleted.\n";
    }
    else {
        cout << "Book not found.\n";
    }
}

void updateBook(const string& filename) {
    string targetISBN;
    cout << "Enter ISBN to update: ";
    cin >> targetISBN;

    vector<Book> books = loadBooks(filename);
    bool found = false;

    for (Book& b : books) {
        if (b.isbn == targetISBN) {
            found = true;
            cout << "Enter new Title: ";
            cin.ignore();
            getline(cin, b.title);
            cout << "Enter new Author: ";
            getline(cin, b.author);
            cout << "Enter new Year: ";
            cin >> b.year;
            break;
        }
    }

    if (found) {
        saveBooks(filename, books);
        cout << "Book updated.\n";
    }
    else {
        cout << "Book not found.\n";
    }
}
