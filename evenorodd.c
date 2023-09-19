#include<stdio.h>
int main()
{
int num,rem;
printf("Enter the number:");
scanf("%d",&num);
rem=num%2;
if(rem==0)
{
    printf("%d is even",num);
}
else
{
    printf("%d is odd",num);
}
}
