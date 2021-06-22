//P146PROD - ROUND 6D - Luyện tập ACM
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Data
{
    int Ti;
    int Teo;
    int To;
};

int main()
{
    int n;
    cin >> n;
    vector<Data> Status(n);
    int Count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> Status.at(i).Ti >> Status.at(i).Teo >> Status.at(i).To;
        if (Status.at(i).Ti + Status.at(i).Teo + Status.at(i).To >= 2)
            Count++;
    }
    cout << Count;
    return 0;
}