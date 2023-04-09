#include<stdio.h>
int main()
{

     char a;
     scanf("%c",&a);

     if (a>='a' && a<='z')
     {
        printf("ALPHA\nIS SMALL");
     }else if (a>='A' && a<='Z')
     {
        printf("ALPHA\nIS CAPITAL");
     }else
     {
        printf("IS DIGIT");
     }
     
     

    
    return 0;
}