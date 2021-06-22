//CPPCOM01 - COMINATION 1
//sinh nhi phan
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void cout_Stack(vector<int> Arr)
{
    for (int i = 0; i < Arr.size(); i++)
        cout << Arr.at(i);
}
void set_0(vector<int> &Arr, int n)
{
    for (; n < Arr.size(); n++)
        Arr.at(n) = 0;
}
void Run()
{
    int n;
    cin >> n;
    vector<int> Arr(n, 0);
    cout_Stack(Arr);
    cout << " ";
    for (int i = 1; i < pow(2, n); i++)
    {
        for (int j = Arr.size() - 1; j >= 0; j--)
        {
            if (Arr.at(j) == 0)
            {
                Arr.at(j) = 1;
                set_0(Arr, j + 1);
                cout_Stack(Arr);
                cout << " ";
                break;
            }
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
    return 0;
}