#include <iostream>
using namespace std;
int main()
{
    int n, p;
    cout << "enter the no of rows" << endl;
    cin >> n;
    cout << "enter the no of cols" << endl;
    cin >> p;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}