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
        ll c=a*b;
        string s=to_string(c);
        s.size()==5&&s[0]!='0'?cout<< "YES\n":cout<< "NO\n";
    }
}
