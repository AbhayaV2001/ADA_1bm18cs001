#include<bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[], int n, int sum)
{
	if (sum == 0)
		return true;
	if (n < 0 || sum < 0)
		return false;
	bool include = subsetSum(arr, n - 1, sum - arr[n]);
	if (include)
		return true;
	bool exclude = subsetSum(arr, n - 1, sum);
	return exclude;
}

int main()
{
	int n,sum=0;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	if(sum%2==0)
	{
		if(subsetSum)
			cout<<"Can be partitioned into two subsets of equal sum"<<endl;
	}
	else
		cout<<"Cannot be partitioned into two subsets of equal sum"<<endl;
	return 0;
}

/* Output:
Enter the size of the array
3
Enter the elements of the array
1 5 6
Can be partitioned into two subsets of equal sum

Enter the size of the array
5
Enter the elements of the array
1 5 6 8 1 9
Cannot be partitioned into two subsets of equal sum
*/