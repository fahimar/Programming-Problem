#include<bits/stdc++.h>
using namespace std;

long long unsigned int countOccurences(string a,char b)
{
	cin.ignore();

		int c = 0;
		for(long long unsigned int i = 0; i < a.size(); i++)
		{
			if(a[i] == b)
			c ++;

        }
        return c;
}

int main()
{
		string first_line;
		char second_line;
		
		int t;
		cin >> t;
		cin.ignore();
		while(t--)
		{
			
			getline(cin,first_line);
			cin>>second_line;  
		
		int count  = countOccurences(first_line,second_line);
           if (count == 0){
            cout << "'" << second_line << "' is not present" << '\n';}
        else{
            cout << "Occurrence of '" << second_line << "' in '" << first_line << "' = " << count << '\n';
	}
	}
	return 0;
}
