/*************************************************************
  Programmer: Chris Guzman
  Collection Header File
  Start Date: July 28, 2013
  Completion Date: TBD-work in progress
  Instructor: Carrie Obermeyer
  Institution: Colorado Technical University
  Purpose: Collection Class definition
**************************************************************/
#ifndef COLLECTION_H
#define COLLECTION_H

#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <stdexcept>
#include "Money.h"

using namespace std;

//Global Variable Declaration.//
const int size=20;

//Class definition.//
class Collection
{
	friend ostream &operator<<(std::ostream &,const Money &);//<---for overloaded << operator.//

public:	
	//Constructors.//
	Collection();	         					 //default constructor.//
	Collection(string,string);		            //parameter constructor.//
    
	//Accessor and Mutator Functions.//	
	void setOwner(string);
	void setCollection(string);	
	
	string getOwner() const;
	string getCollection() const;	
	int getCount();								//Function to keep track of the money objects.//

	void NewObject(Money m);					//Load new Objects into the money array.//
	
	void DisplayCollection();					//Final display function.//

	//Destructor.//
	~Collection();
	
private:
	Money moneyObjects[size];	//Array of moneyObjects.//
	string owner;				//Catches the name input from user.//
	string collection;			//Catches the name of the collection.//	
	int count;					//Holds the number of objects in the array.//
};//end of class Collection.//
#endif
