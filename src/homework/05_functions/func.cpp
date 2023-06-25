//add include statements
#include "func.h"

using std::cout;
using std::cin;
using std::vector;

//add function code here

int get_vector_max_value(std::vector<int> nums1)
{
    int max_value = nums1[0];
    for(int i : nums1)
    {
        if (i > max_value)
        {
            max_value = i;
        };
    }
    return max_value;
}

std::vector<int> get_square_of_each_element(std::vector<int> nums2)
{
    vector<int> square_value;
    for(int j : nums2)
    {
        square_value.push_back(j * j);
    }
    return square_value;
}

void display_menu()
{
    cout<<"\n\nMenu:\n\n";
    cout<<"1-Get max value\n";
    cout<<"2-Get square of elements\n";
    cout<<"3-Exit\n";
}
