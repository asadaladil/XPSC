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
        int x=log10(n);
        int m=n-pow(10,x);
        cout<<m<<endl;
    }
}