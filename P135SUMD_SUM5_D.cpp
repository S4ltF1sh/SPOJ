//P135SUMD - SUM5 D - Thanh socola(chua nghi ra)
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int k, Count = 0;
    cin >> k;
    //find number of pieces
    int tmp = (log(k) / log(2)) + 1; //vi Teo cung can an nen phai cong 1
    int Pieces = pow(2, tmp);
    cout << Pieces << " ";
    //find number of step
    
}