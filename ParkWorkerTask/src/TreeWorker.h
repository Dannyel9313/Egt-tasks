/*
 * TreeWorker.h
 *
 *  Created on: 15.05.2017
 *      Author: Danny
 */

#ifndef TREEWORKER_H_
#define TREEWORKER_H_

#include "ParkWorker.h"

class TreeWorker: public ParkWorker {
public:
	TreeWorker();
	TreeWorker(string name, string middleName,string family,long egn,
			string address, int tel,string gander,double lvPerTree, int numOfTrees, double bonus);
	virtual ~TreeWorker();
	double getBonus() const;
	void setBonus(double bonus);
	double getLvPerTree() const;
	void setLvPerTree(double lvPerTree);
	int getNumOfTrees() const;
	void setNumOfTrees(int numOfTrees);
	const string& getWorkArea() const;
		void setWorkArea(const string& workArea);

	virtual void printInfo();
	virtual double calculateSalary();
	double calculateBonus();
	double calculatePlus();


private:

	double lvPerTree;
	int numOfTrees;
	double bonus;
string workArea;

};

#endif /* TREEWORKER_H_ */
