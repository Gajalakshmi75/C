#include<stdio.h>
int gcd(a,b)
{
    if(a==0)
    {
        return b;
    }
    else if(b==0)
    {
        return a;
    }
    else if(a==b)
    {
        return a;
    }
    else if(a>b)
    {
        return gcd(a-b,b);
    }
    else if(b>a)
    {
        return gcd(a,b-a);
    }

}
int main()
{
    int a,b,val;
    printf("enter two numbers:");
    scanf("%d \n %d",&a,&b);
    val=gcd(a,b);
    printf("gcd of %d and %d is %d",a,b,val);
    return 0;
}
