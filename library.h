#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>
using namespace std;

vector <Book> loadBooks(const string& filename);
void saveBooks(const string& filename, const vector<Book>& books);

void addBook(const string& filename);
void viewBooks(const string& filename);
void searchBook(const string& filename);
void deleteBook(const string& filename);
void updateBook(const string& filename);

#endif