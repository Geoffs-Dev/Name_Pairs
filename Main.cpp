#include "std_lib_facilities.h"
#include "NamePairs.h"

using namespace std;

void Welcome()
{
	cout << "Welcome to the name database: \n\n";
	cout << "Please enter your first name then age.\n\n";

	//this needs improving - perhaps a test for validity, and / a place to test all the data inputed then use this as a default return point?
}

int main()
{
	NamePairs pairs;
	vector <string> names{};
	vector <double>ages{};
	Welcome();

	pairs.Read_Names();

	return 0;
}