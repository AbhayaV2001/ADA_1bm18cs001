#include<bits/stdc++.h>
using namespace std;
int find(int i);
void unionv(int i, int j);
void kruksals(int a[][30], int n);  
int parent[30]; 
int main() 
{
	int a[30][30],n,i,j;
	cout<<"Enter the number of vertices\n";
	cin>>n;
	cout<<"Enter the weight matrix of the graph (10000 if there is no edge)\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cin>>a[i][j];
	}
	cout<<"\nThe Minimum Spanning Tree comprises\n";
	cout<<"Edges\tWeight\n";
	kruksals(a,n);
	return 0; 
} 
int find(int i) 
{ 
	while (parent[i]!=i) 
	        i = parent[i]; 
	return i; 
} 
void unionv(int i, int j) 
{ 
	int a = find(i); 
	int b = find(j); 
   	parent[a] = b; 
} 
void kruksals(int a[][30], int n) 
{ 
	int mincost = 0,c = 0,i,j; 
	for(i=0;i<n;i++) 
        	parent[i] = i; 
	while(c<n-1) 
	{ 
	        int min = 10000,it = -1,jt = -1; 
	        for(i=0;i<n;i++) 
		{ 
	        	for(j=0;j<n;j++) 
			{ 
		                if(find(i)!=find(j) && a[i][j]<min)
				{ 
                    			min = a[i][j]; 
                    			it = i; 
                    			jt = j; 
                		} 
            		} 
        	} 
  		unionv(it,jt);
		c++; 
        	cout<<"("<<it+1<<","<<jt+1<<")\t"<<min<<"\n";  
        	mincost += min; 
    	} 
    	cout<<"\nThe total weight of MST = "<<mincost<<"\n"; 
}
/*
Enter the number of vertices
4
Enter the weight matrix of the graph (10000 if there is no edge)
0 10 10000 6
10 0 12 10000
10000 12 0 8
6 10000 8 0

The Minimum Spanning Tree comprises
Edges   Weight
(1,4)   6
(3,4)   8
(1,2)   10

The total weight of MST = 24
*/