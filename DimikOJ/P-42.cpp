#include <iostream>
using namespace std;
int main()
{  

int n=5;
float sum=0;

    for(int i=1; i<=n; i++){
        for(int j =n; j>0; j--){
            sum += i/j;

        }
    }
   cout<<"Sum : "<<sum;}
