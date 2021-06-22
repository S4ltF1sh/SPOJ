//PRISUSTR - Prime Substring(chua xong)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
vector<bool> isPrime(1e6 + 7, true);
void Etosthenes()
{
    isPrime.at(0) = isPrime.at(1) = false;
    for (int i = 2; i * i <= 1e6 + 5; i++)
    {
        if (isPrime.at(i) == true)
            for (int j = i * 2; j <= 1e6 + 5; j += i)
            {
                if (isPrime.at(i) == true)
                    isPrime.at(i) = false;
            }
    }
}
int main()
{
    Etosthenes();
    string s;
    while (1)
    {
        getline(cin, s);
        if (s == "0")
            return 0;
        vector<long long> List;
        for (int i = 0; i < s.size(); i++)
        {
            string tmp = "";
            for (int j = i; j < s.size(); j++)
            {
                tmp += s.at(j);
                if (isPrime.at(stoi(tmp)) == true)
                    List.push_back(stoi(tmp));
            }
        }
        sort(List.begin(), List.end());
        cout << List.at(List.size() - 1) << endl;
    }
    return 0;
}