#include <iostream>       
#include <string>        
using namespace std;
int main ()
{
	int n;
	cin>>n;
	while(n--){
  string str; cin >> str;
  string str2; cin >> str2;

  size_t found = str.find(str2);
  if (found!=string::npos)
    { cout << found << '\n'; }
  }
  return 0;
}
