#include <iostream>
using namespace std;
int main()
{
    for (int row = 0; row < 6; row++)
    {
        for (int col = 5; col > row; col--)
        {
            cout << "*";
        }
        cout << endl;
    }
}