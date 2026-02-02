#include<iostream>
using namespace std;

int main()
{
    int arr1[] = {3,4,1};
    int arr2[] = {5,6,2};
    int arr3[] = {7,8,9};

    for(int i = 0; i < 3; i++)
    {
        cout<<(arr1[i] + arr2[i] + arr3[i])<<" ";
    }
    cout<<endl;
    return 0;
}