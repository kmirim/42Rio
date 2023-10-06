/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarcelo <lbarcelo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:04:15 by lbarcelo          #+#    #+#             */
/*   Updated: 2023/09/07 11:20:18 by lbarcelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{	
		write (1, str, 1);
		str ++;
	}
}
/*int	main () 
{
	char	*array;

	array = "kalu";
	ft_putstr(array);

	return 0;
}
*/
