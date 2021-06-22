//PTIT138A - BÀI A - TAM GIÁC VUÔNG
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    while (1)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            return 0;
        if (a + b > c && b + c > a && c + a > b)
        {
            if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
                cout << "right\n";
            else
                cout << "wrong\n";
        }
        else
            cout << "wrong\n";
    }
    return 0;
}
