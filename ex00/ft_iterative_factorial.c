/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuxian <cyu-xian@student.42kl.edu.my>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:11:39 by cyuxian           #+#    #+#             */
/*   Updated: 2022/02/28 11:12:44 by cyuxian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
