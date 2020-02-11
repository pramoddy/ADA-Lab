
#include<stdio.h>
int gcd(int p,int q)
{
   
    if (p == 0) 
        return (0,q); 
    return gcd(q%p, p);    
}
    
void main()
{
   int a,b,result;
   printf("Enter the first and second values\n");
   scanf("%d%d",&a,&b);
   result=gcd(a,b);
   printf("The %d and %d gcd value is %d\n",a,b,result);
   
}
