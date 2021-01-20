//#include <bits/stdc++.h>
#include <malloc.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
  
//using namespace std;

char* stack;
int top = -1;
void push(char ele){ stack[++top] = ele; }
char pop() { return stack[top--];} // function returns 1

int isPal(char str[])
{
	int len = strlen(str);
	
	// allocating the memory for the stack
	stack = (char*)malloc(len * sizeof(char));
	// finding the mid
	int i, mid = len/2;
	
	for(i = 0; i < mid; i++)
	{ push(str[i]); }
	// Checking if the length of the string is odd , if odd then neglect the middle character
	if( len % 2 != 0){ i++ ;}
	
	// while not the end of the string
	while (str[i] != '\0')
	{	char ele = pop(); 
		
		// If the characters differ then the given string is not a palindrome
		if (ele != str[i]) return 0;
		i++;
	}
	
	return 1;
}

signed main()
{
	
	char str[1000];
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		if(isPal(str)){printf( "Yes! It is Palindrome!\n"); }
		else { printf("Sorry! It is not Palindrome!\n");}
		
	}	
	
	
	
}
