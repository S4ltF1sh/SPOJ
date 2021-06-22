//P143SUMA - ROUND 3A - Bí kíp luyện rồng
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Enemy
{
    long long ATK;
    long long Reward;
};
bool cmp(Enemy x, Enemy y)
{
    if (x.ATK == y.ATK)
        return x.Reward > y.Reward;
    else
        return x.ATK < y.ATK;
}
int main()
{
    long long n, atk;
    cin >> atk >> n;
    vector<Enemy> Dragon(n);
    for (int i = 0; i < n; i++)
    {
        cin >> Dragon.at(i).ATK >> Dragon.at(i).Reward;
    }
    sort(Dragon.begin(), Dragon.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        if (atk > Dragon.at(i).ATK)
        {
            atk += Dragon.at(i).Reward;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}