#include<bits/stdc++.h>
using namespace std;

void scanning(int T , int *arr)
{
	for(int i = 0; i < T; i++)
	{
	cin>>arr[i];
	}
	
	
}
int main()
{
	int n,T;
	cin >> n;
	while(n--)
	{
		cin>>T;
		 // / sizeof(arr[0]);
		 int arr[T];
		scanning(T,&arr[0]);
		for(int i = 0;i < T; i += 2)
		{
			 cout<<arr[i];
			
		  if(i != (T-1) && i != (T-2))
		  {
			 
			  cout<<" ";
		  }
			 	
	
	    }
	      	cout<<'\n';
    }
	return 0;
	
}
