#include<bits/stdc++.h>
using namespace std;
int bsearch(int a[], int l, int h, int key);
int main()
{
	int a[20],i,j,n,r,key,temp,pos,pivot;
	cout<<"Enter the number of elements:\n";
	cin>>n;
	cout<<"Enter the elements:\n";	
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the key:\n";
	cin>>key;
	cout<<"Enter the number of times to rotate:\n";     //rotate the array r no of times
	cin>>r;
	for(i=0;i<r;i++)
	{
		temp = a[n-1];
		for(j=n-2;j>=0;j--)
			a[j+1] = a[j];
		a[0] = temp;
	}
	cout<<"\nRotated array:\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	pivot = r-1;                                       //do binary search on the rotated array
	if(key>a[0])
		pos = bsearch(a,1,pivot,key);
	else if(key<a[0])
		pos = bsearch(a,pivot+1,n-1,key);
	else
		pos = 0;
	if(pos!=-1)
		cout<<"The key element:"<<key<<" found at position: "<<pos<<"\n";
	else
		cout<<"The key element:"<<key<<" is not found in the array\n";
	return 0;
}
int bsearch(int a[], int l, int h, int key)
{
	int mid;
	if(l<=h)
	{
		mid = (l+h)/2;
		if(a[mid]==key)
			return mid;
		else if(a[mid]<key)
			return bsearch(a,mid+1,h,key);
		else 
			return bsearch(a,l,mid-1,key);
	}
	return -1;
}
