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

int decimalToBinaryMethod2(int n)
{
    int binaryno = 0;
    int i = 0;

    // bitwise method
    while (n > 0)
    {
        int bit = (n & 1);
        // cout << bit << endl;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }
    return binaryno;
}
int binarytodecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n)
    {
        int bit = n % 10;
        decimal = decimal + bit * pow(2, i++);
        n /= 10;
    }
    return decimal;
}

int main()
{
    //
    int binaryno;
    cin >> binaryno;
    cout << binarytodecimal(binaryno) << endl;
}