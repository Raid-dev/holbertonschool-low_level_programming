#include <stdio.h>

#define MAX_DIGITS 100

int main(void)
{
	int digits[MAX_DIGITS];
	int f1;
	int f2;
	int temp;
	int i;
	int j;
	int k;
	int carry;
	int sum;
	int start;

	for (i = 0; i < MAX_DIGITS; i++)
	{
		digits[i] = 0;
	}

	f1 = 0;
	f2 = 1;

	for (i = 3; i <= 98; i++)
	{
		temp = f1;

		f1 = f2;

		f2 = temp;

		carry = 0;

		for (j = 0; j < MAX_DIGITS; j++)
		{
			sum = digits[j] + f1 + carry;

  			digits[j] = sum % 10;

			carry = sum / 10;
		}
	}

	start = MAX_DIGITS - 1;

	while (digits[start] == 0)
	{
		start--;
	}

	for (k = start; k >= 0; k--)
	{
		printf("%d", digits[k]);
	}

	printf("\n");

	return 0;
}
