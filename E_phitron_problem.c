#include<stdio.h>
#include<limits.h>
int main()
{
       
       int num;
       scanf("%d",&num);
       int a,max=INT_MIN;

       for (int i = 1; i <=num; i++)
       {
          scanf("%d",&a);

          if (a>max)
          {
           max =a;
          }
          
       }
       printf("%d",a);


    
    return 0;
}