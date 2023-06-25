#include "func.h"

using std::vector;
using std::cout;
using std::cin;

int main() 
{
	std::vector<int> list1{5,7,-1,99,-100,10};
	std::vector<int> list2{6,1,8,9,4};
	int choice;

	do
	{
		display_menu();
		cout<<"Enter choice: ";
		cin>>choice;

		switch(choice)
    	{
    	case 1:
        	cout<<"The max value is: "<<get_vector_max_value(list1)<<"\n";
        	break;
    	case 2:
        	get_square_of_each_element(list2);
			cout << "The elements with squared values is: ";
            for (auto e : get_square_of_each_element(list2)) 
			{
                cout << e << " ";
            }
        	break;
    	case 3:
        	cout<<"Program will exit....\n";
        	break;
    	default:
        	cout<<"Invalid option..\n";
        	break;
    	}
	}while((choice != 3));

	return 0;
}
