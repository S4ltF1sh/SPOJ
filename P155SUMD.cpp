//P155SUMD - ROUND 5D - Chỉ là sắp xếp
//phai dung mang :(
//Binary search
//https://nguyenvanhieu.vn/thuat-toan-tim-kiem-nhi-phan/
//https://nhannguyen95.wordpress.com/2015/11/30/chat-nhi-phan-va-cac-bien-the/
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int BinarySearch(int A[], int Left, int Right, int Need_Search)
{
    int Res = 0;
    while (Right >= Left)
    {
        int Mid = (Right + Left) / 2;
        if (A[Mid] <= Need_Search)
        {
            Res = Mid + 1;
            Left = Mid + 1;
        }
        else
            Right = Mid - 1;
    }
    //khong tim thay in ra 0 :(
    return Res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    int A[a];
    int B[b];
    for (int i = 0; i < a; i++)
        cin >> A[i];
    for (int i = 0; i < b; i++)
        cin >> B[i];
    sort(A, A + a);
    for (int i = 0; i < b; i++)
    {
        cout << BinarySearch(A, 0, a - 1, B[i]) << endl;
    }
}
