#include<iostream>
using namespace std;

int main()
{
    int num = 12345;
    int rev = 0;
    int digit;

    while(num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    cout<<"Reverse Integer : "<<rev<<endl;
    return 0;
}