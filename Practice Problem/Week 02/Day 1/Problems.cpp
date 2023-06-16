#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int c=a+b;
        c%2==0?cout<< "YES\n":cout<< "NO\n";
    }
}
