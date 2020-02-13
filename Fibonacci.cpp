#include<bits/stdc++.h>
using namespace std;
int fib(int n);
int main()
{
	int n;
	cout<<"Enter n\n";
	cin>>n;
	cout<<"The fibonacci series term number "<<n<<" is "<<fib(n)<<endl;
	return 0;
}
int fib(int n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else if(n<0)
	{
		std::cout<<"Invalid Input";
		exit(0);
	}
	else
	{
		return (fib(n-1)+fib(n-2));
	}
}
