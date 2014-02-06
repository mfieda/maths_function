#include <stdio.h>

int main()
{
	int first, second;
	float divide;
	
	printf("Enter two integers\n");
	scanf("%d%d", &first, &second);
	
	divide = first / (float)second;
	
	printf("Division = %.2f\n", divide);
	
	return 0;
}
