#include <iostream>
#include <algorithm>
using namespace std;

// function to check uniqueness of a given string
bool is_sorted_string_unique(string sorted_input)
{
	// initialize boolean variable as true
	bool is_unique = true ;

	for (int i = 0; i < sorted_input.length(); i++)
	{
    // compare each character with its right neighbour
		if (sorted_input[i] == sorted_input[i + 1])
		{
			is_unique = false ;
			return is_unique ;
		}
	}
	return is_unique ;
}
int main()
{
	string input ;
	cin >> input ;

	// sorting input string using in-built sort function
	sort(input.begin(), input.end()) ;

	// function call
	bool is_unique = is_sorted_string_unique(input) ;

	if (is_unique)
	{
		cout << "string is unique" << endl ;
	}

	else
	{
		cout << "string is not unique" << endl ;
	}
	return 0;
}
