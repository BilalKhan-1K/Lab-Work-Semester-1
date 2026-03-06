#include<stdio.h>

main()
{
	int num;
	unsigned long long factorial = 1;
	
	printf("Enter a Positive Integer = ");
	scanf("%d", &num);
	
	if (num < 0)
	{
		printf("Please enter a positive integer.");
	}
	else{
		for (int i = 1; i <= num; i++)
		{
			factorial = factorial * i;
		}
		printf("Factorial of %d = %llu", num, factorial);
	}
	
	return 0;
}
