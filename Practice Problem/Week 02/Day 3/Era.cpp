#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mx=0;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            mx=max(mx,a-i);
        }
        cout<<mx<<endl;
    }
}