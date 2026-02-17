#include<iostream>
using namespace std;

int factorialN(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    cout<<factorialN(5)<<endl;
    cout<<factorialN(3)<<endl;
    cout<<factorialN(2)<<endl;
}


/*O/P;-120
       6
       2*/ 