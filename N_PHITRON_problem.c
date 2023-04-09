#include<stdio.h>
int main()
{

     char a;
     int as;
     scanf("%c",&a);

     if (a>='a' && a<='z')
     {
        as =a-32;
        printf("%c\n",as);
     }
     else 
     {
        as =a+32;
        printf("%c\n",as);
     }
     
     

    
    return 0;
}