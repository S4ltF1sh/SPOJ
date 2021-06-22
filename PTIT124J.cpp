//PTIT124J - Chuyển đổi hệ cơ số (bản dễ)
//Chuyển đổi nhị phân sang bát phân.
//https://www.wikihow.vn/Chuy%E1%BB%83n-t%E1%BB%AB-nh%E1%%8B-ph%C3%A2n-sang-b%C3%A1t-ph%C3%A2n
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string Bin;
    string Oct;
    string Result = "";
    getline(cin, Bin);
    int Check = Bin.length() % 3;
    if (Check == 1)
    {
        Bin.insert(Bin.begin(), '0');
        Bin.insert(Bin.begin(), '0');
    }
    else if (Check == 2)
        Bin.insert(Bin.begin(), '0');
    for (int i = 0; i < Bin.length(); i++)
    {
        if ((i + 1) % 3 == 1)
        {
            if (Bin.at(i) == '1')
                Oct.push_back('4');
            else
                Oct.push_back('0');
        }
        else if ((i + 1) % 3 == 2)
        {
            if (Bin.at(i) == '1')
                Oct.push_back('2');
            else
                Oct.push_back('0');
        }
        else
        {
            if (Bin.at(i) == '1')
                Oct.push_back('1');
            else
                Oct.push_back('0');
            int tmp = (int)Oct.at(i) + (int)Oct.at(i - 1) + (int)Oct.at(i - 2) - 48 * 3;
            Result += to_string(tmp);
        }
    }
    cout << Result;
    return 0;
}