//P136SUME - SUM6 E - Mã hóa dãy số
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
struct Data
{
	long long Value;
	long long index;
	long long nRepeat;
};
bool cmp(Data x, Data y)
{
	if (x.nRepeat == y.nRepeat)
		return x.index < y.index;
	return x.nRepeat > y.nRepeat;
}
int main()
{
	int n;
	long long c;
	cin >> n >> c;
	vector<Data> String;
	Data tmp;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp.Value;
		int Check = 0;
		for (int j = 0; j < String.size(); j++)
		{
			if (tmp.Value == String.at(j).Value)
			{
				Check = 1;
				String.at(j).nRepeat++;
				break;
			}
		}
		if (Check == 0)
		{
			tmp.nRepeat = 1;
			tmp.index = i;
			String.push_back(tmp);
		}
	}
	sort(String.begin(), String.end(), cmp);
	for (int i = 0; i < String.size(); i++)
	{
		for (int j = 0; j < String.at(i).nRepeat; j++)
		{
			cout << String.at(i).Value
				<< " ";
		}
	}
}