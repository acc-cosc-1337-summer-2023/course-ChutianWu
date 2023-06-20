//write include statements
#include<iostream>
#include<string>
#include "repetition.h"

using std::cout;
using std::cin;
using std::string;

//write using statements

int main() 
{
	std::string content;
	std::string proceed;
	cout<<"Do you want to run the program? Please press y or Y to proceed: ";
	cin>>proceed;
	
	while ((proceed == "y") or (proceed == "Y"))
	{
		cout<<"Please enter a DNA string: ";
		cin>>content;

		double result = get_gc_content(content);
		cout<<"The percentage of Cs and Gs is: "<<result<<"\n";

		cout<<"Do you want to run the program? Please press y or Y to proceed: ";
		cin>>proceed;
	}
	
	return 0;
}
