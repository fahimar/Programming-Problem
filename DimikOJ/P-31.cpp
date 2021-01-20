#include <iostream>
#include <array>

using namespace std;

constexpr int pn(int p) {
	return (1 << (p - 1)) * ((1 << p) - 1);
}

bool checkPerfectNumber(int num) {
	std::array<int, 8> primes = {2,3,5,7,13,17,19,31};
	for(int prime: primes) {
		if(pn(prime) == num) {
			return true;
		}
	}
	return false;
}

int main() {
    int N = 40000000;
    int T;
    cin>>T;
    while(T--){
    cin >> N;
    for(int i = 6; i <= N; i++) {
        if(checkPerfectNumber(i)) {
            cout << i << std::endl;
        }
    }
    if(T!=0) cout << '\n';
}
    return 0;
}
/*

 the Euclid-Euler theorem tbh.
Which is basically 2^(p-1) * (2^p - 1) is an even perfect number if (2^p - 1) is prime, and p is prime.
Need to go to 31 for the list. Because that is the first Mersenne prime which is larger than the limit of your problem.
I assumed that the spirit of the assignment was to check if a number was perfect first.
That kinda trivializes it fully.
*/

/*
 * //#include<bits/stdc++.h>
using namespace std;
bool solve(long long a)
{
	long long sum = 0;
	
		
			for(long long k = 1; k <= a; k++)
	{
		for(long long int j = 2; j*j <= k; j++){
		long long rem = k % j;
		if(rem ==  0 &&  j*j != k)
		{
			 sum = sum + j + k/j;
			  
		}
		else{ sum = sum + j;}
		j++;
	}
}
		
	
	if(sum == a && a != 1)
		return true;
		else {return false;}
	
	
	
}
int main()
{
	long long N, a;
	cin >> N;
	for(long long i = 0; i < N; i++){
		cin >> a;
	
		 if(solve(a) > a)
		 cout<< a << '\n';
		 
	}
	if(N != 0)
	cout<<'\n';
		
	return 0;	
	}
*/
