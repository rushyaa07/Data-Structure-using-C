#include <stdio.h>

int main(void)
{
	int first;
	int second;
	int third;
	int maximum;

	first = 30;
	second = 45;
	third = 12;

	maximum = first;
	if (second > maximum)
	{
		maximum = second;
	}
	if (third > maximum)
	{
		maximum = third;
	}

	printf("Maximum number: %d\n", maximum);
	return 0;
}
