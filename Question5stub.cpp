/*
 *  Question6.cpp
 *
 *  Name: EGBE ISRAEL EDOKI
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: PDS/2013/0118
 *
 *  Program that calculates the squares and cubes of the integers from 0 to 10
 *
 *  Stub file to enable you complete assignment #1 - question #6
 */
	
	#include <iostream>
	#include <math.h> // library to use pow() function to calculate squares and cubes
	#include <iomanip> 
	using namespace std;
	

 
 			
	int main()
	{
	
	// display welcome messages to user
	cout << "Welcome - This program calculates the squares and cubes\n";
	cout << "of the integers from 0 to 10 and prints using tabs\n\n";
	
	// TODO: Hint use pow(base, power) to calculate squares and cubes
	// Put code here ...
			cout<<"Integer"<<"   Square"<<"   Cube"<<endl;
	int intValue;
	for(intValue=0; intValue<=10; intValue++)
	{
	cout<<intValue<<setw(12);
	cout<<intValue*intValue<<setw(10);
	cout<<intValue*intValue*intValue<<endl;
	}
	
	cout << "\nThanks and Goodbye";
	
	system("PAUSE");
	return EXIT_SUCCESS;
	}
