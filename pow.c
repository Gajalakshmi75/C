#include<stdio.h>
int power(a,b)
{
    if(b>0)
    {
        return(a*power(a,b-1));
    }
    else{
        return 1;
    }
}
int main()
{
    int a,b,asn;
    printf("enter a base number");
    scanf("%d",&a);
    printf("\nenter exponent number:");
    scanf("%d",&b);
    asn=power(a,b);
    printf("\n\n a power b is:%d",asn);
    return 0;
}
