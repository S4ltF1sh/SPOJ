//P148PROA - ROUND 8A - Dãy số Hailstone
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            return 0;
        vector<int> Hailstone;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            Hailstone.push_back(n);
            for (int i = 1;; i++)
            {
                if (Hailstone.at(i - 1) % 2 == 0)
                    Hailstone.push_back(Hailstone.at(i - 1) / 2);
                else
                    Hailstone.push_back(Hailstone.at(i - 1) * 3 + 1);
                if (Hailstone.at(i) == 1)
                    break;
            }
            cout << Hailstone.size() << endl;
        }
    }
}