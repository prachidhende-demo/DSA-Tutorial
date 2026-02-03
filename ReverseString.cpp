#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str = "Hello Guys";

    reverse(str.begin(), str.end());
    cout<<str<<endl;
    return 0;
} 