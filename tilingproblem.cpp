#include<iostream>
using namespace std;
int tilingp(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return tilingp(n-1)+tilingp(n-2);
}
int main()
{
    cout<<tilingp(4);
}