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
int lcm(int a,int b){
    if(a>b) swap(a,b);
    int c = b;
    while(b%a != 0){
        b += c;
    }
    return b;
}
int main()
{
    int a=Int;
    while(a--)
    {
		int x,y;
		cin>>x>>y;
		cout<<"LCM = "<<lcm(x,y)<<endl;
    }
    r0;
}
	
