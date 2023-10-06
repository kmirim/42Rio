/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:02:49 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/19 15:53:50 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb >= 2)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
/*
#include <stdio.h>

int	main(void)
{
	int	ft_iterative_factorial();	

	printf("o fatorial é %i", ft_iterative_factorial(3));
	return 0;
}*/	
