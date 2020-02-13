#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cout<<"Enter the number of elements in the array \n";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,greater<int>());
	cout<<"Enter the value of k:";
	cin>>k;
	cout<<"K largest elements are\n";
	for(int i=0;i<k;i++)
		cout<<a[i]<<endl;
	return 0;
}
