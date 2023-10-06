/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:17:24 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/08/31 16:26:18 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numero;	

	numero = '0';
	while (numero <= '9')
	{
		write(1, &numero, 1);
		numero++;
	}
}
//int main (){
//
//	ft_print_numbers();
//	return 0;
//}
