//P148PROE - ROUND 8E - Trộn hai xâu kí tự
//P178PROG - ROUND 8G - TRỘN XÂU
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
string Mix(string s1, string s2)
{
	string sMix;
	for (int i = 0; i < s1.length(); i++)
	{
		sMix.push_back(s2.at(i));
		sMix.push_back(s1.at(i));
	}
	return sMix;
}
int Run()
{
	string s1, s2, sCheck, sMix;
	getline(cin, s1);
	getline(cin, s2);
	getline(cin, sCheck);
	int Count = 1;
	sMix = Mix(s1, s2);
	if (sCheck == sMix)
	{
		cout << Count << endl;
		return 0;
	}
	else
	{
		while (Count <= 50)
		{
			for (int i = 0; i < sMix.length() / 2; i++)
				s1.at(i) = sMix.at(i);
			for (int i = sMix.length() / 2; i < sMix.length(); i++)
				s2.at(i - sMix.length() / 2) = sMix.at(i);
			Count++;
			sMix = Mix(s1, s2);
			if (sCheck == sMix)
			{
				cout << Count << endl;
				return 0;
			}
		}
		cout << -1 << endl;
		return 0;
	}
}
int main()
{
	int n;
	while (1)
	{
		cin >> n;
		cin.ignore();
		if (n == 0)
			return 0;
		Run();
	}
	return 0;
}