#include<bits/stdc++.h>
using namespace std;

bool sortinrev(const pair<int, int> &a, const pair<int, int> &b)
{
	return (a.first > b.first);
}
int main()
{
	
	// declaring vector of pairs
	
	vector<pair <int, int > > vect;
	// initializing 1st and 2nd element of
	// pairs with array values
	int arr[] = {5, 20, 10, 40 };
	int arr1[] = {30, 60, 20, 50};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	// Enter values in vector of pairs
	for(int i = 0; i < n; i++)
		vect.push_back( make_pair(arr[i], arr1[i]) );
	
	// Printing the original vector (before sort())
	cout << "The vector before applying sort is:\n" ;
	for(int i = 0; i < n; i++)
	{
		cout << vect[i].first << " "<<vect[i].second<<'\n';
			
	}
	// using modified sort() function to sort
	sort(vect.begin(), vect.end(), sortinrev);
	
	// Printing the sorted vector(after using sort())
	cout<< "The vector after applying sort is:\n";
	for(int i = 0; i < n; i++)
	{
	
		cout << vect[i].first << " " << vect[i].second << '\n';
	
    }
    return 0;
	}
