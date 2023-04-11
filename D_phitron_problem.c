#include<stdio.h>
int main()
{
    //EOF
     int num;
      while (scanf("%d",&num) != EOF)
      {
        if (num==1999)
        {
            printf("Correct");
            break;
        }else{

            printf("Wrong");
        }
        
      }
      
     
    
    return 0;
}