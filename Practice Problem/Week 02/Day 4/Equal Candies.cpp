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
        int mn=1e8;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mn=min(mn,a);
            sum+=a;
        }
        cout<<sum-mn*n<<endl;
    }
}