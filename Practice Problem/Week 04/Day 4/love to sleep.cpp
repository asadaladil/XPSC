#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h,m;
        cin>>n>>h>>m;
        int x=h*60+m;
        int ans1=10000,ans2=10000;
        bool flag=true;
        for(int i=1;i<=n;i++)
        {
            int a,b;
            cin>>a>>b;
            int y=(a*60+b)-x;
            bool flag2=true;
            if(y==0)
            {
                ans1=0;
                ans2=0;
                flag=false;
                continue;
            }
            if(flag)
            {
                if(y<0)
                {
                    y=24*60+y;
                }
                if(ans1==(y/60))
                {
                    ans2=min(ans2,y%60);
                    flag2=false;
                }
                ans1=min(ans1,y/60);
                if(ans1==(y/60)&&flag2)
                {
                    ans2=y%60;
                }
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
    }
}