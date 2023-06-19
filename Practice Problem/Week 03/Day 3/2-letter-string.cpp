#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<string>ms(n),M;
        map<string,ll>ml;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ms[i];
            ml[ms[i]]++;
            if(ml[ms[i]]==1)
            {
                M.push_back(ms[i]);
            }
        }
        sort(M.begin(),M.end());
        for(int i=0;i<M.size();i++)
        {
            for(int j=i+1;j<M.size();j++)
            {
                if(M[i][0]==M[j][0]&&M[i][1]!=M[j][1]||M[i][0]!=M[j][0]&&M[i][1]==M[j][1])
                {
                    sum+=(ml[M[i]]*ml[M[j]]);
                    
                }
            }
        }
        cout<<sum<<endl;
    }
}