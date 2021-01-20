#include<bits/stdc++.h>
using namespace std;

vector<int> ones = {2, 3, 5, 7, 13}, zeros = {1, 2, 4, 6, 12};
int T;

void solve()
{
	int n;cin >> n;
	for(int i = 0; i < 5; i++)
	{
		int64_t x = ((1 << (ones[i]+zeros[i])) - 1) ^ ((1 << zeros[i]) - 1);
		if(x > n)break;
		cout << x << '\n';
	}
		if(T != 0) cout << '\n';
}

int32_t main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> T;
	while(T--){ solve();}
	return 0;
} 
