#include <stdio.h>

int main()
{
	int first, second, multiply;
	
	printf("Enter two integers\n");
	scanf("%d%d", &first, &second);
	
	multiply = first * second;
	
	printf("Multiplication = %d\n", multiply);
	
	return 0;
}
