#include<iostream>
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N = 109;
int q,n, tc;
ld dp[N][N][N*10], p[N], c, T;
vector<pair<int,int> >v;
void solve()
{
	for(int i = 0; i <= n; i++)
		for(int taken = 0;taken <= n*10; taken++)
			for(int rem=0; rem <= n*10; rem++)
				dp[i][taken][rem]=1e18;
	dp[0][0][0] = 0;
	for(int i = 1;i <= n; i++)
		for(int taken=0; taken<= i; taken++)
			for(int rem=0;rem<=taken*10;rem++)
			{
				dp[i][taken][rem]=dp[i-1][taken][rem];
				
				if(taken && rem-v[i-1].second >= 0)
				{
					ld op = v[i-1].first*p[taken] + dp[i-1][taken-1][rem-v[i-1].second];
					dp[i][taken][rem] = min( dp[i][taken][rem], op );
					}
				
				}
	
	}

int main()
{
	IO
	p[0]=1;
	for(int i = 1; i <= 101; i++)
		p[i] = p[i - 1]*10/9;
	
	cin>>q;
	while(q--)
	{
		tc++;
		cin>>n>>c>>T;
		for(int i = 0; i < n; i++)
		{
			int x, y;
			cin >> x>>y;
			v.push_back({x,y});
		}
		sort(v.rbegin(),v.rend());
		solve();
		
		int ans = 0;
		for(int take = 1; take <= n; take++)
			for(int i = n* 10; i >= 1; i--)
			{
				ld sum = dp[n][take][i];        // t + sum(1+t*c) <= T
				if(sum>1e17)
					continue;
				ld t = (sqrt(c*sum) - 1)/c;
				if(t < 0)
					t=0;
				if(t + sum / (1 + t * c) + take * 10 - 1e-3 <= T)
				{
					//cout<<t<<" "<<i<<" "<<sum<<"\n";
					ans = max(ans,i);
					break;
					
					}
				
				
			}
		cout << ans << "\n";
		v.clear();
		
		
		}
		
	
}
