#include<bits/stdc++.h>
using namespace std;
bool perfect_Sqrt(int S)
{
	
	 //double sr = sqrt(S);
	
	//return ((sr - floor(sr)) == 0);
	for( int i = 1;i*i <= S; i++){
		
		if((S % i == 0) && (S / i == i)){
				return true;
			}
		
		}
		return false;
	
	}
int main()
{
	int T,n;
	cin >> T;
	
	while(T--)
	{
		cin>>n;
		if(perfect_Sqrt(n)){
			
			cout << "YES"<<'\n';
			}
		else 
			cout << "NO"<<'\n';
		
		}
	return 0;
	
	}
