#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    int maxsum= INT_MIN;
    int currsum=0;
    int temp=0;
    int start=0;
    int end=0;
    for(int i=0; i<n; i++)
    {
        currsum+=vec[i];
        if(currsum>maxsum)
        {
            maxsum=currsum;
            start=temp;
            end=i;
        }
        if(currsum<0)
        {
            currsum=0;
            temp=i+1;
        }
    }
    cout<<maxsum<<endl;
    for(int i=start; i<=end; i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}