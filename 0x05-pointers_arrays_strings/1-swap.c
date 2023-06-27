
/**
 * swap_int - functio to swap pointers a and b
 *
 * @a: pointer no 1
 *
 * @b: pointer no 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp1 = *a;
	int temp2 = *b;
	*a = temp2;
	*b = temp1;
}
