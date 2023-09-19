#include<stdio.h>
int main()
{
    int num,rev=0,rem,temp;
    printf("enter the number to check whether palindrome or not:");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    if(rev==num)
        printf("\n %d is palindrome number....",num);
    else
    printf("\n %d is not  palindrome number....",num);
    return 0;
}
