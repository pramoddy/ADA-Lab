#include<stdio.h>
#include<conio.h>
int a[10][10],re,i=0,n,x[10],j=0,max=0,tmp=0,weight=0,w[10],p[10];
int main()
{


	printf("Enter the size\n");
	scanf("%d",&n);
	printf("Enter the total weight\n");
	scanf("%d",&weight);
	printf("Enter the %d weights \n",n);
	for(i=1;i<=n;i++){
		scanf("%d",&w[i]);
	}
	printf("Enter the %d profit\n",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=0;i<=n;i++)
    {
        a[i][j]=0;
    }
    i=0;
    for(j=0;j<=weight;j++)
    {
        a[i][j]=0;
    }
    i=1;
    for(j=1;j<=weight;j++)
    {
        if(w[i]>j)
        {
            a[i][j]=a[i-1][j];
        }
        else
        {
            a[i][j]=p[i];
        }
    }
    for(i=2;i<=n;i++)
    {

        for(j=1;j<=weight;j++)
        {
           if(w[i]>j)
           {
               a[i][j]=a[i-1][j];
           }
           else
           {
               max=j-w[i];
               tmp=a[i-1][max];
               re=p[i]+tmp;
               if(re<a[i-1][j])
               {
                   a[i][j]=a[i-1][j];
               }
               else
               {
                   a[i][j]=re;
               }
           }
        }
    }
	 printf("The  array is \n");
	 for(i=0;i<=n;i++)
	 {
		for(j=0;j<=weight;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	 }
	 i--;
	 j--;
	 while(i!=0)
     {
         if(a[i][j]==a[i-1][j])
         {
             x[i]=0;
             i--;
         }
         else
         {
             x[i]=1;
             printf("%d\n",p[i]);
             tmp=a[i][j]-p[i];
             j=0;
             while(tmp!=a[i-1][j])
             {
                 j++;
             }
             if(tmp==a[i-1][j])
             {
                 i--;
             }
         }
     }
     printf("The weights is \n");
     for(i=1;i<=n;i++)
     {
         if(x[i]==1){
            printf("%d\t",w[i]);
         }
     }
getch();
}
