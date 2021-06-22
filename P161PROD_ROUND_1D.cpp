//P161PROD - ROUND 1D - Câu chuyện tình yêu
#include <iostream>
#include <vector>
#include <string>
using namespace std;
string R1 = "qwertyuiop";
string R2 = "asdfghjkl;";
string R3 = "zxcvbnm,./";
int main()
{
    char Bug;
    string Mess_Bug;
    cin >> Bug;
    cin >> Mess_Bug;
    for (int i = 0; i < Mess_Bug.length(); i++)
    {
        int Local = -1;
        int Check1 = 0, Check2 = 0, Check3 = 0;
        for (int j = 0; j < R1.length(); j++)
        {
            if (Mess_Bug[i] == R1[j])
            {
                Local = j;
                Check1 = 1;
                break;
            }
            if (Mess_Bug[i] == R2[j])
            {
                Local = j;
                Check2 = 1;
                break;
            }
            if (Mess_Bug[i] == R3[j])
            {
                Local = j;
                Check3 = 1;
                break;
            }
        }
        if (Check1 == 1)
        {
            if (Bug == 'L')
            {
                if (Local == 9)
                    cout << R1[0];
                else
                    cout << R1[Local + 1];
            }
            if (Bug == 'R')
            {
                if (Local == 0)
                    cout << R1[0];
                else
                    cout << R1[Local - 1];
            }
        }
        if (Check2 == 1)
        {
            if (Bug == 'L')
            {
                if (Local == 9)
                    cout << R2[0];
                else
                    cout << R2[Local + 1];
            }
            if (Bug == 'R')
            {
                if (Local == 0)
                    cout << R2[0];
                else
                    cout << R2[Local - 1];
            }
        }
        if (Check3 == 1)
        {
            if (Bug == 'L')
            {
                if (Local == 9)
                    cout << R3[0];
                else
                    cout << R3[Local + 1];
            }
            if (Bug == 'R')
            {
                if (Local == 0)
                    cout << R3[0];
                else
                    cout << R3[Local - 1];
            }
        }
    }

    return 0;
}
