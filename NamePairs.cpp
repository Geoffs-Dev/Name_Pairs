#include "NamePairs.h"
#include "std_lib_facilities.h"
#include <string>
using namespace std;
// Implementation file
// NamePairs.cpp

NamePairs::NamePairs(vector<string> nn, vector<double> aa) : n{nn}, a{aa}
{
	if (!nn || !aa) throw Invalid();
}

const NamePairs& default_pair()
{
	static NamePairs np{ "John Doe", 20 };
	return np;
}

NamePairs::NamePairs()
	:n { default_pair().Name() },
	 a { default_pair().Age() }
	{
	}

	void NamePairs::Read_Names()
	{
		std::string str_n =" ";
		cout << "Enter your Name: ";

		for (str_n; cin >> str_n;)
		{
			name().push_back(str_n);

			if (str_n == "Q")
			{
				break; // Wow this works outside of the switch statements!!!!!! AWESOME!!!
			}
		}
	}

	void NamePairs::Read_Ages()
	{
		double db_a{};
		cout << "Enter your Age: ";

		for (db_a; cin >> db_a;)
		{
			age().push_back(db_a);

			if (isalnum((double)db_a))
			{
				break; // Wow this works outside of the switch statements!!!!!! AWESOME!!!
			}
		}
	}

	void NamePairs::Display_Data()
	{
		cout << "name count: " << name().size() << "\n";

		//Sort names But needs to be replaced with my own sort pairs function
		//sort(name());
		/// <summary>
		/// Write SortPairs Function()
		/// </summary>

		for (int i = 0; i < name().size(); ++i)
		{
			if (i < 0 || name()[i].size() < 0) {
				error("Size issue: Line 66: \n\n");
			}
			cout << "Name " << name()[i] << "\tAge" << age()[i] << "\n";

			if (name()[i].size() == name().max_size())
				break;
		}
		cout << "Reach end of list! \n\n\n";
	}


	//Operator Overloads
	//All Require error handling. 
	ostream& operator<<(ostream& os, const NamePairs& np)
	{
		for (int i = 0; i < np.name().size(); ++i) {
			os << np.name()[i] << " " << np.age()[i] << endl;
		}
		return os;
	}

	istream& operator >> (istream& is, NamePairs& np)
	{
		string nm;
		double a;
		is >> nm >> a;
		return is;
	}
