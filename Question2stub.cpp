/*
 *  Question2.cpp
 *
 *  Name: EGBE ISRAEL EDOKI
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: PDS/2013/0118
 *
 *  Program that reads two integers and determines
 *  if first is a multiple of second
 *
 *  Stub file to enable you complete assignment #1 - question #2
 */
	
	#include <iostream>
	using namespace std;
	
	int main()
	{
	// Variable declaration
	int firstInteger;
	int secondInteger;
	
	// display welcome messages to user
	cout << "Welcome - This program reads two integers\n";
	cout << "and determines if first is a multiple of second\n\n";
	
	// Read first integer
	cout << "Enter first integer value - ";
	cin>>firstInteger;
	
	// Read second integer
	cout << "Enter second integer value - ";
	cin>>secondInteger;
	
	// Determine if first is a multiple of second
	if(firstInteger%secondInteger==0)
	{
		cout<<"The first number is a multiple of the "<<"second Integer"<<endl;
    }
	else cout<<"The first number is not a multiple of the "<<"second Integer"<<endl;
	
	cout << "\nThanks and Goodbye";
	
	system("PAUSE");
	return EXIT_SUCCESS;
	}
