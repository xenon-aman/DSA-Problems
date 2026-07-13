#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int Maxrobprofit(int idx,vector<int>&vec)
{
    if(idx>=vec.size())
    {
        return 0;
    }
    int left=vec[idx]+Maxrobprofit(idx+2,vec);
    int right=Maxrobprofit(idx+1,vec);
    return max(left,right);
}
int main()
{
    vector<int>vec;
    string line;
    getline(cin,line);
    stringstream ss(line);
    int x;
    while(ss>>x)
    {
        vec.push_back(x);
    }
    int n=vec.size();
    int ans=Maxrobprofit(0,vec);
    cout<<ans;
    return 0;
}