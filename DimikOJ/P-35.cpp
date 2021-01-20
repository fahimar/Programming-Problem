#include<bits/stdc++.h>
#define A ((dist) > (r))
using namespace std;
int main()
{
	 long double  c=0, T,a,b,i,n,X,Y,x,y,r;
	cin >> n;
	while(n--)
	{
		cin>>X>>Y>>r>>x>>y;
		//cout<<T<<'\t';
		/*if( (Y+r<y) || (X+r<x) || (Y-r > y) || (X-r>x))
		{
			cout<<"The point is not inside the circle"<<'\n';
		}
			else
			{
				cout<<"The point is inside the circle"<<'\n';
			}*/
		 long double dist = sqrt((pow((X-x),2)) + (pow((Y-y),2)) );
		if(A)
		{
			cout<<"The point is not inside the circle"<<'\n';
		}
		else
		{
			cout<<"The point is inside the circle"<<'\n';
		}
		
	}
	
	return 0;
}

