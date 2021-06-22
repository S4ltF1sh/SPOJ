//VLPT12G - XẾP BÓNG BI-A(chua xong)
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector<long long> Oke = {4, 16, 121, 529, 4096, 17956, 139129, 609961, 4726276, 20720704, 160554241, 703893961};
// vector<long long> OK;
// bool CanBePyramid(long long n)
// {
//     long long Delta = 1 + 8 * n;
//     long long tmp = sqrt(Delta);
//     if (tmp * tmp == Delta && (-1 + tmp) % 2 == 0)
//         return true;
//     return false;
// }
// bool isChinhPhuong(long long n)
// {
//     long long Check = (long long)sqrt(n);
//     if (Check * Check == n)
//         return true;
//     return false;
// }
// void Run()
// {
//     for (long long i = 2; i < (long long)1e9; i++)
//     {
//         if (isChinhPhuong(i) == true && CanBePyramid(i - 1) == true)
//             OK.push_back(i);
//     }
//     for (int i = 0; i < OK.size(); i++)
//     {
//         cout << OK.at(i) << " ";
//     }
// }
void Run(long long a, long long b, int stt)
{
    long long Count = 0;
    for (int i = 0; i < Oke.size(); i++)
    {
        if (Oke.at(i) > a && Oke.at(i) < b)
            Count++;
    }
    cout << "Case " << stt << ": " << Count << endl;
}
int main()
{
    int stt = 0;
    while (1)
    {
        stt++;
        long long a, b;
        cin >> a >> b;
        if (a == b && a == 0)
            return 0;
        Run(a, b, stt);
    }
    return 0;
}