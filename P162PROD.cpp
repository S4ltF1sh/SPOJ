//P162PROD - ROUND 2D - Bữa tiệc sinh nhật
//Area of hexagon with all angles = 120 degree: S = sqrt(3)/4 * ((a1 + a2 + a3)^2 - a1^2 - a3^2 - a5^2).
//Chung minh:ve hinh luc giac thanh tam giac deu la ra.
#include <iostream>
using namespace std;
int main()
{
    int a1, a2, a3, a4, a5, a6;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6;
    cout << (a1 + a2 + a3) * (a1 + a2 + a3) - a1 * a1 - a3 * a3 - a5 * a5;
}