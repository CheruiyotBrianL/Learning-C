#include <stdio.h>


int IsPrime(int num1){
	
	int divider;
	int x=0;
	
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
int main()
{
	
	return 0;
}
