#include<bits/stdc++.h>
using namespace std;
void solve(int a,int n)
{
		if(a > n)		
		{cout <<"Invalid!"<<'\n';}
		for(int j = a; j <= n; j += a)
		{
			cout<<j<<'\n';
			}
		cout << '\n';
		
}
int main()
{
	int N, a,n;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> a >> n;
		solve(a,n);
			
	}
		return 0;
	}
		
		


