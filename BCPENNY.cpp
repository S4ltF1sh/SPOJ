//BCPENNY - Penny Game
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void Run()
{
    int stt;
    string s;
    int CountTTT = 0, CountTTH = 0, CountTHT = 0, CountTHH = 0, CountHTT = 0, CountHTH = 0, CountHHT = 0, CountHHH = 0;
    cin >> stt;
    cin.ignore();
    getline(cin, s);
    for (int i = 0; i < s.length() - 2; i++)
    {
        if (s.at(i) == 'T' && s.at(i + 1) == 'T' && s.at(i + 2) == 'T')
            CountTTT++;
        else if (s.at(i) == 'T' && s.at(i + 1) == 'T' && s.at(i + 2) == 'H')
            CountTTH++;
        else if (s.at(i) == 'T' && s.at(i + 1) == 'H' && s.at(i + 2) == 'T')
            CountTHT++;
        else if (s.at(i) == 'T' && s.at(i + 1) == 'H' && s.at(i + 2) == 'H')
            CountTHH++;
        else if (s.at(i) == 'H' && s.at(i + 1) == 'T' && s.at(i + 2) == 'T')
            CountHTT++;
        else if (s.at(i) == 'H' && s.at(i + 1) == 'T' && s.at(i + 2) == 'H')
            CountHTH++;
        else if (s.at(i) == 'H' && s.at(i + 1) == 'H' && s.at(i + 2) == 'T')
            CountHHT++;
        else
            CountHHH++;
    }
    cout << stt << " " << CountTTT << " " << CountTTH << " " << CountTHT << " " << CountTHH << " " << CountHTT << " " << CountHTH << " " << CountHHT << " " << CountHHH << endl;
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