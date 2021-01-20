#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N,sum = 0, a;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> a;
		for(int j = 1; j < a-1;j++)
		{
			int rem = a % j;
			
			if(rem == 0)
			{
				sum = sum + j;
			}
			
			
		}
		if(sum == a)
		 cout << "YES, "<<a<<" is a perfect number!"<<'\n';
		else
			cout << "NO, "<<a<<" is not a perfect number!"<<'\n';
		sum = 0;
	}
		
		return 0;
}
