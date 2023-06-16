#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int x,y;
    cin>>x>>y;
    int ans=0;
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<=x;j++)
        {
            if((y-i-j)>=0&&(y-i-j<=x))
            {
                ans++;
            }
        }
    }
    cout<<ans;
}