#include<bits/stdc++.h>
using namespace std;


void print(vector<string> names)
{
	for(int i = 0;i < names.size();i++)
	{	cout<<names[i]<<'\n';}
		
	
	}

bool mycomp(string a, string b)
{
	return a<b;
	
	}
vector<string> alphabaticallySort(vector<string> a)
{
	//int n = a.size();
	sort(a.begin(),a.end(),mycomp);
	
	return a;
	
}

int main()
{
	int n;
	cin >> n;
	
	vector <string> names;
	string name;
	
	for(int i = 0; i < n; i++)
	{
		cin >> name;
		names.push_back(name);
		}
	names = alphabaticallySort(names);
	print(names);
	return 0;
	
}
