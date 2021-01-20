#include <iostream>
#include <cstring>
#include <vector>

#define FastIO          ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
//using namespace std;

int main()
{
	//FastIO;
 std :: string str;
	int t;
	std :: cin >> t;
	std :: cin.ignore();
	std :: string vow = "";
	std :: string cons = "";
	while(t--) {
		std :: getline(std :: cin, str);
		for(int i = 0;i < str.length();i++){
			if(str[i] == ' ') {
				continue;
			}
    	 if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
			if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U') {
				vow = vow + str[i];
			}
			else {
				cons = cons + str[i];
			}
		}
		std :: cout << vow << std :: endl;
		std :: cout << cons << std :: endl;
		vow.erase();
		cons.erase();
	}
	return 0;
} 	
