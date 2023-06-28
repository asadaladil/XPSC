#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=1000000;
        cin>>n;
        vector<int>A(n+1),B;
        B.push_back(0);
        for(int i=1;i<=n;i++)
        {
            cin>>A[i];
            B.push_back(B[i-1]+A[i]);
        }
        int cnt,num;
	    for(int i=1;i<=n;i++)
        {
		    cnt=num=i;
		    for(int j=i+1;j<=n;j++)
            {
			    if(B[j]==B[cnt]+B[i])
                {
				    num=max(num,j-cnt);
				    cnt=j;
                }
			}
		    if(cnt==n)
            {
                ans=min(ans,num);
            }
	    }
	    cout<<ans<<endl;
    }
}