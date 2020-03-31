#include<bits/stdc++.h>
using namespace std;  
int max (int x, int y) { return (x > y)? x : y; } 
int lps(char *str) 
{ 
   	int n = strlen(str); 
   	int i, j, cl; 
   	int L[n][n];  					//table to store results of subproblems 
  	for (i = 0; i < n; i++)  					// Strings of length 1 are palindrome of length 1 
      		L[i][i] = 1; 
  	for (cl=2; cl<=n; cl++) 				//the lower diagonal values of table are 
         	{ 						//useless and not filled in the process 
        		for (i=0; i<n-cl+1; i++) 			//cl is length of substring 
        		{ 
            			j = i+cl-1; 
            			if (str[i] == str[j] && cl == 2) 
               				L[i][j] = 2; 
            			else if (str[i] == str[j]) 
               				L[i][j] = L[i+1][j-1] + 2; 
            			else
               				L[i][j] = max(L[i][j-1], L[i+1][j]); 
        		} 
    	} 
  	return L[0][n-1]; 
} 
int main() 
{ 
	char seq[100];
	cout<<"Enter a sequence\n";
	cin>>seq; 
    	cout<<"The length of the LPS is " << lps(seq);  
    	return 0; 
} 


/*
Enter a sequence
bacbba
The length of the LPS is 4
*/