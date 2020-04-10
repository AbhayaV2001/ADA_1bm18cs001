#include<bits/stdc++.h>
using namespace std;
void mincoins(int n);
int main()
{
	int a;
	cout<<"Enter the amount:\n";
	cin>>a;
	if(a>0)
	{
		cout<<"\nFollowing are the coins exchanged for: "<<a<<"\n";
		mincoins(a);
	}
	else
		cout<<"\nInvalid amount, terminating program";
	cout<<endl;
	return 0;
}
void mincoins(int a)
{
	int denom[] = {1,2,5,10,20,50,100,200,500,2000};
	int n = (int)sizeof(denom)/sizeof(denom[0]);	
	int coins[n],i,c = 0;
	for(i=n-1;i>=0;i--)
	{
		while(a>=denom[i])
		{
			a -= denom[i];
			coins[c++] = denom[i];
		}
	}
	
	for(i=0;i<c;i++)
		cout<<coins[i]<<" ";
	cout<<"\n\nThe minimum number of coins is\n";
	cout<<c;
}

/*Output:
Enter the amount:
4533

Following are the coins exchanged for: 4533
2000 2000 500 20 10 2 1

The minimum number of coins is
7
*/