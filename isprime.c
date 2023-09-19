// whether the given number is Palindrome or not

#include<stdio.h>

int main()
{									// rev - reverse number
	int num, rev = 0, rem, temp;	// rem - reminder

	printf("Enter the number to check whether Palindrome or not :  ");
	scanf("%d",&num);

	temp = num;
	while(temp > 0)
	{
		rem = temp % 10;
		rev = (rev * 10) + rem;
		temp = temp / 10;
	}

	if(rev == num)
		printf("\n %d is Palindrome number ....",num);
	else
		printf("\n %d is not Palindrome number ....",num);
	return 0;
}
