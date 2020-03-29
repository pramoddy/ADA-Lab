#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10],visit[10],i,j,start,q[10],n,rare=0,front=0,temp;
	clrscr();
	printf("Enter matrix size  :  \n");
	scanf("%d",&n);
	printf("Enter adjecency matrix\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++){
		visit[i]=0;
	}
	printf("Enter the starting vertex\n");
	scanf("%d",&start);
	printf("Print all BFS travelsal nodes\n");
	printf("%d",start);
	visit[start]=1;
	q[++rare]=start;
	while(front!=rare){
		temp=q[++front];
		for(i=1;i<=5;i++){
			if(a[temp][i]==1 && visit[i]==0){
				visit[i]=1;
				q[++rare]=i;
				printf("-->%d",i);
			}
		}
	}
getch();
}
