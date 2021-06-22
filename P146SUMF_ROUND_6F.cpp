//P146SUMF - ROUND 6F - Dãy số kì diệu
//duyet trau :v
#include <iostream>
using namespace std;
int main()
{
    int ChuSo[15];
    long long n;
    while (cin >> n)
    {
        for (int i=0; i<=9; i++)
		{
			ChuSo[i]=0;
		}
        int k = 0;
        while (1)
        {
            int Check = 1;
            for (int i = 0; i <= 9; i++)
            {
                if (ChuSo[i] == 0)
                {
                    Check = 0;
                    break;
                }
            }
            if (Check == 1)
                break;
            k++;
            long long S = n * k;
            while (S > 0)
            {
                ChuSo[S % 10] = 1;
                S /= 10;
            }
        }
        cout << k << endl;
    }
    return 0;
}