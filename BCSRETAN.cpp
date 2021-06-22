//BCSRETAN - Số may mắn thứ K
//chuyn k sang dang nhi phan
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
vector<int> Binary;
int main()
{
    long long k;
    cin >> k;
    k += 1;
    while (k != 0)
    {
        Binary.push_back(k % 2);
        k /= 2;
    }
    //khong tinh so dau tien
    for (long long i = Binary.size() - 2; i >= 0; i--)
    {
        if (Binary.at(i) == 1)
            cout << 7;
        else
            cout << 4;
    }
}