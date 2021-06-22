//P141PROA - ROUND 1A - Đối mặt
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int Time = 210;
struct Data
{
    int time;
    char Answer;
};

int main()
{
    int stt, n;
    cin >> stt >> n;
    vector<Data> Each_PP(n);
    int sttOUT = stt;
    int RunTime = 0;
    for (int i = 0; i < n; i++)
        cin >> Each_PP.at(i).time >> Each_PP.at(i).Answer;
    for (int i = 0; i < n; i++)
    {
        RunTime += Each_PP.at(i).time;
        if (RunTime <= Time)
        {
            if (Each_PP.at(i).Answer == 'T')
                sttOUT++;
        }
        //neu qua thoi gian thi dung luon
        else
        {
            cout << sttOUT;
            return 0;
        }
        //het 1 vong
        if (sttOUT > 8)
            sttOUT = 1;
    }
}