//M9_W5_Ex01_Amir

#include<stdio.h>

main()
{
	int x, y, sum, mul, sub, mod, div;
	printf("Calculator Program\n****************************************\nPlease enter your first value(x) :>>");
//	printf("Please enter your first value(x) :>>");
	scanf("%d", &x);
	printf("\nPlease enter your second value(y):>>");
	scanf("%d", &y);
//	printf("************************************\n");
	sum = x+y;
	mul = x*y;
	sub = x-y;
	mod = x%y;
	div = x/y;
	printf("************************************\nx + y = %d\nx * y = %d\nx - y = %d\nx %% y = %d\nx / y = %d", sum, mul, sub,mod,div);
}
