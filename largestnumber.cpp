#include<iostream>
using namespace std;
int main()
{
    int arr[] = {12,14,45,75};
    int size = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    for (int i =0 ;i<size;i++)
    {
   if(arr[i]>largest)
   {
    largest = arr[i];
   }
    }
    cout<<"the largest number is "<<largest<<endl;
    return 0;
}