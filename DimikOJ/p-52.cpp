#include<bits/stdc++.h> 
using namespace std; 
   
int countFreq(string &pat, string &txt) 
{ 
    int M = pat.length(); 
    int N = txt.length(); 
    int res = 0; 
    cout <<" M = "<< N <<" N = "<< N<<'\n';
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) 
    {  
        /* For current index i, check for  
           pattern match */
           cout <<" M_ = "<< N <<" N_ = "<< N<<'\n';
        int j; 
        for (j = 0; j < M; j++) 
            if (txt[i+j] != pat[j]) 
                break; 
   
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1] 
        if (j == M)   
        { 
           res++; 
           j = 0; 
        } 
    } 
    return res; 
} 


int main() 
{ 
   string txt ; 
   string pat ;
   int n;
   cin >> n;
   while(n--){ 
	   cin>> txt;
	   cin>> pat;
   cout << countFreq(pat, txt)<<'\n';
   } 
   return 0; 
} 
