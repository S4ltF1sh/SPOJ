#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Data
{
    string Name;
    int Year;
    int Month;
    int Day;
};
bool cmp(Data x, Data y)
{
    if (x.Year == y.Year)
    {
        if (x.Month == y.Month)
            return x.Day < y.Day;
        else
            return x.Month < y.Month;
    }
    else
        return x.Year < y.Year;
}
int main()
{
    int n;
    cin >> n;
    vector<Data> Person(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Person.at(i).Name;
        cin >> Person.at(i).Day;
        cin >> Person.at(i).Month;
        cin >> Person.at(i).Year;
        cin.ignore();
    }
    sort(Person.begin(), Person.end(), cmp);
    // for (int i = 0; i < n; i++)
    // {
    //     cout
    //         << Person.at(i).Name;
    //     cout << " "
    //          << Person.at(i).Day;
    //     cout << " "
    //          << Person.at(i).Month;
    //     cout << " "
    //          << Person.at(i).Year;
    //     cout << endl;
    // }
    // cout << endl;
    cout << Person.at(n - 1).Name << endl
         << Person.at(0).Name;
    return 0;
}