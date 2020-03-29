#include<stdio.h>
#include<conio.h>
void main()
{
	int a[20],b[20],n,i,temp,j;
	clrscr();
	printf("Enter the array size : ");
	scanf("%d",&n);
	printf("Enter the  number %d to a array\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter number %d to b array\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	//using insertion sort technique
	for(i=1;i<n;i++)
	{
	  j=i-1;
	  temp=b[i];
	  while(temp<b[j] && j>=0)
	  {
		b[j+1]=b[j];
		j--;
	  }
	  b[j+1]=temp;
	}
	//meeting allowtment
	i=0;
	temp=0;
	printf("Room Alowtement\n");
	while(i!=n)
	{
		if(a[i]<b[i] && temp<a[i])
			{
				printf("rool Alowted from %d to %d \n",a[i],b[i]);
				temp=b[i];
				i++;

			}
			else
			i++;
	}
	getch();
}