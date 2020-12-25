#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;int cnt0=0,cnt1=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            cnt0++;
            else
            cnt1++;
        }
        int moves=min(cnt0,cnt1);
        if(moves%2==0)
        cout<<"niumei"<<endl;
        else
        cout<<"niuniu"<<endl;
    }
}