/**
 * is_prime_number - Checks if a given integer is a prime number
 * @n: The integer to check
 *
 * Return: 1 if @n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return 0;
	return is_prime_helper(n, 2);
}

/**
 * is_prime_helper - Helper function for is_prime_number
 * @n: The integer to check
 * @i: The current divisor to check against @n
 *
 * Return: 1 if @n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (i == n)
		return 1;
	if (n % i == 0)
		return 0;
	return is_prime_helper(n, i + 1);
}

