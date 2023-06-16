#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string txt,ptr;
    cin>>txt>>ptr;
    int k=ptr.size();
    vector<int>fr1(125),fr2(125);
    for(char c:ptr)
    {
        fr1[c]++;
    }
    int ans=0;
    for(int i=0;i<k;i++)
    {
        fr2[txt[i]]++;
    }
    bool flag=true;
    for(int i=97;i<123;i++)
    {
        if(fr1[i]!=fr2[i])
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        ans++;
    }
    k--;
    int l=0;
    while(k<txt.size())
    {
        flag=true;
        fr2[txt[l]]--;
        l++;
        k++;
        fr2[txt[k]]++;
        for(int i=97;i<123;i++)
        {
            if(fr1[i]!=fr2[i])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            ans++;
        }
    }
    cout<<ans<<endl;

}

/*

forxxorfxdofr
for
*/