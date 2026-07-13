#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Partition(vector<int>& vec,int st, int end)
{
    int i=st-1;
    int pivot=vec[end];
    for(int j=st; j<end; j++)
    {
        if(vec[j]<=pivot)
        {
            i++;
            swap(vec[i],vec[j]);
        }
    }
    i++;
    swap(vec[i],vec[end]);  // swapping pivot element and vec[i]
    return i;
}
void QuickSort(vector<int>& vec,int st, int end)
{
    if(st>=end)            //Base Case
    {
        return;
    }
    int pivotIdx=Partition(vec,st,end);
    QuickSort(vec,st,pivotIdx-1);           //Recursion
    QuickSort(vec,pivotIdx+1,end);          //Recursion
}
void PrintArray(vector<int>& vec)
{
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
}
int main()
{
    vector<int>vec={6,3,2,4,5,1};
    QuickSort(vec,0,5);
    PrintArray(vec);
    return 0;
}