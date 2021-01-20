#include<bits/stdc++.h>
using namespace std;


void reverseWords(string str) 
{ 
    stack<char> st; 
  
    // Traverse given string and push all characters 
    // to stack until we see a space. 
    for (long long unsigned int i = 0; i < str.length(); ++i) { 
        if (str[i] != ' ') 
           { st.push(str[i]); } 
  
        // When we see a space, we print contents 
        // of stack. 
        else { 
            while (st.empty() == false) { 
                cout << st.top(); 
                st.pop(); 
            } 
            cout << " "; 
        } 
    } 
  
   
    while (st.empty() == false) { 
        cout << st.top() ; 
        st.pop(); 
        
    } cout <<'\n';
}

int main()
{
	string str;
	int  N = 0 ;
	cin>> N;
	cin.ignore();
	while(N--){
	getline(cin,str);
	reverseWords(str);
	}
	
	return 0;
	
	}
	/*#include<stdio.h>
#include<string.h>

char reverse_word(char word[])
{
    int i, length= strlen(word);

    for(i= length-1; i>=0; i--)
    {
        printf("%c", word[i]);
    }
}

int main()
{
    int T, i, j, k;
    char S[1002], word[100];

    scanf("%d", &T);

    for(i=1; i<=T; i++)
    {
        scanf(" %[^\n]", S);

        for(j=0, k=0; j<strlen(S); j++){
            if(S[j] !=' ')
            {
                word[k] = S[j];
                k++;
            }
            else
            {
                word[k]= '\0';
                reverse_word(word);
                printf(" ");
                k=0;
            }
        }
        if(k>0)
            {
                word[k] = '\0';
                reverse_word(word);
                printf("\n");
                k=0;
            }
    }
    return 0;
}*/
	
