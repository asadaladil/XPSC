#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ans=0;
        cin>>n>>k;
        vector<int>A(n),B(n);
        B[1]=0;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            if(i>0)
            {
                if(A[i]*2>A[i-1])
                {
                    B[i]=1;
                    B[i]+=B[i-1];
                    if(B[i]>=k)
                    {
                        ans++;
                    }
                }
                else
                {
                    B[i]=0;
                }
            }
        }
        cout<<ans<<endl;
    }
}