#include <stdio.h>

int main()  
{
    int rollno;
    char name[50];
    int s1,s2,s3,s4,s5;
    float per;

    printf("\n\n\t enter a roll no:");
    scanf("%d",&rollno);
    printf("\n\n\t enter student name:");
    scanf("%s",&name);
    printf("\n\n\t enter the marks of subject 1:");
    scanf("%d",&s1);
    printf("\n\n\t enter the marks of suject 2:");
    scanf("%d",&s2);
    printf("\n\n\t enter the marks of suject 3:");
    scanf("%d",&s3);
    printf("\n\n\t enter the marks of suject 4:");
    scanf("%d",&s4);
    printf("\n\n\t enter the marks of suject 5:");
    scanf("%d",&s5);
    printf("\n\n\t-------------------------------");
    

    per=(s1+s2+s3+s4+s5)/5;
    
    printf("\n\n\t----------------------");
    printf("roll no :%d",rollno);
    printf("name : %s",name);
    printf("\n\n\t-------------------------------");
    printf("\n marks1: %d",s1);
    printf("\n marks2: %d",s2);
    printf("\n marks3: %d",s3);
    printf("\n marks4: %d",s4);
    printf("\n marks5: %d",s5);
    printf("\n percentage : %f",per);
    if (per>=70)
    printf("\n grade is A+");
    else if(per>=60)
    printf("\n grade is A");
    else if(per>=50)
    printf("\n grade is B");
     else if(per>=40)
     printf("\n grade is c");
     else 
     printf("\n\n\t grade: fail");
}
