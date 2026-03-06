#include<stdio.h>

int findHCF(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int findLCM(int a, int b, int hcf)
{
	return (a * b) / hcf;
}

main()
{
	int x, y, hcf, lcm;
	
	printf("Enter Two Numbers = ");
	scanf("%d %d", &x,&y);
	hcf = findHCF(x, y);
	lcm = findLCM(x, y, hcf);
	
	printf("HCF of %d and %d is = %d\n", x, y, hcf);
	printf("LCM of %d and %d is = %d\n", x, y, lcm);
	
	return 0;	
}

