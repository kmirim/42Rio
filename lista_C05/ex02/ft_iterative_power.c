/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 08:36:49 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/19 21:47:09 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	i = 1;
	num = nb;
	while (i < power)
	{
		nb *= num;
		i++;
	}
	return (nb);
}
/*

#include <stdio.h>
	
int	main ()
{
	int	ft_iterative();
	printf ("o resultado da potenciação é %i", ft_iterative_power(2, 8));
	printf ("o resultado da potenciação é %i", ft_iterative_power(1, 1));
	return (0);
}*/
