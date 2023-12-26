#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false),cin.tie(nullptr);
using namespace std;

void sieveOfEratosthenes(int limit, vector<int>& primes) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= limit; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

int main(){

  int t=0;
  cin >> t;
  while(t--){
	  char s[4];
	  cin >> s;
	  
	  if((s[0]=='Y'||s[0]=='y')&&(s[1]=='E'||s[1]=='e')&&(s[2]=='S'||s[2]=='s'))   
      {
		  cout << "YES\n";}
		  else{cout << "NO\n";} 
       
  }

  return 0;
}
