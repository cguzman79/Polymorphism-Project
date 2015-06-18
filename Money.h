/*************************************************************
  Programmer: Chris Guzman
  Money Header File
  Start Date: July 28, 2013
  Completion Date: TBD-work in progress
  Instructor: Carrie Obermeyer
  Institution: Colorado Technical University
  Purpose: Money Class definition
**************************************************************/
#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Class definition.//
class Money
{
	friend ostream &operator<<(std::ostream &,const Money &);//<---for overloaded << operator.//

public:
	//Constructors.//
	Money();	  //default constructor.//
	Money(string, string, string, int);	//parameterized constructor.//    
	
	//Accessor and Mutator Functions.//		
	void setItem(string it);
	void setCountry(string ctry);
	void setUnit(string u);
	void setValue(int v);

	string getItem() const;
	string getCountry() const;
	string getUnit() const;
	int getValue() const;
	
	void DisplayMoney();

	//Destructor.//
	~Money();	
private:
	string item;//					<----bill or coin item.
	string country;//				<----what country it's from.
	string unit;//					<----monetary unit (dollars, pounds, lire, etc...).
	int value;//					<----monetary value (1,2,5,10,etc).	
};//end of class Money.//
#endif
