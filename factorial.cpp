#include <iostream>
using namespace std;
int main()
{
    int n;
    int fact = 1;
    for (int i = 5; i > fact; i--)
    {
        fact = fact * i;
        cout << fact;
    }
}
