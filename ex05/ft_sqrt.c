/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuxian <cyu-xian@student.42kl.edu.my>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:19:51 by cyuxian           #+#    #+#             */
/*   Updated: 2022/02/28 12:57:09 by cyuxian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb < 0)
	   return (0);
	while ((root * root < nb) && nb < 46340)
	{
		root++;
	}
	if (root * root == nb)
		return (root);
	else
		return (0);
}

int main()
{
	printf("%d", ft_sqrt(81));
	return (0);
}