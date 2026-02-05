#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<" Enter the String : ";
    cin>>str;

    int start = 0;
    int end = str.length() - 1;
    char temp;

    while(start < end)
    {
        temp = str[end];
        str[end] = str[start];
        str[start] = temp;
        
        start++;
        end--;
    }    
    cout<<"Reverse String : "<<str<<endl;
    return 0;
}
