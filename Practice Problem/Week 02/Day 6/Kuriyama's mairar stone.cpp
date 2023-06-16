#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    vector<ll>A,B,C;
    int a;
    cin>>a;
    A.push_back(0);
    A.push_back(a);
    B.push_back(a);
    for(int i=1;i<n;i++)
    {
        cin>>a;
        B.push_back(a);
        A.push_back(A[i]+a);
    }
    sort(B.begin(),B.end());
    C.push_back(0);
    C.push_back(B[0]);
    for(int i=1;i<n;i++)
    {
        C.push_back(B[i]+C[i]);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int t,x,y;
        cin>>t>>x>>y;
        if(t==1)
        {
            cout<<A[y]-A[x-1]<<endl;
        }
        else
        {
            cout<<C[y]-C[x-1]<<endl;
        }
    }
}