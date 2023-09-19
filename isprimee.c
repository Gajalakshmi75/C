#include<stdio.h>
int isprime(int num);        //declaring a fuction
int main()
{
	int num=2,i,j,n;
	printf("enter the no of lines you want to print=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)     //inner loo[ for rows
	{
		for(j=1;j<=i;j++)     //outer loop for printing elements in columns
		{
			while(!isprime(num))  //while loop executes if it is not a prime number and terminates if it is not a prime number
			{
					num++;
			}
			printf("%d\t ",num);
		 num++;
		}
		printf("\n");
}
}
int isprime(int num)   //fuction to know whether given number is prime or not
{
	int m,count=0;
	for(m=2;m<num;m++)
	{
		if(num%m!=0)
	      count=1;
		else
		{
			count=0;
			break;
		}
	}
if(count==1 || num==2)    //returns 1 if it is a prime number
 return 1;
else
 return 0;            //returns 0 if it is not a prime number
}
