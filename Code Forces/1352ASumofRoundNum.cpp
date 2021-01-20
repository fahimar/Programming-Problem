#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array
void solve()
{
	int n;
	cin >> n;
	vector<int> ans;
	int p=1;
	while(n){
			if(n%10){
				ans.push_back(n%10*p);		}
				n /= 10;
				p*=10;}
		

		cout << ans.size()<<"\n";
		for(int a : ans)
		{
			cout << a << " "<<'\n';
			}
	
	
	
}
	void raff(){
		/*
		int n,arr[6],k=0,p=1,i;
		cin>>n;
		//for(;n>0;p*=10,n/10)
		{
			if((arr[k]=(n%10)*p)>0)
			k++;
			cout<<k;
		}*//*
		while(n>0)
		{
			arr[k]=(n%10)*p;
			p *= 10;
			if(arr[k]>0)k++;
			n/=10;
			
		}
		cout<<k<<'\n';
		for(i=0;i<k;i++)
		cout<<arr[i]<<" "<<'\n';
		
		*/
		
		} 

int main()
{	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
		
		
	}
	
	return 0;
}
