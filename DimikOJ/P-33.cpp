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
			if(a%c != 0)
			{
				a = c - (a % c) + a;
				
			}
		for( i=a;i<=b;i+=c)
		{
			
			
		cout<< i <<'\n';
		}
		cout <<'\n';
		
	}
	
	return 0;
}
