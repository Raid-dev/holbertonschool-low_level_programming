#include <stdio.h>

// Define the maximum number of digits
#define MAX_DIGITS 100

int main(void)
{
	int digits[MAX_DIGITS];

	for (int i = 0; i < MAX_DIGITS; i++)
	{
		digits[i] = 0;
	}

	int f1 = 0, f2 = 1;

	int i;

	for (i = 3; i <= 98; i++)
	{
		int temp = f1;

		f1 = f2;

		f2 = temp;

		int carry = 0;

		for (int j = 0; j < MAX_DIGITS; j++)
		{
			int sum = digits[j] + f1 + carry;
  			digits[j] = sum % 10;
			carry = sum / 10;
		}
	}

	int start = MAX_DIGITS - 1;

	while (digits[start] == 0)
	{
		start--;
	}

	for (int k = start; k >= 0; k--)
	{
		printf("%d", digits[k]);
	}

	printf("\n");

	return 0;
}
