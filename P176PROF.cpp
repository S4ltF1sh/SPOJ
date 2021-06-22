//P176PROF - ROUND 6F - Zombie v.s Human(chua xong)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int WordCount(string s)
{
    int word = 0;
    if (s.at(0) != '_')
        word++;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == '_' && s[i + 1] != '_')
        {
            word++;
        }
    }
    return word;
}
int main()
{

}