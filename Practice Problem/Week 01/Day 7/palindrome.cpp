#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;
    cin>>s;
    string r;
    r=s;
    reverse(r.rbegin(),r.rend());
    s==r?cout<<"YES":cout<<"NO";
}