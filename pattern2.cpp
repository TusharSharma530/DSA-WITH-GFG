#include <iostream>
using namespace std;
int main()
{
    for (int rows = 0; rows < 3; rows++)
    {
        if (rows == 0 || rows == 2)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << "* ";
            }
            // cout << endl;
        }
        else
        {
            cout << "* ";
            for (int k = 1; k < 7; k++)
            {
                cout << " ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}