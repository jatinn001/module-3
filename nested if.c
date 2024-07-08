#include<stdio.h>
main()
{
      int num1,num2,num3;
      printf(" enter number 1 : ");
      scanf("%d",&num1);
       printf(" enter number 2 : ");
      scanf("%d",&num2);
       printf(" enter number 3 : ");
      scanf("%d",&num3);
      if(num1>num2)
      {
                   if(num1>num3)
                  { printf("%d\nnum1 i the greatest number",num1);}
                       else
                       { printf("%d\n is the greatest number",num3);}
                       }
                       else if  (num2>num1)
                       { if(num2>num3)
                       {printf("%d\n i the greatest number",num2);}
                       else{
                            printf("%d\n is the greatest number",num3);}
                            else
                            {
                                 printf("%d\n is the greatet number ",num1);} 
                                 }
                             return 0;
       }
                             
                                        
                                          
                   
      
