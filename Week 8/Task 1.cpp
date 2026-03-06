#include<stdio.h>
main()
{
	int number, digit, newnumber = 0, place = 1;
	printf("Enter a 5 Digit Number = ");
	scanf("%d", &number);
	
	while (number > 0)
	{
		digit = number % 10;
		digit = (digit + 1) % 10;
		newnumber = digit * place + newnumber;
		place = place * 10;
		number = number / 10;
	}
	
	printf("The New 5 Digit Number = %d", newnumber);
}

