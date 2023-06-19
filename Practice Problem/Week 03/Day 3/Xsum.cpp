#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        int A[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>A[i][j];
            }
        }
        ll mx=-1e8;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ll sum=0;
                int a=i,b=j;
                while(a>=0&&a<r&&b>=0&&b<c)
                {
                    sum+=A[a][b];
                    a++;b++;
                }
                a=i,b=j;
                while(a>=00&&a<r&&b>=0&&b<c)
                {
                    sum+=A[a][b];
                    a--;b--;
                }
                a=i,b=j;
                while(a>=0&&a<r&&b>=0&&b<c)
                {
                    sum+=A[a][b];
                    a--;b++;
                }
                a=i,b=j;
                while(a>=0&&a<r&&b>=0&&b<c)
                {
                    sum+=A[a][b];
                    a++;b--;
                }
                mx=max(mx,sum-3*A[i][j]);
            }
        }
        cout<<mx<<endl;

    }
}