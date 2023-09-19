#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int root_value=sqrt(n);
    root_value=root_value*root_value;
    if(root_value==n)
    {
        printf("entered number is perfect square");
    }
    else{
         printf("entered number is not  perfect square");
    }
}
