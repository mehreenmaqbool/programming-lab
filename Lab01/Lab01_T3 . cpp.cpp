/*
 *Lab:01
 *Name:Mehreen Maqbool
 *Roll No:26-SE-29
 *Date:21-11-26
 *Purpose: To find and fix five bugs in the program
 */ 
#include<iostream>
using namespace std;// Bug 1: missing ; after std

int main()
{
	cout << "Welcom to the lab!" << endl;// Bug 2: missing ; after endl
	cout << "Today we learn \"C++\"." << endl;// Bug 3: first letter of cout is capital
	cout << "Files are in C:\\Lab01" << endl;// Bug 4: one backslash is missing after :
	cout << "Bye!" << endl;// Bug 5: missing quotation mark after !
	return 0;
}