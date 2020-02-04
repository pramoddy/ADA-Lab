#include<stdio.h>
#include<stdlib.h>
void main()
{
   int a[20],n,k,i,p,b[10],c=0;
   printf("Enter the number of test casess\n");
   scanf("%d",&p);
   while(p!=0)
   {
      printf("Enter the size of array and key element\n");
      scanf("%d%d",&n,&k);
      printf("Enter the value %d\n",n);
      for(i=0;i<n;i++){
         scanf("%d",&a[i]);
         }
      for(i=0;i<n;i++)
      {
         if(a[i]==k)
         {
         b[c]=1;
         break;
         }
         else 
         b[c]=-1;       
       }
       c++;
       p--;  
   }
   for(i=0;i<c;i++)
   printf("The %d array result is : %d\n",i,b[i]);
   
   
}
