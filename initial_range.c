#include<stdio.h>
int main(){
int n,i,j,k,sum;
printf("Enter initial number of range:");
scanf("%d",&j);
printf("Enter final number of range : ");
scanf("%d",&k);
for(n = j;n < k; n++)
{
i = 1;
sum = 0;
while(i < n)
{
if(n % i == 0)
sum += i;
i++;
}
if (sum == n)
printf("%d\n",n);
}
return 0;
}
