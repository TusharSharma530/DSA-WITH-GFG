#include <iostream>
using namespace std;
int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << "  ";
        }
        cout << "*" << endl;

        for (int col = 0; col < 3; col++)
        {
            cout << "  ";
        }
        cout << "* *" << endl;

        for (int col = 0; col < 2; col++)
        {
            cout << "  ";
        }
        cout << "* * *" << endl;

        for (int col = 0; col < 1; col++)
        {
            cout << "  ";
        }
        cout << "* * * *" << endl;

        cout << "  ";
        for (int col = 0; col < 5; col++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    cout << endl;
}