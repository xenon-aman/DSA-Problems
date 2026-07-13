#include<iostream>
#include<vector>
using namespace std;
int firstocc(vector<int>&vec,int i,int target)
{
    //base case
    if(i==vec.size())
    {
        return -1;
    }
    if(target==vec[i])
    {
        return i;
    }
    return firstocc(vec,i+1,target);
}
int lastocc(vector<int>&vec,int i,int target)
{
    if(i<0)
    {
        return -1;
    }
    if(target==vec[i])
    {
        return i;
    }
    return lastocc(vec,i-1,target);
}
int main()
{
    vector<int>vec={0,0,0,0,0,0,0};
    cout<<firstocc(vec,0,0)<<endl;
    cout<<lastocc(vec,6,0);
    return 0;
}