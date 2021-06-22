//REMOVBIT - Xóa bit (do cách đổi từ hệ thập phân sang nhị phân,ta chỉ việc xoá số 0 đầu tiên từ trái qua phải)
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s;
    bool Check = true;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.erase(i, 1);
            cout << s;
            return 0;
        }
    }
    s.erase(s.begin());
    cout << s;
    return 0;
}