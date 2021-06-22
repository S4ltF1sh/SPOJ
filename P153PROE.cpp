//P153PROE - ROUND 3E - Trò chơi với những hạt đậu
//chuyển từ ô cuối cùng về,nếu số đậu cha hết cho i thì dải đậu,rồi xét đến ô tiếp theo,nếu không thì in ra NO

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<long long> Beans(n + 1);
    for (long long i = 0; i <= n; i++)
        cin >> Beans.at(i);
    long long tmp = 0;
    for (long long i = n; i >= 1; i--)
    {
        if ((Beans.at(i) + tmp) % i == 0)
            tmp += (Beans.at(i) + tmp) / i;
        else
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}