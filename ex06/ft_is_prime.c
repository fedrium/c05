#include<stdio.h>
int ft_is_prime(int nb)
{
	int	i;
	int	isprime;

	i = 2;
	isprime = 0;
	if (nb < 2)
		return (0);
	while (i < nb / 2)
	{
		if (nb % i != 0)
			isprime++;
		i++;
	}
	if (isprime > 0)
		return (1);
	return (0);
}

int	main()
{
	printf("%d", ft_is_prime(3));
	return (0);
}