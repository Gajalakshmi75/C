#include<stdio.h>
main()
{
    int i,j,n,prime;
    printf("enter a number:");
    scanf("%d",&n);
    printf("print the prime numbers 1 to %d :\n",n);
    for(i=2;i<=n;i++)
    {
        prime=1;
        for(j=2;j<=i/2;j++)
        if(i%j==0)
        {
            prime=0;
            break;
        }
if(prime==1)
{
    printf("%d\n",i);
}
}
return 0;
}

