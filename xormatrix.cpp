#include<bits/stdc++.h>
void xormatrix(int n);
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number which is a multiple of 4\n";
	cin>>n;
	if(n%4==0)
		xormatrix(n);
	else
		cout<<"\nInvalid Input\n";
	return 0;
}
void xormatrix(int n)
{
	int a[n][n],x=0;
	for(int i=0;i<n/4;i++)
	{
		for(int j=0;j<n/4;j++)
		{
			for(int k=0;k<4;k++)
			{
				for(int l=0;l<4;l++)
				{
					a[i*4+k][j*4+l] = x;
					x++;
				}
			}
		}
	}
	cout<<"\nThe matrix in which the bitwise XOR of each row and column is the same is\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
/*
Enter a number which is a multiple of 4
4

The matrix in which the bitwise XOR of each row and column is the same is
0 1 2 3
4 5 6 7
8 9 10 11
12 13 14 15
*/