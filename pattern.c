#include <stdio.h>
void main(){
int n,i = 1,j;
printf("Enter a number :");
scanf("%d",&n);
while(i < ((2 * n) + 1))
{
for(j = 1 ; j <= i;j++){
printf("*");
}
printf("\n");
i = i + 2;
}
i = i - 3;
while(i > 1)
{
for (j = 1; j < i;j++ )
{
printf("*");
}
printf("\n");
i = i - 2;
}
}
