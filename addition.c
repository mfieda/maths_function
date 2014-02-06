#include <stdio.h>

int main()
{
	int first, second, add;
	
	printf("Enter two integers\n");
	scanf("%d%d", &first, &second);
	
	add = first+second;
	
	printf("Sum = %d\n", add);
	
	return 0;
}
