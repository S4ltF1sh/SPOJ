//PTIT124D - Hoán vị thứ bao nhiêu(RTE)
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
    cout.tie(0);
    int n, k;
    string tmp;
    while (1)
    {
        cin >> n;
        if (n == 0)
            return 0;
        cin >> k;
        string s;
        int Count = 1;
        for (int i = 1; i <= n; i++)
            s.push_back(i + '0');
        if (k == 1)
        {
            string s_tmp = "";
            while (n--)
            {
                cin >> tmp;
                s_tmp += tmp;
            }
            if (s_tmp == s)
                cout << 1;
            else
                while (1)
                {
                    if (next_permutation(s.begin(), s.begin() + s.size()))
                    {
                        Count++;
                        if (s_tmp == s)
                        {
                            cout << Count;
                            break;
                        }
                    }
                }
        }
        else
        {
            int stt;
            cin >> stt;
            if (stt == 1)
                for (auto i : s)
                    cout << i << " ";
            else
                while (1)
                {
                    if (next_permutation(s.begin(), s.begin() + s.size()))
                    {
                        Count++;
                        if (Count == stt)
                        {
                            for (auto i : s)
                                cout << i << " ";
                            break;
                        }
                    }
                }
        }
        cout << endl;
    }
}