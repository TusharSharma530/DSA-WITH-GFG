#include<iostream>
using namespace std;
 int main ()
 {
    int arr[] = {12,15,17,19,21};
    int size =sizeof(arr)/sizeof(arr[0]);
    int smallest = arr[0];
    for(int i =0;i<size;i++)
    {
        if(arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    cout<<"the smallest number in array is "<<smallest<<endl;
    return 0;
 }