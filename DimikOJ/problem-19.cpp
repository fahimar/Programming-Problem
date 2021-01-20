#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
	int t;
	string s;
	cin >> t;
	cin.ignore();

	while(t--)
	{
		getline(cin,s);
		int	count = 0;
		for(int j = 0;s[j]!= '\0'; j++)
		{
			 if(s[j] == ' ')
			 
				 count++;
				 			// else{ continue ;}	
		}
			
			cout << "Count = "<< count + 1<<'\n';
		
		
		}
		
	return 0;
	
	}
