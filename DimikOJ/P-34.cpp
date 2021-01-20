#include<bits/stdc++.h>
using namespace std;
int main()
{
	 long long  c, T,a,b,i;
	cin >> T;
	while(T--)
	{
		
		cin>>a>>b>>c;
		// a = c - (a % c) + a; e.g, a = 3 - (2 % 3) + 2 = 3-2+2 = 3
		
		for(i = a*b;i <= c;i += a*b)
		{
		//	(((c/2)-1)/c) 
		     cout << i << '\n';
		
		}
		if(T != 0)
		cout <<'\n';
		
	}
	
	return 0;
}
