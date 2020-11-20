#include<stdio.h>
int main()
{
 int a,i,j,sum=0;
 while(1)
 {
    scanf("%d",&a);
    if(a==0)
    {
        goto m;
    }
    else if(a%2==0)
    {
     for(i=1,j=a;i<=5;i++,j=j+2)
    {
        sum=sum+j;
    }
    }
    else if(a%2!=0)
    {
       for(i=1,j=a+1;i<=5;i++,j=j+2)
    {
        sum=sum+j;
    }
    }
    printf("%d\n",sum);
    sum=0;
 }
 m:
  return 0;
  }
