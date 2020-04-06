#include<stdio.h>
#include<conio.h>
int a[10],i,n,lb=0,ub=0,temp;
int partition(int,int,int);
int quicksort(int b[10],int l,int u)
{
	int loc;
	if(l<u)
	{
		loc=partition(b,l,u);
		quicksort(b,l,loc-1);
		quicksort(b,loc+1,u);
	}
	return 0;
}

void main()
{

	clrscr();
	printf("Enter the array size\n");
	scanf("%d",&n);
	ub=n;
	printf("Enter the element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(a,lb,ub);
	getch();
}
int partition(int c[20],int s,int e)
{
	int pivot,start,end;
	pivot=a[s];
	start=s;
	end=e;
	while(start<end)
	{
		while(c[start]<=pivot)
		{
			start++;
		}
		while(c[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			temp=c[start];
			c[start]=c[end];
			c[start]=temp;
		}
	}
	temp=c[s];
	c[s]=c[end];
	c[end]=temp;
	return end;
}