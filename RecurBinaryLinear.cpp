#include<bits/stdc++.h>
using namespace std;
int a[20000],low,high,ele,pos;
int lin()
{
    if(pos<0)
    {
        return pos+1;
    }
    else if(a[pos]==ele)
    {
        return pos+1;
    }
    else
    {
        pos=pos-1;
        return lin();
    }
}
int bin()
{
    int mid=(low+high)/2;
    if(low>high)
    {
        return 0;
    }
    if(a[mid]==ele)
    {
        return mid+1;
    }
    else if(a[mid]>ele)
    {
        high=mid-1;
        return bin();
    }
    else if(a[mid]<ele)
    {
        low=mid+1;
        return bin();
    }
	return 0;
}
int main()
{
    int n,temp;
    clock_t time_req;
    
    cout<<"\nEnter the number of elements \n";
    cin>>n;
    cout<<"Enter the search element \n";
    cin>>ele;
	cout<<"Enter the elements\n";
   
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        pos=n-1;
        time_req = clock();
        temp=lin();
        time_req=clock()-time_req;
    cout<<"Element found at position "<<temp<<endl;
    double time_taken = ((double)time_req)/CLOCKS_PER_SEC; // calculate the elapsed time
   	cout << "Linear Search took "<< fixed<<setprecision(10)<<time_taken <<" seconds to execute\n";
    
	sort(a,a+n);
        low=0;
        high=n-1;
        time_req = clock();
        temp=bin();
        time_req=clock()-time_req;
    
	cout<<"Element found at position "<<temp<<endl;
     time_taken = ((double)time_req)/CLOCKS_PER_SEC; // calculate the elapsed time
   	cout << "Binary Search took "<< fixed<<setprecision(10)<<time_taken <<" seconds to execute\n";
return 0;
}


