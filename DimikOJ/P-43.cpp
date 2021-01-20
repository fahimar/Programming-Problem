#include <bits/stdc++.h>
using namespace std;

signed main()
{
	int t,p,q,c,r,s;
	
	cin >> t;
	
	while(t--)
	{
		cin >> p >> q >> c;
		
		r = pow(p,q);
		s = r % c;
		
		cout <<"Result = "<<s<<'\n';
		
	}
	
	return 0;
	
}
