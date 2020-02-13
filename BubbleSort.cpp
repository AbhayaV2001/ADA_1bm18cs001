#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cout<<"Enter the number of elements:"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the array elements:"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	 clock_t time_req;
   	time_req = clock();
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{	t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	time_req=clock()-time_req;
	cout<<"Sorted array:"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	double time_taken = ((double)time_req)/CLOCKS_PER_SEC; // calculate the elapsed time
   	cout << "The program took "<< fixed<<setprecision(10)<<time_taken <<" seconds to execute\n";	
	return 0;
}
