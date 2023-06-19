#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
	while(t--)
    {
        int n,q;
        cin>>n>>q;
        ll A[1001][1001];
	    memset(A,0,sizeof(A));
		for(int i=1;i<=n;i++)
	    {
		    int h,w;
		    cin>>h>>w;
		    A[h][w]+=h*w;
	    }
	    for(int i=1;i<=1000;i++)
        {
		    for(int j=1;j<=1000;j++)
            {
			    A[i][j]+=A[i-1][j]+A[i][j-1]-A[i-1][j-1];
            }
        }			
	    for(int i=1;i<=q;i++)
	    {
		    int x1,y1,x2,y2;
		    cin>>x1>>y1>>x2>>y2;
		    x1++;
		    y1++;
		    x2--;
		    y2--;
		    cout<<(A[x2][y2]+A[x1-1][y1-1])-(A[x1-1][y2]+A[x2][y1-1])<<endl;
	    }
    }
}