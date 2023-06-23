void _putchar(char c);

/**
 * fizzBuzz - Prints Fizz, Buzz, or the number itself based on given conditions
 * @num: The number to evaluate
 */
void fizzBuzz(int num)
{
	if (num % 3 == 0 && num % 5 == 0)
	{
		_putchar('F');
		_putchar('i');
		_putchar('z');
		_putchar('z');
		_putchar('B');
		_putchar('u');
		_putchar('z');
		_putchar('z');
	}
	else if (num % 3 == 0)
	{
		_putchar('F');
		_putchar('i');
		_putchar('z');
		_putchar('z');
	}
	else if (num % 5 == 0)
	{
		_putchar('B');
		_putchar('u');
		_putchar('z');
		_putchar('z');
	}
	else
	{
		int temp = num;
		int count = 0;

		while (temp != 0)
		{
			count++;
			temp /= 10;
		}

		temp = num;
		while (count != 0)
		{
			int digit = temp % 10;
			_putchar('0' + digit);
			temp /= 10;
			count--;
		}
	}
}

/**
 * printFizzBuzz - Prints the FizzBuzz sequence from 1 to 100
 */
void printFizzBuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		fizzBuzz(i);
		if (i != 100)
			_putchar(' ');

	}
	_putchar('\n');
}

