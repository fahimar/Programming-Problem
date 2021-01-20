#include <bits/stdc++.h>
#include<map>
#define ll long long int
#define dd double
#define pb push_back
#define mp make_pair
#define f first
#define s second
using namespace std;
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int boy,girl;
	cin>>boy>>girl;
	if(boy>girl)
	{
		cout<<"B";
		boy--;
		while(boy+girl>0)
		{
			if(girl>0)
			{
				cout<<"G";
				girl--;
			}
			if(boy>0)
			{
				cout<<"B";
				boy--;
			}
		}
	}
	else
	{
		cout<<"G";
		girl--;
		while(boy+girl>0)
		{
			if(boy>0)
			{
				cout<<"B";
				boy--;
			}
			if(girl>0)
			{
				cout<<"G";
				girl--;
			}
		}
	}
	return 0;
}
