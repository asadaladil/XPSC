#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
		cin>>n>>k;
		map<int,int>mp;
		vector<int>A;
		set<int>S;
		for(int i = 0; i < n; i++)
		{
			int a;
			cin>>a;
			mp[a]++;
			if(mp[a]>=k&&S.find(a)==S.end())
			{
				A.push_back(a);
				S.insert(a);
			}
		}
		int x=A.size();
		if(x==0)
		{
			cout<<-1<<endl;
			continue;
		}
		sort(A.begin(),A.end());
		int mx = 0;
		int ls=A[0],rs=A[0];
		int l=A[0];
		for(int i=1;i<x;i++)
		{
			if(A[i]-1==A[i-1])
			{
				if(A[i]-l>mx)
				{
					ls=l;
					rs=A[i];
					mx=A[i]-l;
				}
			}
			else
			{
				l=A[i];
			}
		}
		cout<<ls<<" "<<rs<<endl;
    }
}