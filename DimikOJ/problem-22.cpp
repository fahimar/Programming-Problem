#include<bits/stdc++.h>
using namespace std;
int is_prime(int X);
int main()
{
	int T,count;
	
	int init=0, end=0;
	
	cin >> T;
	while(T--)
	{
		
		cin >> init >> end;
		
		for(int j = init; j <= end; j++)
		{
			if(is_prime(j))
			{
				count ++;
			
			}
					
		}
		cout << count << '\n';	count=0;
	}
		return 0;	
}
int is_prime(int X)
{
	
		if (X < 2){ return 0;}
			
		else if(X % 2 == 0 && X > 2)
		{
	    	return 0;	
		}
		else
		{
			for(int i=3; i <= sqrt(X) ; i +=2) // good trick for time complixity **
			{
				if(X % i == 0)
				{	return 0 ; }
			}		
		}	
			//i++;
	return 1;
}
	


