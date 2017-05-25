/*
 * operations.cpp
 *
 *  Created on: 23.05.2017
 *      Author: Danny
 */

#include "operations.h"
#include <iostream>
#include <cstdlib>
using namespace std;

operations::operations() {
	// TODO Auto-generated constructor stub

}

operations::~operations() {
	// TODO Auto-generated destructor stub
}

void operations::copyToVector() {

	pugi::xml_document doc;

	if (!doc.load_file("books.xml")) {
		cerr << "The file could not be opened !" << endl;
		exit(1);
	}

	pugi::xml_node catalog = doc.child("catalog");

	string title;
	string publishDate;
	string description;
	string author;
	string genre;
	double price;

	for (pugi::xml_node book = catalog.first_child(); book;
			book = book.next_sibling()) {

		author = book.child("author").text().as_string();
		title = book.child("genre").text().as_string();
		genre = book.child("genre").text().as_string();
		price = book.child("price").text().as_double();
		publishDate = book.child("publish_date").text().as_string();
		description = book.child("description").text().as_string();

		Book *newBook = new Book(author, title, genre, price, publishDate,
				description);

		booksVector.push_back(newBook);

	}
	if(booksVector.size() != 0){
		cout << "You coppied a XML to vector successfully !!!" << endl;
	}else
	{
	cout <<"Error :You file is not coppied !!!"<< endl;
	}

}

void operations::printBooksInfo() {

	for(unsigned int i = 0; i < booksVector.size();i++){
		cout << "Book -"<< i + 1 <<" :\n";
		booksVector[i]->showInfo();
	}

}
