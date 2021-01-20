#include<bits/stdc++.h>
using namespace std;
void checkinput(char a)
{
	if((a>=65 && a <= 90))
	{
		cout << "Uppercase Character" <<'\n';
	}
	else if((a>=97 && a <= 122))
	{
		cout <<"Lowercase Character"<<'\n';
		}
	else if((a>=48 && a <= 57))
	{
		cout << "Numerical Digit"<<'\n';
		}
	else
	 { cout << "Special Character"<<'\n';}
	}
int main()
{
	int N;char a;
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		cin >> a;checkinput(a);
		}
		
		
	}
