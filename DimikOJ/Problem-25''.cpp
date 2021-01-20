#include<iostream>
#include<unordered_map>
#include<vector>
#define pi 3.1416
#define eif else if
#define ll long long
#define push push_back
#define pop pop_back
#define r0 return 0
using namespace std;
long long T,i;
long long a,b,gcd,lcm;
int main()
{
	
	cin>>T;
	//vector < <int , int> > v; it will good practice .....
	//unordered_map<int , vector<int>>v;

	while(T--)
	{
	
	//v.push(make_pair(arr[i], arr1[i]) );
	cin >> a >> b;
	
	
	if(a > b ) swap(a,b);
    gcd = b;
	while(b % a != 0)
	{
			b += gcd;
	}	
	cout<<"LCM = "<<b<<'\n';
	
	//cout<<gcd<<'\n'; no need to use it .....
    }


}
  


