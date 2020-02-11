//WAP to binary search
#include<stdio.h>
#include<stdlib.h>
void main()
{
   int a[40],i,n,mid,high,low=0,key,p=0;
   printf("Enter the how many value to store\n");
   scanf("%d",&n);
   printf("Enter the key element\n");
   scanf("%d",&key);
   printf("Enter the %d values\n",n);
   for(i=0;i<n;i++)
   {
         scanf("%d",&a[i]);
    }
    
      high=n;
      low=0; 
     while(1)
  {
      mid=(low+high)/2;
      if(a[mid]<key){
                        high=mid+1;
      }
      else if(a[mid]>key){
                        high=mid-1;
      }
      else if(a[mid]==key){
                        printf("success.......\n");   
                        for(i=0;i<n;i++)
                        {
                          
                           if(key==a[i])
                           {
                              p=p+1;
                            }
                           
                         }
                            printf("The %d key element is exit %d times\n",key,p);
                        exit(0);
                        }
      
      printf("Unsuccesfull!!.......\n");
      exit(0);
  }   
        
        
  }      
        
        
        
        
  
