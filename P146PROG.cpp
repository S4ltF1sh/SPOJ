//P146PROG - ROUND 6G - Cuộc thi ăn socola
//
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, CountTi = 0, CountTeo = 0;
    cin >> n;
    vector<long long> Socola(n);
    for (int i = 0; i < n; i++)
        cin >> Socola.at(i);
    if (n == 1)
    {
        cout << 1 << " " << 0;
        return 0;
    }
    for (int i = 0, j = n - 1; j >= 0 && i < n;)
    {
        if (Socola.at(i) > Socola.at(j))
        {
            Socola.at(i) -= Socola.at(j);
            j--;
            CountTeo++;
            if (i == j)
            {
                CountTi++;
                break;
            }
        }
        else if (Socola.at(i) < Socola.at(j))
        {
            Socola.at(j) -= Socola.at(i);
            i++;
            CountTi++;
            if (i == j)
            {
                CountTeo++;
                break;
            }
        }
        else if (Socola.at(i) == Socola.at(j) && i != j)
        {
            i++;
            j--;
            CountTeo++;
            CountTi++;
            if (i == j)
            {
                CountTi++;
                break;
            }
        }
    }
    cout << CountTi << " " << CountTeo;
}