/*
 * Book.cpp
 *
 *  Created on: 23.05.2017
 *      Author: Danny
 */

#include "Book.h"
#include <iostream>
using namespace std;

Book::Book() {
	setAuthor("");
	setTitle("");
	setGenre("");
	setPrice(0.0);
	setPublishDate("");
	setDescription("");
	// TODO Auto-generated constructor stub

}

Book::~Book() {
	// TODO Auto-generated destructor stub
}

const string& Book::getAuthor() const {
	return author;
}

void Book::setAuthor(const string& author) {
	this->author = author;
}

const string& Book::getDescription() const {
	return description;
}

void Book::setDescription(const string& description) {
	this->description = description;
}

const string& Book::getGenre() const {
	return genre;
}

void Book::setGenre(const string& genre) {
	this->genre = genre;
}

double Book::getPrice() const {
	return price;
}

void Book::setPrice(double price) {
	this->price = price;
}

const string& Book::getPublishDate() const {
	return publishDate;
}

void Book::setPublishDate(const string& publishDate) {
	this->publishDate = publishDate;
}

const string& Book::getTitle() const {
	return title;
}

Book::Book(string author, string title, string genre, double price,
		string publishDate, string description) {
	setAuthor(author);
	setTitle(title);
	setPrice(price);
	setPublishDate(publishDate);
	setDescription(description);
}

void Book::setTitle(const string& title) {
	this->title = title;
}

void Book::showInfo() {
	cout << "Author :" << getAuthor() << endl;
	cout << "Title :" << getTitle() << endl;
	cout << "Price :" << getPrice() << endl;
	cout << "Date of publishing :" << getPublishDate() << endl;
	cout << "Description :" << getDescription() << endl;
}
