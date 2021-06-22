//PTIT121E - Nguyên tố hóa học
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stack<int> Result;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '(')
            Result.push(0);
        else if (s.at(i) == ')')
        {
            int SumTmp = 0;
            while (Result.top() != 0 && Result.empty() == false)
            {
                SumTmp += Result.top();
                Result.pop();
            }
            if (Result.top() == 0 && Result.empty() == false)
            {
                Result.pop();
                Result.push(SumTmp);
            }
        }
        else if (s.at(i) >= '0' && s.at(i) <= '9')
        {
            if (Result.empty() == false)
                Result.top() *= ((int)s.at(i) - 48);
        }
        else if (s.at(i) == 'C')
            Result.push(12);
        else if (s.at(i) == 'O')
            Result.push(16);
        else if (s.at(i) == 'H')
            Result.push(1);
    }
    int Sum = 0;
    while (Result.empty() == false)
    {
        Sum += Result.top();
        Result.pop();
    }
    cout << Sum;
}