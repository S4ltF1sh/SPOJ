//BCNEPER - Hoán vị kế tiếp
//Cach 1:

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
void Show(string Result, int stt)
{
    cout << stt << " " << Result;
    cout << endl;
}
int Find_Min(int Local_Check, string Result, char Check)
{
    int Local;
    char Min = '9' + 3;
    for (int i = Local_Check + 1; i < Result.size(); i++)
    {
        if (Result.at(i) < Min && Result.at(i) > Check)
        {
            Min = Result.at(i);
            Local = i;
        }
    }
    return Local;
}
void Sinh(string &Result, int stt)
{
    int Check = 0;
    for (int j = Result.size() - 2; j >= 0; j--)
    {
        if (Result.at(j) >= Result.at(j + 1))
            continue;
        else
        {
            Check = 1;
            int Local_Sw = Find_Min(j, Result, Result.at(j));
            swap(Result.at(j), Result.at(Local_Sw));
            sort(Result.begin() + j + 1, Result.begin() + Result.size());
            Show(Result, stt);
            break;
        }
    }
    if (Check == 0)
        cout << stt << " "
             << "BIGGEST\n";
}
void Run()
{
    string Result;
    int stt;
    cin >> stt >> Result;
    Sinh(Result, stt);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Run();
    }
    return 0;
}

//Cach 2:

// #include <iostream>
// #include <cmath>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void Run()
// {
//     string Result;
//     int stt;
//     cin >> stt >> Result;
//     if (next_permutation(Result.begin(), Result.begin() + Result.size()))
//     {
//         cout << stt << " " << Result << endl;
//     }
//     else
//         cout << stt << " "
//              << "BIGGEST\n";
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         Run();
//     }
//     return 0;
// }