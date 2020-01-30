import java.util.*;
 class bsearch
{
	int a[],k,n,t,end;
	Scanner in=new Scanner(System.in);
	void input()
	{
		t=in.nextInt();
		for(int i=0;i<t;i++)
		{
			n=in.nextInt();
			k=in.nextInt();
			a=new int[n];
			for(int j=0;j<n;j++)
			{
				a[j]=in.nextInt();
			}
			end=a.length-1;
			binarySearch(a,0,end,k);
		}
	}
	void binarySearch(int arr[], int first, int last, int key)
	{  	int flag=0;
	   	int mid = (first + last)/2;  
	   	while( first <= last )
		{  
	      		if ( arr[mid] < key )
			{  
				first = mid + 1;     
	      		}
			else if ( arr[mid] == key )
			{  
				System.out.println("1"); 
				flag=1; 
				break;  
	      		}
			else
			{  
		 		last = mid - 1;  
	      		}  
	      		mid = (first + last)/2;  
	   	 }
	   		if ( flag==0){
	      		System.out.println("-1");} 
		} 
   	 
}
class Assign1
{
	public static void main(String  args[])
	{
		bsearch ob=new bsearch();
		ob.input();
	}
}
/*2
5 6
1 2 4 5 6
1
5 2
1 3 4 6 7
-1
*/

