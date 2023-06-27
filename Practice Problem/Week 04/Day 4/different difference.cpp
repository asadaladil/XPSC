#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;
        int m=1;
        int x=1;
        for(int i=1;i<=k;i++)
        {
            cout<<m<<" ";
            if(n-(m+x)>=k-(i+1))
            {
                m+=x;
                x++;
            }
            else 
            {
                m++;
            }
        }
        cout<<endl;
    }
}