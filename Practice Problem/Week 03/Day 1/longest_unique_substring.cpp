#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    int k,uni=0;
    cin>>s>>k;
    int n=s.length();
    map<char,int>mp1;
    ll l=0,r=0;
    mp1[s[l]]++;uni++;
    ll ans=-1;
    while(r<n)
    {
        if(uni==k)
        {
            ans=max(ans,r-l+1);
            r++;
            if(mp1[s[r]]==0)
            {
                uni++;
            }
            mp1[s[r]]++;
        }
        else if(uni>k)
        {
            if(mp1[s[l]]==1)
            {
                uni--;
            }
            mp1[s[l]]--;
            l++;
        }
        else
        {
            r++;
            if(mp1[s[r]]==0)
            {
                uni++;
            }
            mp1[s[r]]++;
        }

    }
    cout<<ans;
}