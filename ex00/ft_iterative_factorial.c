#include<stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	output;

	i = 1;
	output = 1;
	while(i <= nb)
	{
		output *= i;
		i++;
	}
	if (output > 0)
		return (output);
	return (0);
}

int main()
{
	printf("%d", ft_iterative_factorial(0));
	return (0);
}