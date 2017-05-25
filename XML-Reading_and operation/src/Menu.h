/*
 * Menu.h
 *
 *  Created on: 25.05.2017
 *      Author: Danny
 */

#ifndef MENU_H_
#define MENU_H_
#include <string>
using namespace std;

class Menu {
public:
	Menu();
	Menu(string name, string price, string description, int calories);
	virtual ~Menu();
	int getCalories() const;
	void setCalories(int calories);
	const string& getDescription() const;
	void setDescription(const string& description);
	const string& getName() const;
	void setName(const string& name);


	void printMenuInfo();
	const string& getPrice() const;
	void setPrice(const string& price);

private:

	string name;
	string price;
	string description;
	int calories;

};

#endif /* MENU_H_ */
