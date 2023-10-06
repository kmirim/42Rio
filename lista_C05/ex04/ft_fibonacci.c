/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:18:34 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/19 06:34:51 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
}
/*
#include <stdio.h>
int	main (void)
{
	printf("esse é o resultado da sequencia de fibonnaci %i", ft_fibonacci(8));
	return (0);	
}
*/
