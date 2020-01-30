import java.util.*;
 class bsearch
{
	int a[],k,n,t,end;
	Scanner in=new Scanner(System.in);
	public void input()
	{
		t=in.nextInt();
		for(int i=0;i<t;i++)
		{
			n=in.nextInt();
			k=in.nextInt();
			for(int j=0;j<n;j++)
			{
				a=new int[n];
				a[j]=in.nextInt();
			}
			end=n-1;
			binarySearch(a,0,end,k);
		}
	}
	public void binarySearch(int arr[], int first, int last, int key)
	{  
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
				break;  
	      		}
			else
			{  
		 		last = mid - 1;  
	      		}  
	      		mid = (first + last)/2;  
	   	  
	   		if ( first > last ){
	      		System.out.println("-1");} 
		} 
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

