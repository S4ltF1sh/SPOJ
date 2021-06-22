//PTIT136G - Bảng ô chữ
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int r, c;
    cin >> r >> c;
    vector<vector<char>> Mat(r, vector<char>(c));
    vector<string> Words;
    for (int i = 0; i < r; i++)
    {
        string s = "";
        for (int j = 0; j < c; j++)
        {
            cin >> Mat.at(i).at(j);
            if (Mat.at(i).at(j) != '#')
                s.push_back(Mat.at(i).at(j));
            else if (s.length() >= 2)
            {
                Words.push_back(s);
                s.clear();
            }
            else
                s.clear();
        }
        if (s.length() >= 2)
            Words.push_back(s);
    }
    for (int j = 0; j < c; j++)
    {
        string s = "";
        for (int i = 0; i < r; i++)
        {
            if (Mat.at(i).at(j) != '#')
                s.push_back(Mat.at(i).at(j));
            else if (s.length() >= 2)
            {
                Words.push_back(s);
                s.clear();
            }
            else
                s.clear();
        }
        if (s.length() >= 2)
            Words.push_back(s);
    }
    sort(Words.begin(), Words.end());
    cout << Words.at(0);
}