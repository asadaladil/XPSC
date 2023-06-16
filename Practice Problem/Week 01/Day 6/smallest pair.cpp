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
        int x=1e7;
        vector<int>A(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>A[i];
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                x=min(x,A[j]+A[i]+j-i);
            }
        }
        cout<<x<<endl;
    }
}