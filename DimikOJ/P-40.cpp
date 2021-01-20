#include <math.h> 
#include <iostream> 
//#include <boost/format.hpp>
using namespace std; 
class gfg 
{ 
public : 
long long sum(int x, int n) 
{ 
    long long i, total = 1; 
    for (i = 1; i <= n; i++) 
        total = total +  (pow(x, i)); 
    return total; 
} 
}; 


signed main() 
{ 
    gfg g; 
    int t;
    long long x ,n;
    cin >> t;
    while(t--){ 
    cin >> x>>n; 
    
    
    std::cout <<"Result = " <<g.sum(x,n)<<'\n';} 
    return 0; 
} 
