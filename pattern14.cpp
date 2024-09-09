#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        // half pyramid
        {

            cout
                << "*";
        }
        // space full pyramid
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << " ";
        }
        // half pyramid
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        // half pyramid
        {

            cout
                << "*";
        }
        // space full pyramid
        for (int j = 0; j < 2 * i - 2 * i - 1; j++)
        {
            cout << " ";
        }
        // half pyramid
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}