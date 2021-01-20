#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define ull unsigned long long 

using namespace std;

int main()
{
	
	int t; cin >> t;
	ull n;
	// bool isPrime = true; instead ----
	/*bool prime[n+1];
	memset(prime, true, sizeof(prime));
	*/
	bool prime = true;
	
	while(t--)
	{
		
     cin >> n;
	 
	 if(n % 2 ==0 && n != 2)
	 { cout<<n<<" is not a prime"<<'\n'; continue;}
	  ull r = sqrt(n);
	  for(int i = 3; i <= r; i+=2){if(n%i==0){	 prime = false; break;} }
			 
	  if(prime)
	  {cout << n << " is a prime"<<'\n';}
       else {cout << n << " is not a prime"<<'\n';}
	
	}
	
	
	return 0;
	
}
