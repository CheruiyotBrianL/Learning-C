#include <stdio.h>

int main()
{
	int num1,divider;
	int x=0;
	printf("Enter a number:\n");
	scanf( "%d", &num1);
	
	for(divider=2; divider <10 && divider != num1; divider++){
		int rem =num1%divider;

        if(rem==0)
        	x=x+1;

	}
	if (x>0)
		printf("%d is not a prime number\n",num1);
	else
	{
		printf("%d is a prime number\n",num1);
	}
	
	return 0;
}
