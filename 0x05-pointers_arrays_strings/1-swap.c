/**
 * swap_int - swap
 * @a: int
 * @b: int
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
