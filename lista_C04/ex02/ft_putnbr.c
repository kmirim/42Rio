/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 23:09:57 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/17 04:50:04 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar ('-');
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr (nb / 10);
	if (nb >= 0)
		ft_putchar (nb % 10 + 48);
}
/*
int main()
{
	ft_putnbr(0);
	return(0);
}*/
