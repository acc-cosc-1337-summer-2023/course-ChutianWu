//add include statements
#include<string>
#include "repetition.h"

using std::string;

//add function(s) code here

double get_gc_content(const std::string &str)
{
    double count = 0.0;
    double percent;

    for (int i = 0; i < double(str.size()); i++)
    {
        if (str[i] == 'C' or str[i] == 'G') 
        {
            count++;
        }; 
    }

    percent = double (count / str.size());
    
    return count / str.size();
}