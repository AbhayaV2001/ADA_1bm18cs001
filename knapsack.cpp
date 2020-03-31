//Implement 0/1 Knapsack problem using dynamic programming.

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j;
	cout<<"Enter the number of items \n";
	cin>>n;
	cout<<"Enter the capacity of the knapsack \n";
	cin>>m;
	int v[n+1][m+1];     //matrix array
	int w[n+1];	//weights array	
	int p[n+1],x[n+1];	//profit and x array
	w[0]=0;
	p[0]=0;
	cout<<"Enter the weights of the items\n";
	for(i=1;i<=n;i++)
		cin>>w[i];
	cout<<"Enter the profits of these items\n";
	for(i=1;i<=n;i++)
		cin>>p[i];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			if(i==0 || j==0)
				v[i][j]=0;
			else if(w[i]>j)
				v[i][j]=v[i-1][j];
			else 
				v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
		}
	}
	for(i=0;i<=n;i++)
		x[i]=0;
	i=n;
	j=m;
	while(i!=0 && j!=0)
	{
		if(v[i][j] != v[i-1][j])
		{
			x[i]=1;
			j=j-w[i];
		}
		i--;
	} 
	for(i=1;i<=n;i++)
	{
		if(x[i]==1)
			cout<<"Object "<<i<<"is selected\n";
		else
			cout<<"Object "<<i<<"is not selected\n";
	}	
	return 0;
}
/*
Enter the number of items
4
Enter the capacity of the knapsack
5
Enter the weights of the items
2
1
3
2
Enter the profits of these items
12
15
25
10
Object 1is not selected
Object 2is selected
Object 3is selected
Object 4is not selected
*/