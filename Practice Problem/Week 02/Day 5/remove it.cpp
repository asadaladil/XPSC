#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    int n,k;
    cin>>n>>k;
    vector<int>A;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a!=k)
        {
            A.push_back(a);
        }
    }
    for(int i:A)
    {
        cout<<i<<" ";
    }
}