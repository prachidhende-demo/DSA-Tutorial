#include<iostream>
using namespace std;

int main()
{
    string num1,num2;

    cout<<"Enter the number : ";
    cin>>num1;
    cout<<"Enetr the number : ";
    cin>>num2;

    long long n1 = stoll(num1);
    long long n2 = stoll(num2);

    long long result = n1 * n2;

    cout<<"Result = "<<result<<endl;
    return 0;
}