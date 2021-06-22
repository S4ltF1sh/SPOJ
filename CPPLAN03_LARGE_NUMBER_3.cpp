//CPPLAN03 - LARGE NUMBER 3
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
string MulBigNum(string a, string b)
{
    int len1 = a.size();
    int len2 = b.size();
    if (len1 == 0 || len2 == 0)
        return "0";
    // will keep the Res number in vector
    // in reverse order
    vector<int> Res(len1 + len2, 0);
    // Below two indexes are used to find positions
    // in Res.
    int i_a = 0;
    int i_b = 0;
    // Go from right to left in a
    for (int i = len1 - 1; i >= 0; i--)
    {
        int carry = 0;
        int n1 = a.at(i) - '0';
        // To shift position to left after every
        // multiplication of a digit in b
        i_b = 0;
        // Go from right to left in b
        for (int j = len2 - 1; j >= 0; j--)
        {
            // Take current digit of second number
            int n2 = b.at(j) - '0';
            // Multiply with current digit of first number
            // and add Res to previously stored Res
            // at current position.
            int sum = n1 * n2 + Res.at(i_a + i_b) + carry;
            // Carry for next iteration
            carry = sum / 10;
            // Store Res
            Res.at(i_a + i_b) = sum % 10;
            i_b++;
        }
        // store carry in next cell
        if (carry > 0)
            Res.at(i_a + i_b) += carry;
        // To shift position to left after every
        // multiplication of a digit in a.
        i_a++;
    }
    // ignore '0's from the right
    int i = Res.size() - 1;
    while (i >= 0 && Res.at(i) == 0)
        i--;
    // If all were '0's - means either both or
    // one of a or b were '0'
    if (i == -1)
        return "0";
    // generate the Res string
    string s = "";
    while (i >= 0)
        s += to_string(Res.at(i--));
    return s;
}
void Run()
{
    string a, b;
    cin >> a >> b;
    cout << MulBigNum(a, b) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        Run();
    return 0;
}