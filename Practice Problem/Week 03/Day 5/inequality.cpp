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
		vector<int>A(n+1),B(n+2);
		for (int i=1;i<=n;i++) 
        {
			cin>>A[i];
			if(A[i]<i) 
            {
				B[1]++;
				B[A[i]]--;
			}
		}
		ll ans=0;
		for (int i=1;i<=n;i++) 
        {
			B[i]+=B[i-1];
			if (A[i]<i)
            {
                ans+=B[i];
            }
		}
		cout<<ans<<endl;
    }
}