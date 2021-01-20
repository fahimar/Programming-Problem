#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define FastIO          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
int main()
{
	FastIO;
	
	ull t; cin >> t;
	string s;
	
	cin.ignore();
	while(t--)
	{
		
    cin >> s;
	
	ull sl = s.length();//sizeof(s)/sizeof(s[0]);
	
	for(ull i = 0;i < sl;i++)
	{
		
		if(s[i] == 'L'){  s[i] = s[i-1]; }
		else if(s[i] == 'R'){  s[i] = s[i+1]; }
		 
		
		
		
	} 
	cout<<s<<'\n';
	
	}return 0;
}

