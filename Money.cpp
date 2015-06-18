/*************************************************************
  Programmer: Chris Guzman
  Money Function Definition File
  Start Date: July 28, 2013
  Completion Date: TBD-work in progress
  Instructor: Carrie Obermeyer
  Institution: Colorado Technical University
  Purpose: Function definitions
**************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include "Money.h"

using namespace std;

/********************************************************/
//Money.h function definitions.//
/********************************************************/
//Money::Money() constructor.//
Money::Money()	         			 //default constructor.//
{	string item="";
	string country="";
	string unit="";	
	int value=0;	
	std::ostream &operator<<(std::ostream &,const Money &);//<---for overloaded << operator.//
}//end Money::Money().//
/************************************************************************/
//Money::Money() parameterized constructor.//
Money::Money(string it,string ctry,string u,int v)	 //parameterized constructor.//
{	setItem(it);
	setCountry(ctry);
	setUnit(u);
	setValue(v);
}//end Money::Money(string,string,string,int).//
/************************************************************************/
//setObject() function.//
void Money::setItem(string it)
{	item=it;	
}//end setObject().//
/************************************************************************/
//setCountry() function.//
void Money::setCountry(string ctry)
{	country=ctry;	
}//end setCountry().//
/************************************************************************/
//setUnit() function.//
void Money::setUnit(string u)
{	unit=u;	
}//end setUnit().//
/************************************************************************/
void Money::setValue(int v)
{	value=v;	
}//end setValue().//
/************************************************************************/
//getObjects() function.//
string Money::getItem() const
{	return item;
}//end getObjects().//
/************************************************************************/
//getCountry() function.//
string Money::getCountry() const
{	return country;
}//end getCountry().//
/************************************************************************/
//getUnit() function.//
string Money::getUnit() const
{	return unit;
}//end getUnit().//
/************************************************************************/
//getValue() function.//
int Money::getValue() const
{	return value;
}//end getValue().//
/************************************************************************/
//DisplayMoney() function.//
void Money::DisplayMoney()//		<-------Tells each money object to display itself.//
{	cout<<fixed<<setprecision(2)<<endl;
	cout<<"   "<<getItem()<<setw(20)<<getCountry()<<setw(25)<<getValue()<<setw(25)<<getUnit()<<setw(20)<<endl;
}//end DisplayMoney().//
//Destructor.//
Money::~Money()
{}//end destructor.//
/************************************************************************/
//overloading function.//
std::ostream &operator<<(std::ostream &output,const Money &moneyObjects)//<-------function for overloading << operator.//
{	cout<<fixed<<setprecision(2)<<endl;
	output<<"   "<<moneyObjects.item<<setw(20)<<moneyObjects.country<<setw(25)<<moneyObjects.value
		<<setw(25)<<moneyObjects.unit<<setw(20)<<endl;
	return output;
}//end overloading function.//
/************************************************************************/
