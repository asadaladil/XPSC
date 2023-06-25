#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        set<char>r;
        int day=0;
        for(int i=0;i<s.size();i++)
        {
            r.insert(s[i]);
            if(r.size()>3)
            {
                day++;
                r.clear();
                r.insert(s[i]);
            }
        }
        if(r.size()>0)
        {
            day++;
        }
        cout<<day<<endl;
    }
}