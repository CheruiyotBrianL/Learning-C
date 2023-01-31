#include <stdio.h>

int main()
{
	int num1;
	printf("Enter number to compute factorial\n");
	scanf("%d",&num1);
	int num2=num1-1;
	int factorial=num1;
	for(num2; num2>0; num2--){
	factorial=factorial*num2;	
	}
	printf("The factorial of %d is %d\n", num1,factorial);
	return 0;
}
