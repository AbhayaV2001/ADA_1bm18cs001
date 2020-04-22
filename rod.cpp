#include<bits/stdc++.h>
using namespace std;
int cutrod(vector<int> price, int n) 
{ 
	int maximum;
	vector<int> val; 
   	val.push_back(0); 
   	for(int i=1;i<=n;i++) 
   	{ 
       		maximum = 0; 
       		for(int j=0;j<i;j++) 
         		maximum = max(maximum,price[j]+val[i-j-1]); 
       		val.push_back(maximum); 
   	} 
     	return val[n]; 
} 
int main()
{
	int n;
	cout<<"Enter the length of the rod\n";
	cin>>n;
	vector<int> price(n);
	cout<<"Enter the price of each piece\n";
	for(int i=0;i<n;i++)
		cin>>price[i];
	cout<<"\nThe maximum obtainable value = "<<cutrod(price,n)<<"\n";
	return 0;
}

/*Output:
Enter the length of the rod
8
Enter the price of each piece
1 5 8 9 10 17 17 20

The maximum obtainable value = 22
*/