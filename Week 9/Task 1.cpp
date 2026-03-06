# include<stdio.h>

int main()
{   int i,a=5,j,k;
	for(i=1;i<10;i++)
	{
		if(i<=5)
		{
		for(k=1;k<10;k++)
		{
		if(k==a)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d ",j);
			}
		}
		else
		{
			printf(" ");
		}
	    }
	    	a--;
	    	printf(" \n");
	    }
	   else
	    {
	     if(a==0)
	     {
	     	a=a+2;
		 }
		 else
		 {
		 	a++;
		 }
	    	for(k=1;k<10;k++)
		{
		if(k==a)
		{
			for(j=1;j<=10-i;j++)
			{
				printf("%d ",j);
			}
		}
		else
		{
			printf(" ");
		}
	    }
	    printf("\n");
		}	
	}
}
