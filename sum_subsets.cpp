#include<bits/stdc++.h>
bool found = false;
void printsubsets(int a[], int size);
void subset_sum(int s[], int t[], int s_size, int t_size, int sum, int ite, int target_sum);
void generatesubsets(int s[], int size, int target_sum);
using namespace std;
int main()
{
   	int s[50],size,m,i;
   	cout<<"Enter the number of elements in the set:\n";
	cin>>size;
	cout<<"Enter the elements:\n";
	for(i=0;i<size;i++)
		cin>>s[i];
	cout<<"Enter the required sum required:\n";
	cin>>m;
   	generatesubsets(s,size,m);
	if(found==false)
		cout<<"\nSolution does not exist\n";
	return 0;
}
void printsubsets(int a[], int size)
{
	int i;
	cout<<"\nsubset having the required sum:\n";
	for(i=0;i<size;i++) 
	{
      		cout<<a[i]<<" ";
   	}
   	cout<<endl;
}
void subset_sum(int s[], int t[], int s_size, int t_size, int sum, int ite, int target_sum)
{
	int i;
   	if(target_sum==sum) 
	{
		printsubsets(t,t_size);
  		subset_sum(s,t,s_size,t_size-1,sum-s[ite],ite+1,target_sum);
      		found = true;
	}
   	else 
	{
		for(i=ite;i<s_size;i++) 
		{
   			t[t_size] = s[i];
         		subset_sum(s,t,s_size,t_size+1,sum+s[i],i+1,target_sum);
      		}
   	}
}
void generatesubsets(int s[], int size, int target_sum)
{
   	int* tuplet_vector = (int*)malloc(size * sizeof(int));
   	subset_sum(s,tuplet_vector,size,0,0,0,target_sum);
   	free(tuplet_vector);
}

/*Output:
1) 
	Enter the number of elements in the set:
	4
	Enter the elements:
	3 5 6 7
	Enter the required sum required:
	15

	subset having the required sum:
	3 5 7

2)	Enter the number of elements in the set:
	5
	Enter the elements:
	1 3 5 8 11
	Enter the required sum required:
	7

	Solution does not exist
3)
	Enter the number of elements in the set:
	6
	Enter the elements:
	1 2 3 5 8 11
	Enter the required sum required:
	6

	subset having the required sum:
	1 2 3

	subset having the required sum:
	1 5
*/
