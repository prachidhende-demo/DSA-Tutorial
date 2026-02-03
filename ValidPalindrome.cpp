#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;

    int start = 0;
    int end = str.length() - 1;

    while(start < end)
    {
        if(str[start] != str[end])
        {
            cout<<"not palindrome";
            return 0;
        }
        start ++;
        end --;
    }
    cout<<"Palindrome"<<endl;
    return 0;
}