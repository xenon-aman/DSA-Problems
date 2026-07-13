#include<iostream>
#include<vector>
using namespace std;
void Merge(vector<int>& vec,int st,int end, int mid)   //conquer step
{
    vector<int>ans;
    int i=st;
    int j=mid+1;
    while(i<=mid && j<=end) //checking which element to push into answer
    {
        if(vec[i]<=vec[j])
        {
            ans.push_back(vec[i]);
            i++;
        }
        else
        {
            ans.push_back(vec[j]);
            j++;
        }
    }

    while(i<=mid)     // if i or j end but elements are still left in any of one
    {
        ans.push_back(vec[i]);
        i++;
    }
    while(j<=end)
    {
        ans.push_back(vec[j]);
        j++;
    }
    for(int i=st, x=0; i<=end; i++)     //To copy answer into original array(this is for every array(right,left))
    {
        vec[i]=ans[x];
        x++;
    }
}
void MergeSort(vector<int>& vec, int st, int end)
{
    if(st>=end)
    {
        return;
    }
    int mid=st+(end-st)/2;
    MergeSort(vec,st,mid);         //Recursion
    MergeSort(vec,mid+1,end);      //Recursion
    Merge(vec,st,end,mid);
}
void Printvec(vector<int>& vec)
{
     for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
}
int main()
{
    vector<int>vec={2,1,3,4,6,5};
    MergeSort(vec,0,5);
    Printvec(vec);
    return 0;
}