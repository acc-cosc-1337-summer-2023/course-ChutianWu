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
	cout<<"Please enter a DNA string: ";
	cin>>content;

	if ((content != "y") and (content !="Y"))
	{
		double result = get_gc_content(content);
		cout<<"The percentage of Cs and Gs is: "<<result<<"\n";
	}
	else 
	{
		cout<<"This program will not run since you entered y or Y";
	}
	return 0;
}
