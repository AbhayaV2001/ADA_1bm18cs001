#include<bits/stdc++.h>
using namespace std;

int a[30][30],visited[30],n,totwt=0,c=0;

void prim(int v)
{
	
	int it,jt;	
	visited[v]=1;
	int min=10000000;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(visited[i]==1 && visited[j]==0)
			{
				if(a[i][j]<min)
				{
					min=a[i][j];
					it=i;
					jt=j;
				}
			}
		}
	}
	
	totwt=totwt+a[it][jt];
	cout<<it<<" to "<<jt<<"\t "<<a[it][jt]<<endl;
	c++;
	visited[jt]=1;
	if(c==n-1)
		return;
	prim(jt);
}

int main()
{
	
	cout<<"Enter the no. of vertices"<<endl;
	cin>>n;
	
	cout<<"Enter the weighted matrix ( enter 10000 for infinity)"<<endl;
	for(int i=1;i<=n;i++)
	{
		visited[i]=0;
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			
		}
	}
	cout<<"\nMinimum spanning tree is"<<endl;
	cout<<"Edges \t Weights"<<endl;
	prim(1);
	cout<<"\nMinimum cost = "<<totwt<<endl;
	return 0;
}
/*
Enter the no. of vertices
5
Enter the weighted matrix ( enter 10000 for infinity)
0 30 20 10000 10000 10000
10 0 10000 15 20 25
10 10000 0 10000 15 10000
10000 25 10000 0 25 10
10000 30 15 15 0 35

Minimum spanning tree is
Edges    Weights
1 to 3   20
3 to 5   0
5 to 2   0
5 to 4   10

Minimum cost = 30
*/