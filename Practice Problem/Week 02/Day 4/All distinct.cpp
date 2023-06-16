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
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            s.insert(a);
        }
        int m=s.size();
        (n-m)%2==0?cout<<m:cout<<m-1;
        cout<<endl;
    }
}