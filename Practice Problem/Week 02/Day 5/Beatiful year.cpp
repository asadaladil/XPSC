#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    int n;
    cin>>n;
    n++;
    while(1)
    {
        string s=to_string(n);
        map<char,int>mp;
        bool flag=true;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]==0)
            {
                mp[s[i]]++;
            }
            else
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<n;
            break;
        }
        else
        {
            n++;
        }
    }
}