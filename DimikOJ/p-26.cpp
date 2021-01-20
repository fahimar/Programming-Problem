#include<bits/stdc++.h>

using namespace std;

#define pi 3.1416
#define eif else if
#define ll long long
#define push push_back
#define pop pop_back
#define r0 return 0

int Intscan(){int x;cin>>x;return x;}
double din(){double x;cin>>x;return x;}
string Str(){string x;getline(cin,x);return x;}

#define Int Intscan()
#define din din()
#define Str Str()
int lm(double x){
    int count=0;
    while(x > 1.00)
		
		{
		   x /= 2.00;
		   ++count;	
			}
    
    return count;
}
int main()
{
    int a=Int;
    while(a--)
    {
		double x;
		cin>>x;
		
		cout << lm(x) <<" days"<<'\n';
		
    }
    r0;
}
	

