#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	int n,i,k,ele,l,h,mid,count,fpos,lpos;
	cout<<"Enter the number of elements in array"<<endl;
	cin>>n;
	int a[n],temp;
	l = 0;
	h = n-1;
	cout<<"Enter the elements of array\n";
	for(int j=0;j<n;j++)
		cin>>a[j];
	sort(a,a+n);
	cout<<"Enter the element to be searched"<<endl;
	cin>>ele;
	while(l<=h)
	{
		mid = (int)(l+h)/2;
		if(a[mid]==ele)
		{	
			i = mid;
			k = mid;			
			while(a[i]==ele)
			{			
				fpos = i;
				i--;
			}
			while(a[k]==ele)
			{
				lpos = k;
				k++;
			}
			cout<<"The first occurrence of the key is at "<<fpos<<" and last occurrence is at "<<lpos<<endl;
			count = lpos-fpos+1;
			cout<<"The count is "<<count<<endl;		
			break;
		}
		else if(a[mid]<ele)
			l = mid+1;
		else 
			h = mid-1;
	}
	if(l>h)
		cout<<"Element is not present"<<endl;
	return 0;
}
