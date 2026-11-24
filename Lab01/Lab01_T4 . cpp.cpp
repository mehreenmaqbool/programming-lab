/*
 *lab    : 01
 *Name   : Mehreen Maqbool
 *Roll No: 26-SE-29
 *Date   : 21-11-26
 *Purpose: To identify, understand with AI, and fix a syntax error in a C++ program.
 *Error  : error:'end' was not declared in this scope.
 *AI tool: Google Gemini
 *AI Said: 'end' is not a valid manipulator with cout for a new line; it should be 'endl'.
 *Fix    : Changed '<< end;' to '<<endl;' on the second cout line.
 *Verdict: AI was correct, because replacing 'end' with the 'endl' resolved the compilation error and produced the expected output.
 */
#include <iostream>
using namespace std;

int main()
{
	cout << "Lab 01 complete!" << endl;
	cout << "Next lab: Variables and Input"
	     << endl;
    return 0;
}