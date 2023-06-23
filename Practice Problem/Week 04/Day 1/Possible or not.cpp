#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        vector<int>A(a);
        for(int i=0;i<a;i++)
        {
            cin>>A[i];
        }
        bool flag=true;
        for(int i=0;i<a;i++)
        {
            for(int j=i,k=a-1;j<a,k>=j;j++,k--)
            {
                
                if((A[i]&A[j])==b||(A[i]&A[k])==b)
                {
                    cout<< "YES\n";
                    flag=false;
                    break;
                }
            }
            if(!flag)
            {
                break;
            }
        }
        if(flag)
        {
            cout<< "NO\n";
        }
    }
}

