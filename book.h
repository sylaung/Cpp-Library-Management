#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {

public:
	string isbn;
	string title;
	string author;
	int year;

	Book();
	Book(string i, string t, string a, int y);

	string toCSV() const;
	void display() const;

};
#endif
