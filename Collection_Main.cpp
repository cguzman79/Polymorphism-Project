/********************************************************************************************************************
 *Programmer: Chris Guzman                                                                                          *
 *Start Date: July 28, 2013                                                                                         *
 *Completion Date: TBD-work in progress                                                                             *
 *Instructor: Carrie Obermeyer                                                                                      *
 *Institution: Colorado Technical University                                                                        *
 *Purpose: An interactive program that allows the user to create                                                    *
 *         and maintain a collection of objects.                                                                    *
 *Inputs:                                                                                                           *
 *		-Name of the owner of the collection                                                                        *
 *		-Name of the collection                                                                                     *
 *		-Information about each object in the collection                                                            *
 *		-Any other pertinent information                                                                            *
 *Outputs:                                                                                                          *
 *		-Name of the owner                                                                                          *
 *		-List of objects                                                                                            *
 *		-Number of objects                                                                                          *
 *		-Any other important information                                                                            *
********************************************************************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include "Money.h"
#include "Collection.h"

using namespace std;

//function declarations.//
void getUserInputs(Collection&);	//<-------passing Collection class into the getUserInputs functions.	
void finUserInputs();

int main()
{
	Collection cobj;  //declare objects "cobj" to Collection.h and call constructors.//

	//function calls.//	
	getUserInputs(cobj);	//gets the owner and collection name.

	//creating and loading new objects.//
	Money m1("Bill","England","Pounds",10); 
	cobj.NewObject(m1);	
	Money m2("Bill","South Africa","Rand",5);
	cobj.NewObject(m2);	
	Money m3("Coin","Italy","Euro",2);
	cobj.NewObject(m3);	
	Money m4("Bill","Germany","Deutschmarks",10);
	cobj.NewObject(m4);	
	Money m5("Coin","Saudi Arabia","Riyal",1);
	cobj.NewObject(m5);	
	finUserInputs();
	
	cobj.DisplayCollection();//displays the desired outputs.//	
	system("pause");            
	return 0;
}//end of main().//
/*******************************************************************************************/
//function definitions.//
/******************************************************************************************/
//getUserInputs() function.//
void getUserInputs(Collection &input)
{	string o,c;
	cout<<"\n********************************************************************************"<<endl;
	cout<<"-------------------Welcome to the Object Collection Program---------------------"<<endl;	
	cout<<"\nPlease enter the name of the collection owner: \n  ->  ";
	getline(cin,o);	
	input.setOwner(o);
	cout<<"\nPlease enter the name of the collection: \n  ->  ";
	getline(cin,c);
	input.setCollection(c);	
}//end getUserInputs().//
/****************************************************************************************/
//finUserInputs() function.//
void finUserInputs()
{	cout<<"________________________________________________________________________________"<<endl;		
	cout<<"********************************************************************************\n"<<endl;	
}//end finUserInputs().//
//****************************************************************************************************//
