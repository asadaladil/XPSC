#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        string s;
        cin>>s;
        map<char,int>mp;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]>1)
            {
                sum++;
            }
            else
            {
                sum+=2;
            }
        }
        cout<<sum<<endl;
    }
}