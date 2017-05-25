/*
 * Book.h
 *
 *  Created on: 23.05.2017
 *      Author: Danny
 */
#include "pugixml.hpp"
#ifndef BOOK_H_
#define BOOK_H_
#include <string>
using namespace std;

class Book {
public:
	Book();
	Book(string author,string title, string genre, double price, string publishDate,
			string description);
	virtual ~Book();
	const string& getAuthor() const;
	void setAuthor(const string& author);
	const string& getDescription() const;
	void setDescription(const string& description);
	const string& getGenre() const;
	void setGenre(const string& genre);
	double getPrice() const;
	void setPrice(double price);
	const string& getPublishDate() const;
	void setPublishDate(const string& publishDate);
	const string& getTitle() const;
	void setTitle(const string& title);

void showInfo();

private:
	string author;
	string title;
	string genre;
	double price;
	string publishDate;
	string description;




};

#endif /* BOOK_H_ */
