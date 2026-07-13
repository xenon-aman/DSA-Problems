#include<iostream>
using namespace std;
void removeDuplicates(string str,string ans, int i, int map[26])
{
    if(i==str.length())
    {
        cout<<ans<<endl;
        return;
    }
    char ch=str[i];
    int index=(int)(ch-'a');
    if(!map[index])   //No duplicate
    {
        map[index]=true;
        removeDuplicates(str,ans+str[i],i+1,map);
    }
    else{  // duplicate
        removeDuplicates(str,ans,i+1,map);
    }


}
int main()
{
    string str;
    cin>>str;
    string ans="";
    int map[26]={false};
    removeDuplicates(str,ans,0,map);
    return 0;
}