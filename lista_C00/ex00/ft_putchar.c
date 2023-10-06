/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:12:52 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/08/31 16:21:48 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
//uma funçao vazia com nome de ft_ parametro char tipo de argumento c é o nome

//int	main(void)
//{
//	ft_putchar('k');
//	return (0);
//}
