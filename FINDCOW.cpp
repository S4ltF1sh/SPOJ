//FINDCOW - Find the Cow!
//vì cần phân chân trước chân sau nên khi duyệt từ trái qua gặp )) thì số cặp )) phải trừ đi 1.

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int ChanTruoc = 0;
    int Sum = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s.at(i) == ')' && s.at(i + 1) == ')')
            ChanTruoc++;
    }
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s.at(i) == '(' && s.at(i + 1) == '(')//phải check cái này trước.
            Sum += ChanTruoc; //1 cặp chân sau kết hợp với ChanTruoc cặp chân trước sẽ ra số vị trí bò có thể đứng.
        if (s.at(i) == ')' && s.at(i + 1) == ')')
            ChanTruoc--;
    }
    cout << Sum;
    return 0;
}