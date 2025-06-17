#include "book.h"
#include <iostream>
using namespace std;

Book::Book() {}

Book::Book(string i, string t, string a, int y) {
	isbn = i;
	title = t;
	author = a;
	year = y;
}

string Book::toCSV() const {
	return isbn + "," + title + "," + author + "," + to_string(year);
}

void Book::display() const {
	cout << "ISBN: " << isbn << endl;
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Year: " << year << endl;
	cout << endl;
}