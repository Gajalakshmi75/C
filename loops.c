#include<stdio.h>
void print(int n);
main()
{
    int n;
    printf("enter n value:");
    scanf("%d",&n);
    print(n);
}
void print(int n)
{
    if(n>=1)
    {
        print(n-1);
        printf("%d",n);
    }
}
