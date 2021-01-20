#include <iostream>
#include <iomanip>
using namespace std;


int main()
{  
   int t,n;
  cin >> t;
	while(t--){
	cin >> n;
	//if(n == 1) { cout << n <<'\n';}
   for(int i=n; i >= 0; i--)
   {
 
      if(i == 0) { cout << "1" ;}
      else if(i == 1) { cout << "2 + " ;}
      else{
         cout<< "2^" << i << " + " ;
	 }

   }
   cout << '\n';

	//sum = 0;	
}
	
}
