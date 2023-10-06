/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:28:39 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/19 17:58:53 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		result = 0;
	else if (power == 0)
		result = 1;
	else
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
/*
#include <stdio.h>

int	main (void)
{
	int	ft_recursive_power();
	
	printf ("o resultado da potencia de é igual a %i\n", ft_recursive_power(1, 1));
	printf ("o resultado da potencia de é igual a %i\n", ft_recursive_power(0, 0));
	printf ("o resultado da potencia de é igual a %i\n", ft_recursive_power(2,8));
	printf ("o resultado da potencia de é igual a %i", ft_recursive_power(2,-8));
}*/
