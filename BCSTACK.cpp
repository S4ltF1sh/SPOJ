//BCSTACK - Cấu trúc dữ liệu ngăn xếp (stack) (Cơ bản)
//Nhung lai dung vector :))
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string str;
    vector<string> Stack;
    string x;
    while (1)
    {
        cin >> str;
        if (str == "end")
            return 0;
        if (str == "init")
            Stack.clear();
        if (str == "push")
        {
            cin >> x;
            Stack.push_back(x);
        }
        if (str == "pop")
        {
            if (Stack.size() != 0)
            {
                Stack.pop_back();
            }
        }
        if (str == "top")
        {
            if (Stack.size() == 0)
                cout << "-1" << endl;
            else
                cout << Stack.back() << endl;
        }
        if (str == "size")
            cout << Stack.size() << endl;
        if (str == "empty")
            cout << Stack.empty() << endl;
    }
    return 0;
}