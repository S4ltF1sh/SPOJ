
/*
Ta có tổng dãy số liên tiếp của: 1, 2, 3, ... n có dạng = (1+n)(n-1+1)/2. Tổng quát hơn nó là: = (r+l)(r-l+1)/2; với: l, l+1, ... r;
Ta thấy rằng N = (r+l)(r-l+1)/2 <=> N*2 = (r+l)(r-l+1);
Coi
r+l = x;
r-l+1 = y;
=> 2*N = x*y => x, y là ước của 2*n (x, y nguyên).
-> Liệt kê các ước của 2*N;
Với mỗi ước thu được là x -> y=N/x; -> Giải hệ tìm được r, l; -> kiểm tra r, l xem có thỏa man không rồi đếm.
*/
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    long long n, stt;
    cin >> t;
    while (t--)
    {
        long long Count = 0, x, y, l, r;
        cin >> stt >> n;
        n *= 2;
        for (long long i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                x = n / i;
                y = i;
                //tim 2 so biet tong va hieu,r la so lon, n la so be,x la tong,y la hieu
                if ((x + y - 1) % 2 == 0) //r la so nguyen
                {
                    r = (x + y - 1) / 2;
                    l = x - r;
                    if (l >= 1 && r > l)
                        Count++;
                }
            }
        }
        cout << stt << " " << Count << endl;
    }
}