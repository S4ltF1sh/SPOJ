//P155SUMC - ROUND 5C - Ai nói dối
//khong co cin.ignore() + phai dung getline thi ac =))
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    string s1;
    string s2;
    long long n;
    cin >> n;
    getline(cin, s1);
    getline(cin, s2);
    long long len1 = s1.length(), len2 = s2.length();
    long long tmp = abs(len1 - len2);
    if (tmp >= n)
        cout << "NO";
    else
        cout << "YES";
}