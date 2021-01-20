#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int T;
	string s;
	cin >> T;
	cin.ignore();
	
	while(T--)
	{
		//string word;
		getline(cin,s);
		for(int j=0; j <= s.length() - 1; j++)
		{
			//word += s[j];
			cout << s[j] ;
			
		}
		
		cout<< '\n';
	}
		
		return 0;
	
}
