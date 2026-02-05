#include<iostream>
using namespace std;

int main()
{
    int n = 2;
    int arr1[] = {5};
    int arr2[] = {6};

    for(int i = 0; i < n; i++)
    {
        cout<<(arr1[i] + arr2[i])<<" ";
    }
    cout<<endl;
    return 0;
}