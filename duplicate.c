#include <stdio.h>

int main(void)
{
	int numbers[] = {10, 20, 20, 30, 40};
	int size = 5;
	int i;
	int j;

	for (i = 0; i < size - 1; i++)
	{
		if (numbers[i] == numbers[i + 1])
		{
			for (j = i + 1; j < size - 1; j++)
			{
				numbers[j] = numbers[j + 1];
			}
			size--;
			break;
		}
	}

	for (i = 0; i < size; i++)
	{
		printf("%d ", numbers[i]);
	}

	return 0;
}
