#include<stdio.h>
#include<conio.h>
int a[10][10],visit[10],i,j,n,start,temp,stack[10],top=0;
void main()
{
	clrscr();
	printf("Enter size of matrix\n");
	scanf("%d",&n);
	printf("Enter adjecency matrix\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}

	}
	for(i=1;i<=n;i++)
	{
		visit[i]=0;
	}
	printf("Enter the sarting node\n");
	scanf("%d",&start);
	printf("%d",start);
	//dfs
	 temp=start;
   stack[++top]=start;
   visit[start]=1;
   while(top!=0)
   {
	 for(i=1;i<=n;i++)
	 {
		if(a[temp][i]==1 &&visit[i]==0)
		{
			temp=i;
			stack[++top]=i;
			visit[i]=1;
			printf("-->%d",i);
			i=0;
		}
	 }
	 top=top-1;
	 temp=top;
   }
	getch();
}