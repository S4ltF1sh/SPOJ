//PTIT014A - 2014 Bài A - Đoán số
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin, s);
        if (s == "dung")
            cout << 2 << endl;
        else if (s == "lon hon")
            cout << 1 << endl;
        else if (s == "nho hon")
            cout << 3 << endl;
    }
    return 0;
}