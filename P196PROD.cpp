//P196PROD - Problem D - Hoán vị tên
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
struct DATA1
{
    string Name;
    long long index1;
};
bool cmp1(DATA1 x, DATA1 y)
{
    if (x.Name == y.Name)
        return x.index1 < y.index1;
    return x.Name < y.Name;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<DATA1> Student(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Student.at(i).Name;
        Student.at(i).index1 = i + 1;
    }
    sort(Student.begin(), Student.end(), cmp1);

    for (int i = 0; i < n; i++)
    {
        cout << Student.at(i).index1 << " ";
    }
}