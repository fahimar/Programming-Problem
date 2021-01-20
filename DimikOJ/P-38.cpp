#include<bits/stdc++.h>
using namespace std;

signed main()
{
	double n,t,  s;
	cin>>n;
	while(n--)
	{
		cin >> t >> s;
		//double p =(2*t-1);
	//	cout << p <<'\n';
	
	// upper pattern
		for(double i=1;i <= t;i++)
		{
		//	cout << round(p)/2<<'\n';
			for(double j = 1;j <= i; j++)
			{
				//cout<<s;
				
				if(i == j)
					cout<< s;
				else
					cout << s << " ";
			}
			cout<<'\n';
		}
	// lower pattern
		for(double i = t - 1; i >= 1; i--)
		{
		//	cout<< round(p)/2<<'\n';
			for(double j = i; j >= 1; j--)
			{
				if(j == 1)
				 {	cout << s;}
				else 
				 {  cout << s<< " ";}
			
			
		     }
			cout <<'\n';
	    }
	
	 cout << '\n';
	
	}
		return 0;
}
