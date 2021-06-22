//BCQUEUE - Cấu trúc dữ liệu hàng đợi (queue) (Cơ bản)
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int Command, tmp;
    vector<int> Queue;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> Command;
        if (Command == 1)
            cout << Queue.size() << endl;
        else if (Command == 2)
        {
            if (Queue.size() == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else if (Command == 3)
        {
            cin >> tmp;
            Queue.insert(Queue.begin(), tmp);
        }
        else if (Command == 4)
        {
            if (Queue.size() != 0)
                Queue.pop_back();
        }
        else if (Command == 5)
        {
            if (Queue.size() != 0)
                cout << Queue.at(Queue.size() - 1) << endl;
            else
                cout << -1 << endl;
        }
        else if (Command == 6)
        {
            if (Queue.size() != 0)
                cout << Queue.at(0) << endl;
            else
                cout << -1 << endl;
        }
    }
}