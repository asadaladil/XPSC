#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        a<b?a--:b--;
        cout<<abs(b*(b+1)/2-a*(a+1)/2)<<endl;
    }
}