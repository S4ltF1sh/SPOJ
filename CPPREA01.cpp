//CPPREA01 - Re-arrang Array 1
//gioi han cua n chi la 1e7 thoi =)),Ai lon hon 1e7 bi thay thanh -1 het
#include <iostream>
#include <vector>
using namespace std;
void Run()
{
    vector<bool> DanhDau((long long)1e7 + 5, false);
    long long n, tmp;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp >= 0 && tmp <= (long long)1e7)
            DanhDau.at(tmp) = true;
    }
    for (long long i = 0; i < n; i++)
    {
        if (DanhDau.at(i) == true)
            cout << i << " ";
        else
            cout << -1 << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
    return 0;
}