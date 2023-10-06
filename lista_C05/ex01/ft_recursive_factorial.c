/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:22:27 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/19 16:24:51 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		result = 0;
	else if (nb == 0 || nb == 1)
		result = 1;
	else
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}
/*
#include <stdio.h>

int     main(void)
{
        int     ft_recursive_fatorial();
	// max possivel é 12.
        printf("o fatorial é %i", ft_recursive_factorial(3));
        return 0;
}*/
