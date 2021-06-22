//BCOLP10 - Độ đo
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> tanso1(300, 0);
vector<int> tanso2(300, 0);
int main()
{
    string s1;
    string s2;
    long long Sum = 0;
    getline(cin, s1);
    getline(cin, s2);
    for (int i = 0; i < s1.length(); i++)
    {
        tanso1.at(s1.at(i))++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        tanso2.at(s2.at(i))++;
    }
    for (int i = 0; i < 300; i++)
    {
        Sum += abs(tanso2.at(i) - tanso1.at(i));
    }
    cout << Sum;
    return 0;
}
