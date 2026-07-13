#include<iostream>
#include<vector>
using namespace std;
void subsets(vector<int>& vec, vector<int>& ans, int idx,int n)
{
    if(idx>=n)
    {
        if(ans.size()==0)
        {
            cout<<"{}";
        }
        for(int x : ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        return ;
    }
    subsets(vec,ans,idx+1,n); //not take
    ans.push_back(vec[idx]);
    subsets(vec,ans,idx+1,n); //take
    ans.pop_back();
}
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    vector<int>ans;
    subsets(vec,ans,0,n);
}