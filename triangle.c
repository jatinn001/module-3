#include<stdio.h>
main()
{
	int ang1,ang2,ang3,sum;
	
	printf("enter the all angles :");
	scanf("%d%d%d,&ang1,&ang2,&ang3");

 sum=ang1+ang2+ang3;
 
 
 if(sum==180)
 {
 	printf("triangle is valid ");
 	
 }
 else 
 {
 	printf("triangle is not valid ");
 	
 }
}
