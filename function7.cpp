#include <iostream>
#include <cmath>
using namespace std;
int decimalToBinaryMethod(int n)
{
    int binaryno = 0;
    int i = 0;

    // divison method
    while (n > 0)
    {
        int bit = n % 2;
        // cout << bit << endl;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n / 2;
    }
    return binaryno;
}

int main()
{
    int n;
    cin >> n;
    int binary = decimalToBinaryMethod(n);
    cout << binary << endl;
}