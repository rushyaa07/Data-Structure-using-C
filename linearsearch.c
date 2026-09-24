#include <stdio.h>

int main(void)
{
	int numbers[] = {10, 25, 30, 45, 60};
	int target = 30;
	int i;

	for (i = 0; i < 5; i++)
	{
		if (numbers[i] == target)
		{
			printf("Found at index %d.\n", i);
			return 0;
		}
	}

	printf("Not found.\n");
	return 0;
}
