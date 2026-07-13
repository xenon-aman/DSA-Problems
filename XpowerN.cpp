#include<iostream>
using namespace std;
float power(int x, int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return power(x,n+1)/x;
    }
    else
    return x*power(x,n-1);
}
int main()
{
    cout<<power(2,2);
}