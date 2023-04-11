#include<stdio.h>
int main()
{

 int num;
 scanf("%d",&num);

 for (int i=1; i<=num; i++)
 {
   if (i%2==0)
   {
    printf("%d\n",i);
   }else if (i==1)
   {
    printf("-1\n");
   }
   
 }
   
   return 0;
}
