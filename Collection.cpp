/******************************************************************
  Programmer: Chris Guzman
  Collection Class Function Definition File
  Start Date: July 28, 2013
  Completion Date: TBD-work in progress
  Instructor: Carrie Obermeyer
  Institution: Colorado Technical University
  Purpose: Collection.h function definitions.
*******************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include <stdexcept>
#include "Collection.h"
#include "Money.h"

using namespace std;

/************************************************************************/
//Function definitions.//
//***********************************************************************/
//getCount() function.//
int Collection::getCount()//<--------returns the object count.
{	return count;}//end getCount().//
/************************************************************************/
//Collection() function in class Money.//
Collection::Collection()			  //default constructor.//
{	owner="";
	collection="";
	count = 0;
}//end Collection::Collection().//
/*************************************************************************************/
//Collection::Collection(string,string) function.//
Collection::Collection(string o,string c)		//parameterized constructor.//
{	owner=o;
	collection=c;
	count = 0;
}//end Collection::Collection(string,string).//
/************************************************************************************************/
//setOwner() function.//
void Collection::setOwner(string o)
{	owner=o;	
}//end setOwner().//
/************************************************************************************/
//setCollection() function.//
void Collection::setCollection(string c)
{	collection=c;
}//end setCollection().//
/**************************************************************************************/
//getOwner() function.//
string Collection::getOwner() const
{	return owner;
}//end getOwner().//
/************************************************************************************/
//getCollection() function.//
string Collection::getCollection() const
{	return collection;
}//end getCollection().//
/******************************************************************************/
void Collection::NewObject(Money m)//		<---------loads an array of Money objects.
{	
	if(count<size)//	<----------Ensures that the array is not full before adding to it.//
	{	moneyObjects[count]=m;
		count++;
	}//end if.//
	else
		cout<<"!!! Your array is full !!!  Please increase the size !!!"<<endl;
}
/*******************************************************************************/
//DisplayCollection() function.//
void Collection::DisplayCollection()
{   system("CLS");	
	cout<<"\n"<<fixed<<setprecision(2)<<endl;
	cout<<"********************************************************************************"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"       Owner Name: " << getOwner() << endl << "\n  Collection Name: " << getCollection() << endl;		
	cout<<"________________________________________________________________________________"<<endl;
	cout<<"|                         Collection Description                               |"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl; 
	cout<<"|  Object   |   Country of Origin   |   Monetary Amount   |   Monetary Unit    |"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;	
	
	for(int i=0;i<count;++i){
	cout<<moneyObjects[i]<<endl;//<------overloaded operator to display money object.
	cout<<"-------------------------------------------------------------------------------"<<endl;
	}
	cout<<"********************************************************************************"<<endl;	
	cout<<"The number of objects in your collection is: "<<getCount()<<"."<<endl;
	cout<<"********************************************************************************\n"<<endl;	
}//end of Display().//
/***************************************************************************************************/
//Destructor function.//
Collection::~Collection()
{	
}//end of destructor.//
/*******************************************************/
//end of Collection.h function definitions.//
/*****************************************************/
