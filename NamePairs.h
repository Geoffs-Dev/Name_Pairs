#pragma once
#ifndef NAME_PAIRS_H
#define NAME_PAIRS_H

using namespace std;
//File Name_Pairs.h

	class NamePairs {
	public:
		class Invalid { };

		NamePairs(vector<string> n, vector<double> a)
		{
		};

		NamePairs();

		vector<string> Name() const { return n; }
		vector<double> Age() const { return a; }

		void Read_Names();
		void Read_Ages();

		//Display name and age
		void Display_Data(); //Probably better as a helper function

		
	private:
		vector<string> n;
		vector<double> a;
	};

#endif // !NAME_PAIRS_H
