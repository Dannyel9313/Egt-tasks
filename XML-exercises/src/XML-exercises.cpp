//============================================================================
// Name        : XML-exercises.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "pugixml.hpp"
#include "Book.h"
#include "operations.h"
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;


int main() {

//
//
//
//pugi::xml_document doc;
//
//
//if(!doc.load_file("books.xml")){
//	cerr << "File could not be readed !";
//}else
//{
//	cout << "You are an idiot but smart !";
//}
//
//pugi::xml_node catalogue = doc.child("catalog");
//
////for(pugi::xml_node book = catalogue.first_child();book;book = book.next_sibling()){
//////	cout << "book:";
////	cout << book.child("author").text().as_string()<< " - " ;
////
////	cout << book.child("price").text().as_double()<< endl;
////
////}
//vector<Book*> myVector;
//vector<double>prices;
//vector<string> authors;
//string title;
//string publishDate;
//string description;
//string author;
//string genre;
//double price;
//
//
//for(pugi::xml_node book = catalogue.first_child();book;book = book.next_sibling()){
//	author = book.child("author").text().as_string();
//title = book.child("title").text().as_string();
//genre = book.child("genre").text().as_string();
//	price = book.child("price").text().as_double();
//	publishDate = book.child("publish_date").text().as_string();
//	description = book.child("description").text().as_string();
//
//	Book *firstBook = new Book(author,title,genre,price,publishDate,description);
//
//	myVector.push_back(firstBook);
////	prices.push_back(price);
//
//}
////double sum=0;
////for(unsigned int i = 0; i < prices.size();i++){
////	sum = sum + prices[i];
////}
////cout << sum;
//
//for(unsigned int i = 0; i < myVector.size();i++){
//	myVector[i]->showInfo();
//	cout << endl;
//}

	operations obj;
	obj.copyToVector();
	obj.printBooksInfo();

	return 0;
}
