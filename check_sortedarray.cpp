#include<iostream>
using namespace std;
bool isSorted(int array[],int n,int i)
{
    //base case- we are at the last index(array is sorted as it is only element in array at last)
    if(i==n-1)
    {
        return true;
    }
    if(array[i]>array[i+1])
    {
        return false;
    }
    return isSorted(array,n,i+1);
}
int main()
{
    //comments added 
    int array[6]={1,2,3,4,5,6};
    int n=sizeof(array)/sizeof(int);
    cout<<boolalpha<<isSorted(array,6,0);
    return 0;
}