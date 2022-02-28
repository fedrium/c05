/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuxian <cyu-xian@student.42kl.edu.my>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:13:40 by cyuxian           #+#    #+#             */
/*   Updated: 2022/02/28 11:13:55 by cyuxian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
