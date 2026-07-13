#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
    vector<int> findDuplicates(vector<int>& nums,vector<int>& ans) {
        unordered_map<int,int>mp;
        for(int x: nums)
        {
            mp[x]++;
        }
        for(auto it : mp)
        {
            if(it.second>=2)
            {
                ans.push_back(it.first);
            }
        }
        return (ans.size()==0)? vector<int>{0} : ans;
    }
int main()
{
    vector<int>nums={1,2,3,4};
    vector<int>ans;
    ans=findDuplicates(nums,ans);
    for(int x : ans)
    {
        cout<<x<<" ";
    }
    
}