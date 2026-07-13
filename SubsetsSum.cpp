#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>subsetSum(vector<int>& vec,vector<int>& ans,int sum,int i)
{
    int n=vec.size();
    if(i>=n)
    {
        ans.push_back(sum);
        return ans;
    }
    subsetSum(vec,ans,sum+vec[i],i+1);
    subsetSum(vec,ans,sum,i+1);
    return ans;
}
int main()
{
    vector<int>vec={3,1,2};
    vector<int>ans;
    ans=subsetSum(vec,ans,0,0);
    sort(ans.begin(),ans.end());
    for(int i : ans) cout<<i<<" ";
}