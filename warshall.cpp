#include<bits/stdc++.h>
using namespace std;
void warshall(int n, int a[][20]);
int main()
{ 
	int a[20][20],q[20],i,j,n;  
        cout<<"Enter the number of vertices\n"; 
        cin>>n; 
	cout<<"Enter the adjacency matrix of the graph\n"; 
        for(i=0;i<n;i++)
	{ 
	        for(j=0;j<n;j++)
	        	cin>>a[i][j];  
        }
	warshall(n,a);
	return 0;
}
void warshall(int n, int a[][20])
{
	int i,j,k,t[20][20];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			t[i][j] = a[i][j];
	}
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(t[i][j]!=1 && (t[i][k]==1 && t[k][j]==1))
					t[i][j]=1;
			}
		}
	}
	cout<<"\nThe path matrix of the given graph is\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout<<t[i][j]<<" ";
		cout<<endl;
	}
}
