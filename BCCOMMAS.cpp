//BCCOMMAS - Chèn dấu phẩy
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    int Run=0;
    for (int i = a.length()-1; i >= 0; i--)
    {
        Run++;
        if (Run % 3 == 0)
            a.insert(i, ",");
    }
    if(a.at(0)==',')a.erase(a.begin());
    cout << a;
    return 0;
}