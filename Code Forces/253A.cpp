#include<bits/stdc++.h>
using namespace std;
int mian()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	
	
	int boy,girl;
	
	cin>>boy>>girl;
	
	if(girl>boy)
	{
		cout << "G";
		girl--;
		while(boy+girl>0)
		{
			if(boy>0)
				{
					cout<<"B";
					boy--;
				}
				if(girl>0)
				{
					cout<<"G";
					girl--;
				}
		}
		
	}
	else
	{
		
		cout<<"B";
		boy--;
		while(boy+girl > 0)
		{
			if(girl>0)
				{
					cout<<"G";
					girl--;
				}
				if(boy>0)
				{
					cout<<"B";
					boy--;
				}
			
			
		}
		
		
		
	}
	
	return 0;
}
