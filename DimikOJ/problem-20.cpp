#include <iostream>
#include <string>
#include <algorithm>

int main(){
 // std::cout << "Insert the string: ";
  int n;
  std::cin >> n;
  std::cin.ignore();
  
  for(int j=0;j<n;j++)
  {
	   int c = 0;
	  std::string str;
	 
	   std::getline(std::cin,str);
	  
	   /// count = std::count(str.begin(), str.end(), ' ');
	     //// std::cout << "Count = " << std::count(str.begin(), str.end(), ' ') <<'\n';	
			///for(std::string::iterator i = str.begin();i != str.begin(); ++i)
			for(int h = 0;str[h]; h++)
			{
				if (str[h]!=' ' && (str[h+1] == ' ' || str[h+1]=='\0'))
				{
					c++;
					}
					
				}
				
				std::cout<<"Count = "<<c<<'\n';
	   	  }
	   	 
	return 0;
}
