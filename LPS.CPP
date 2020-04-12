#include<stdio.h>
#include<conio.h>
#include<string.h>
char a[10][10],n,p,i,temp,j,l,str[20],s;
int  call(int m,int n)
{
	while(m<n)
	{
		if(str[m]==str[n])
		{
			m++;
			n--;
		}
		else
		return 0;
	}
	if(str[m]==str[n])
	{
	return 1;
	}
	else
	{
	}
	return 0;
}
void main()
{

	int len;
	clrscr();
	printf("Enter the string\n");
	scanf("%s",str);
	len=strlen(str);
	printf("The lenght : %d\n",len);
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			a[i][j]=0;
		}
	}
	for(i=0;i<len;i++)
	{
		a[i][i]=1;
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<len-i;j++)
		{
			temp=call(i,j);
			a[j][i]=temp;
		}
	}
	      /*
	      l=len-i;
		p=i;
		for(j=0;j<l;j++)
		{
		s=j;
			while(1)
			{
				if(str[s]==str[p] && s<p)
				{
					s++;
					p--;
				}
				else if(str[s]==str[p] && (s==p || s==p-1))
				{
					a[j][i]=1;
				}
				a[j][i]=0;
				break;
			}
		}
	}       */
	printf("The array is :\n");
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	getch();
}