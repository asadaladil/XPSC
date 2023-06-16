#include<bits/stdc++.h>
using namespace std;
void fact(int n)
{
    long long r=1;
    for(int i=2;i<=n;i++)
    {
        r*=i;
    }
    cout<<r<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        fact(n);
    }
}