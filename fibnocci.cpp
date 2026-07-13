#include<iostream>
using namespace std;
int fibnocci(int n)
{
    if(n==0 ||n==1)
    {
        return n;
    }
    return fibnocci(n-1)+fibnocci(n-2);
}
int main()
{
    cout<<fibnocci(4);
}