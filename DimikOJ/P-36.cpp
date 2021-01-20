#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	
	cin>>T;
	
	while(T--)
	{
		long long N,rev=0,rem;
		cin>>N;
		
		
		while(N != 0){
			
		rem = N % 10;
		rev = rev * 10 + rem;
		N /= 10;
			/*c = N%10;
			N = N/10;
			c = c*100+(N%10)*10+(N/10)%10;*/
	    }
		cout<<rev<<'\n';
		
	}
	
	return 0;
	
}
