/* 2.a) Implement recursive binary search and linear search and determine the time required to search an element 
Repeate the experiment with different values of N   and plot a graph of the time taken varsur N */

#include<stdio.h>
#include<stdlib.h>
int linear(int c[20],int k,int n);
	int i;
	//recursion binarisearch
	int binary_search(int b[20],int high,int key,int low,int mid)
{
	mid=(low+high)/2;
	if(b[mid]==key)	
	{ printf("Sucess..");
	}
	else if(b[mid]<key)
	return binary_search(b,high,key,low=mid+1,mid);
	
	else
	return binary_search(b,high=mid-1,key,low,mid);
}

	
int main()
{
	int a[20],key,ky,ch,n,low,mid,high;
	printf("Entre 1:binary and 2:linear seacrch\n");
	scanf("%d",&ch);
			printf("Enter the value to store and key value\n");
			scanf("%d%d",&n,&key);
			printf("Enter th element one by one\n");
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
			if(ch==1)
			binary_search(a,n,key,low,mid);
			else
			linear(a,key,n);
			}
int linear(int c[20],int k,int n)
{	
	while(n-1!=0)
	{
		if(c[i]==k){
		printf("Sucess..\n");
		return k;
		}
		else if(c[i]!=k)
			{	i++;
				return linear(c,k,n);			
			}
			n=n-1;
		}
		
}




