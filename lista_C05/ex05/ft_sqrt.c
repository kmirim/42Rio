/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 06:36:14 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/19 14:19:55 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	while (a * a < nb && a < 46340)
		a++;
	if (a * a == nb)
		return (a);
	else
		return (0);
}
/*
#include <stdio.h>
int	main ()
{
	int	ft_sqrt();
	printf ("%i", ft_sqrt(4));
}*/
