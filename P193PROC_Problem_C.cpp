//P193PROC - Problem C - Độ phức tạp
//do phuc tap = so ky tu khac nhau,de xoa it nhat thi minh sort cho 2 cai xuat hien nhieu nhat ve cuoi mang
//=> bo qua 2 ky tu do thi auto xoa it nhat roi 
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int b[28] = {0};
	int d = s.size();
	for (int i = 0; i < d; i++)
	{
		b[s[i] - 'a']++;
	}
	sort(b, b + 28);
	int tong = 0;
	for (int i = 0; i < 26; i++)
	{
		tong += b[i];
	}
	cout << tong;
}