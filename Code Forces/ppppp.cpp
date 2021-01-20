#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#define ll long long
#define ar array

ll solve() {
//srand() time(0);
ll n,tmp,reverse,rem,num,k;
cin >> n;
for(num=1;num<=n;num++)
{
tmp = num;
reverse = 0;
while(tmp)
{
rem = tmp % 10;
tmp = tmp / 10;
reverse = reverse*10 + rem;
}
if(num==reverse){
//num = RAND_MAX; 
k = num;

}

}
return k;

//return 0;
}

int main() {
ios::sync_with_stdio(0);
cin.tie(0);

/*int t;
cin >> t;
while(t--)*/

      cout << solve();
}
