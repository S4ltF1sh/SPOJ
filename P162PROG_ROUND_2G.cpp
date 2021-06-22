//P162PROG - ROUND 2G - Vi khuẩn
//B_Final_Training_contest
/*Cho một con và để cho nó phát triển max (lớn nhất mà <= X).
Nếu chưa đủ thì cho tiếp thêm 1 con nữa vào để phát triển lại với X đã được cập nhật trước đó.*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    long long n, Count = 0;
    cin >> n;
    while (n > 0)
    {
        Count++;
        long long vk = 1;
        while (1)
        {
            if (vk * 2 > n)
                break;
            vk *= 2;
        }
        n -= vk;
    }
    cout << Count;
}