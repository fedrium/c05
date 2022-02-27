#include <stdio.h>
int	ft_intrative_power(int nb, int power)
{
	int	i;
	int	output;

	i = 1;
	output = nb;
	while (power > i)
	{
		output *= nb;
		i++;
	}
	return (output);
}

int main()
{
	printf("%d", ft_intrative_power(3, 3));
	return 0;
}