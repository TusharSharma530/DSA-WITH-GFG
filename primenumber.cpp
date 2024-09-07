#include <iostream>
using namespace std;
int main()
{
    int i, n;
    bool is_prime = true;
    cout << "enter a  positive number";
    cin >> n;
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }
    for (i = 0; i < n / 2; i++)
    {
        if (n / 2 == 0)
        {
            is_prime = false;

            break;
        }
    }
    if (is_prime)
    {
        cout << n << "  is prime number";
    }
    else
        cout << n << "is even number";
}