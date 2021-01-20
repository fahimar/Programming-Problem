#include<bits/stdc++.h>
using namespace std;
int shorting(int a[],int N)
{
	if(N == 1 || N == 0)
	return 1;
	
	if(a[N - 1] < a[N - 2])
	return 0;
	
	return shorting(a, N-1);
	
}
int main()
{
	int N,a[25];
	cin>>N;
	
	for(int j = 0 ; j < N; j++)
	{
		cin >> a[j];
		
		}
		//sort(a, a+N);
		if(shorting(a,N))
		 {
			 cout << "YES"<<'\n';
			 }
		else{
			cout << "NO"<<'\n';
			}
	
	return 0;
	}
