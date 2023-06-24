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
        vector<int>A(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>A[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<abs(A[1]-A[2])<<endl;
            continue;
        }
        sort(A.begin(),A.end());
        ll sum=0;
        for(int i=1;n%2==0?i<=n/2:i<=(n/2)+1;i++)
        {
            sum+=(A[n-(i-1)]-A[i]);
        }
        cout<<sum<<endl;
    }
}